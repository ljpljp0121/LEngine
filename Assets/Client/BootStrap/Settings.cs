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
            if (Instance == null)
            {
                Debug.LogError("Settings instance is not initialized. Please ensure Settings is present in the scene.");
                return null;
            }

            Instance.bootConfig = Resources.Load<BootConfig>("LEngineConfig");
            if (Instance.bootConfig == null)
            {
                Instance.bootConfig = ScriptableObject.CreateInstance<BootConfig>();
                Debug.Log("not found boot config, create a new config");
            }
            return Instance.bootConfig;
        }
    }
}
