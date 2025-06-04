using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using System.Collections;
using System.IO;
using UnityEditor;
using UnityEngine;
using YooAsset.Editor;

public enum EBuildBundleType
{
    /// <summary>
    /// δ֪����
    /// </summary>
    Unknown = 0,

    /// <summary>
    /// ������Դ��
    /// </summary>
    VirtualBundle = 1,

    /// <summary>
    /// AssetBundle
    /// </summary>
    AssetBundle = 2,

    /// <summary>
    /// ԭ���ļ�
    /// </summary>
    RawBundle = 3,
}

public class BuildTool : OdinEditorWindow
{
    public void Init()
    {
        SetPackageChoices();
        BuildTarget = EditorUserBuildSettings.activeBuildTarget;
        bootConfig = BootSettings.BootConfig;
    }

    private static IEnumerable PackageChoices = new ValueDropdownList<string>();
    private BootConfig bootConfig;

    [Title("��������")]
    [SerializeField, LabelText("Build����")]
    private EBuildPipeline buildPipeline = EBuildPipeline.BuiltinBuildPipeline;

    [SerializeField, LabelText("��Դ��")]
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

    [Title("ѡ��")]
    [Button("����Դ��")]
    public void BuildPackage()
    {

    }

    [InlineButton("BuildAndCopyDlls", "Build������Dll�ı��ļ�")]
    public BuildTarget BuildTarget;

    private void BuildAndCopyDlls()
    {
        CompileDllCommand.CompileDll(BuildTarget);
        Debug.Log("��ʼ����Dll�ı��ļ�");
        GenerateAOTBytesFile();
        GenerateHotUpdateBytesFile();
        AssetDatabase.Refresh();
        Debug.Log("�������Dll�ļ�");
    }

    private void GenerateAOTBytesFile()
    {
        Debug.Log("Start generate AOT DLL bytes");
        string aotDllDirPath =
            System.Environment.CurrentDirectory
            + "\\"
            + SettingsUtil.GetAssembliesPostIl2CppStripDir(EditorUserBuildSettings.activeBuildTarget)
                .Replace('/', '\\');
        string aotDllTextDirPath = System.Environment.CurrentDirectory + "\\" + bootConfig.AssemblyAssetPath.Replace("/", "\\");

        foreach (var dllName in SettingsUtil.AOTAssemblyNames)
        {
            string path = $"{aotDllDirPath}\\{dllName}.dll";
            if (!File.Exists(path))
            {
                Debug.LogError($"���AOT����Ԫ����dll:{path}ʱ���������ļ�������");
                continue;

            }
            File.Copy(path, $"{aotDllTextDirPath}\\{dllName}.dll.bytes", true);
            Debug.Log($"Generate AOT Dll bytes {dllName}");
        }
    }

    private void GenerateHotUpdateBytesFile()
    {
        Debug.Log("Start generate HotUpdate DLL bytes");
        //string hotUpdateDllDirPath =
        //    System.Environment.CurrentDirectory
        //    + "\\"
        //    + SettingsUtil.GetHotUpdateDllsOutputDirByTarget(EditorUserBuildSettings.activeBuildTarget)
        //        .Replace('/', '\\');
        string hotUpdateDllDirPath =
            System.Environment.CurrentDirectory
            + "\\"
            + "Assets/Plugins"
                .Replace('/', '\\');

        string hotUpdateDllTextDirPath =
            System.Environment.CurrentDirectory + "\\" + bootConfig.AssemblyAssetPath.Replace('/', '\\');

        foreach (string dllName in SettingsUtil.HotUpdateAssemblyNamesExcludePreserved)
        {
            File.Copy($"{hotUpdateDllDirPath}\\{dllName}.dll", $"{hotUpdateDllTextDirPath}\\{dllName}.dll.bytes", true);
            Debug.Log($"Generate HotUpdate Dll bytes {dllName}");
        }
    }
}
