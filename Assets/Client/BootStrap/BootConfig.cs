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
    /// ��Ŀ����
    /// </summary>
    public string ProjectName = "LEngine";
    /// <summary>
    /// �汾��
    /// </summary>
    public string Version = "1.0.0";
    /// <summary>
    /// ����ģʽ
    /// </summary>
    public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;
    /// <summary>
    /// ��Դ������
    /// </summary>
    public string ResourcePackageName = "ResourcePackage";
    /// <summary>
    /// DLL������
    /// </summary>
    public string DllPackageName = "DllPackage";
    /// <summary>
    /// AOTԪ���ݳ����ļ��б�
    /// </summary>
    public List<string> AOTMetaAssemblyFiles = new List<string>()
    {
        "mscorlib.dll",
        "System.dll",
        "System.Core.dll",
    };
    /// <summary>
    /// �ȸ��³����б�
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
