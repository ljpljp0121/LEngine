using Sirenix.OdinInspector;
using System.Threading.Tasks;
using UnityEngine;
using YooAsset;

public class Bootstrap : MonoBehaviour
{
    public static Bootstrap Instance { get; set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this.gameObject);
            return;
        }

        Debug.Log($"资源系统运行模式：{Settings.BootConfig.PlayMode}");
        Instance = this;
        DontDestroyOnLoad(gameObject);
        BootTaskUtil.Run(async () =>
        {
            await ReadyAsset();
        });
    }

    private async Task ReadyAsset()
    {
        YooAssets.Initialize();
        await StartLoadUtils.InitDll(Settings.BootConfig.DllPackageName, Settings.BootConfig.PlayMode);
        await StartLoadUtils.InitResource(Settings.BootConfig.ResourcePackageName, Settings.BootConfig.PlayMode);
        var package = YooAssets.TryGetPackage(Settings.BootConfig.ResourcePackageName);
        YooAssets.SetDefaultPackage(package);
    }
}