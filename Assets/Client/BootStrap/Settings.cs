using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Settings : MonoBehaviour
{
    private static Settings _instance;

    public static Settings Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<Settings>();

                if (_instance != null)
                {
                    return _instance;
                }
            }

            return _instance;
        }
    }

    [SerializeField] private BootConfig bootConfig;

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
                Instance.bootConfig = Resources.Load<BootConfig>("LEngineConfig");
                if (Instance.bootConfig == null)
                {
                    Instance.bootConfig = ScriptableObject.CreateInstance<BootConfig>();
                    Debug.Log("not found boot config, create a new config");
                }
            }
            return Instance.bootConfig;
        }
    }
}
