using HybridCLR.Editor;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using HybridCLR.Editor.Commands;
using UnityEditor;
using UnityEngine;
using YooAsset.Editor;

public enum EBuildBundleType
{
    /// <summary>
    /// 未知类型
    /// </summary>
    Unknown = 0,

    /// <summary>
    /// 虚拟资源包
    /// </summary>
    VirtualBundle = 1,

    /// <summary>
    /// AssetBundle
    /// </summary>
    AssetBundle = 2,

    /// <summary>
    /// 原生文件
    /// </summary>
    RawBundle = 3,
}

public class BuildTool : OdinEditorWindow
{
    public void Init()
    {
        SetPackageChoices();
        BuildTarget = EditorUserBuildSettings.activeBuildTarget;
    }

    private static IEnumerable PackageChoices = new ValueDropdownList<string>();

    [Title("基本配置")]
    [SerializeField, LabelText("Build管线")]
    private EBuildPipeline buildPipeline = EBuildPipeline.BuiltinBuildPipeline;

    [SerializeField, LabelText("资源包")]
    [ValueDropdown("PackageChoices", HideChildProperties = true)]
    private string packageName;

    private static void SetPackageChoices()
    {
        var packageNameChoices = new ValueDropdownList<string>();
        foreach (var package in AssetBundleCollectorSettingData.Setting.Packages)
        {
            packageNameChoices.Add(package.PackageName);
        }
        PackageChoices = packageNameChoices;
    }

    [Title("选项")]
    [Button("打资源包")]
    public void BuildPackage()
    {

    }

    [InlineButton("BuildAndCopyDlls", "Build并生成Dll文本文件")]
    public BuildTarget BuildTarget;

    private void BuildAndCopyDlls()
    {
        CompileDllCommand.CompileDll(BuildTarget);
        Debug.Log("开始生成Dll文本文件");
        GenerateAOTBytesFile();
        GenerateHotUpdateBytesFile();
        AssetDatabase.Refresh();
        Debug.Log("完成生成Dll文件");
    }

    private void GenerateAOTBytesFile()
    {
        Debug.Log("Start generate AOT DLL bytes");
        string aotDllDirPath =
            System.Environment.CurrentDirectory
            + "\\"
            + SettingsUtil.GetAssembliesPostIl2CppStripDir(EditorUserBuildSettings.activeBuildTarget)
                .Replace('/', '\\');
        string aotDllTextDirPath = System.Environment.CurrentDirectory + "\\" + Settings.BootConfig.AssemblyAssetPath.Replace("/", "\\");

        foreach (var dllName in SettingsUtil.AOTAssemblyNames)
        {
            string path = $"{aotDllDirPath}\\{dllName}.dll";
            if (!File.Exists(path))
            {
                Debug.LogError($"添加AOT补充元数据dll:{path}时发生错误，文件不存在");
                continue;

            }
            File.Copy(path, $"{aotDllTextDirPath}\\{dllName}.dll.bytes", true);
            Debug.Log($"Generate AOT Dll bytes {dllName}");
        }
    }

    private void GenerateHotUpdateBytesFile()
    {
        Debug.Log("Start generate HotUpdate DLL bytes");
        string hotUpdateDllDirPath =
            System.Environment.CurrentDirectory
            + "\\"
            + SettingsUtil.GetHotUpdateDllsOutputDirByTarget(EditorUserBuildSettings.activeBuildTarget)
                .Replace('/', '\\');

        string hotUpdateDllTextDirPath =
            System.Environment.CurrentDirectory + "\\" + Settings.BootConfig.AssemblyAssetPath.Replace('/', '\\');

        foreach (string dllName in SettingsUtil.HotUpdateAssemblyNamesExcludePreserved)
        {
            File.Copy($"{hotUpdateDllDirPath}\\{dllName}.dll", $"{hotUpdateDllTextDirPath}\\{dllName}.dll.bytes", true);
            Debug.Log($"Generate HotUpdate Dll bytes {dllName}");
        }
    }
}
