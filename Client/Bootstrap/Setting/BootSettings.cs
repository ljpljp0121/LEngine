using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BootSettings : MonoBehaviour
{
    private static BootSettings _instance;

    public static BootSettings Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<BootSettings>();

                if (_instance == null)
                {
                    _instance = GameObject.Find("Setting").AddComponent<BootSettings>();
                }
            }

            return _instance;
        }
    }

    [SerializeField] private BootConfig bootConfig;
    [SerializeField] private EngineConfig engineConfig;

    public static BootConfig BootConfig
    {
        get
        {
#if UNITY_EDITOR
            if (Instance == null)
            {
                string[] guids = UnityEditor.AssetDatabase.FindAssets("t:BootConfig");
                if (guids.Length >= 1)
                {
                    string path = UnityEditor.AssetDatabase.GUIDToAssetPath(guids[0]);
                    return UnityEditor.AssetDatabase.LoadAssetAtPath<BootConfig>(path);
                }
            }

#endif
            if (Instance.bootConfig == null)
            {
                Instance.bootConfig = Resources.Load<BootConfig>("BootConfig");
                if (Instance.bootConfig == null)
                {
                    Instance.bootConfig = ScriptableObject.CreateInstance<BootConfig>();
                    Debug.Log("not found boot config, create a new config");
                }
            }

            return Instance.bootConfig;
        }
    }

    public static EngineConfig EngineConfig
    {
        get
        {
            if (Instance.engineConfig == null)
            {
                Instance.engineConfig = Resources.Load<EngineConfig>("EngineConfig");
                if (Instance.engineConfig == null)
                {
                    Instance.engineConfig = ScriptableObject.CreateInstance<EngineConfig>();
                    Debug.Log("not found engine config, create a new config");
                }
            }
            return Instance.engineConfig;
        }
    }

}
