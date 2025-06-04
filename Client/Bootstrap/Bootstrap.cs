using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using YooAsset;

public class Bootstrap : MonoBehaviour
{
    public static Bootstrap Instance { get; set; }

    private BootConfig bootConfig;
    private void Awake()
    {
        if (Instance != this)
        {
            Destroy(this.gameObject);
            return;
        }
        bootConfig = BootSettings.BootConfig;
        Debug.Log($"资源系统运行模式：{bootConfig.PlayMode}");
        Instance = this;
        DontDestroyOnLoad(gameObject);
        BootTaskUtil.Run(async () =>
        {
            await ReadyAsset();
            HotFixEnter();
        });
    }

    private async Task ReadyAsset()
    {
        YooAssets.Initialize();
        await StartLoadUtils.InitDll(bootConfig.DllPackageName, bootConfig.PlayMode);
        await StartLoadUtils.InitResource(bootConfig.ResourcePackageName, bootConfig.PlayMode);
        var package = YooAssets.TryGetPackage(bootConfig.ResourcePackageName);
        YooAssets.SetDefaultPackage(package);
    }

    /// <summary>
    /// 热更代码入口
    /// </summary>
    private void HotFixEnter()
    {
        Assembly topHotFixAssembly = GetTopHotFixAssembly();
        if (topHotFixAssembly == null)
        {
            Debug.LogError("未找到热更代码入口所在程序集,请查看资源包");
            return;
        }

        var entryType = topHotFixAssembly.GetType("GameRoot");
        if (entryType == null)
        {
            Debug.LogError("HotFix entry type 'GameRoot' missing, please check it");
            return;
        }

        var entryMethod = entryType.GetMethod("Enter");
        if (entryMethod == null)
        {
            Debug.LogError("HotFix entry method 'Enter' missing, please check it");
            return;
        }

        entryMethod.Invoke(entryType, null);
    }

    private Assembly GetTopHotFixAssembly()
    {
        List<Assembly> hotfixAssemblyList = new List<Assembly>();
        Assembly topHotFixAssembly = null;
        foreach (var assembly in AppDomain.CurrentDomain.GetAssemblies())
        {
            if (string.Compare(bootConfig.HotUpdateAssets.Last(), $"{assembly.GetName().Name}.dll", StringComparison.Ordinal) == 0)
                topHotFixAssembly = assembly;
            foreach (var hotUpdateDllName in bootConfig.HotUpdateAssets)
            {
                if (hotUpdateDllName == $"{assembly.GetName().Name}.dll")
                    hotfixAssemblyList.Add(assembly);
            }
            if (topHotFixAssembly != null && hotfixAssemblyList.Count == bootConfig.HotUpdateAssets.Count)
                break;
        }
        return topHotFixAssembly;
    }
}