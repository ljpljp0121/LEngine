using Sirenix.OdinInspector;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

[CreateAssetMenu(fileName = "LEngineConfig", menuName = "LEngine/LEngineConfig")]
public class BootConfig : ScriptableObject
{
    /// <summary>
    /// 项目名称
    /// </summary>
    public string ProjectName = "LEngine";
    /// <summary>
    /// 版本号
    /// </summary>
    public string Version = "1.0.0";
    /// <summary>
    /// 运行模式
    /// </summary>
    public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;
    /// <summary>
    /// 资源包名称
    /// </summary>
    public string ResourcePackageName = "ResourcePackage";
    /// <summary>
    /// DLL包名称
    /// </summary>
    public string DllPackageName = "DllPackage";
    /// <summary>
    /// AOT元数据程序集文件列表
    /// </summary>
    public List<string> AOTMetaAssemblyFiles = new List<string>()
    {
        "mscorlib.dll",
        "System.dll",
        "System.Core.dll",
    };
    /// <summary>
    /// 热更新程序集列表
    /// </summary>
    public List<string> HotUpdateAssets = new List<string>()
    {
        "LEngine.dll",
        "Client_Logic.dll",
        "Client_Gameplay.dll",
        "Client_UI.dll",
    };

    public string AssemblyAssetPath = "Assets/Bundle/Dll";
}
