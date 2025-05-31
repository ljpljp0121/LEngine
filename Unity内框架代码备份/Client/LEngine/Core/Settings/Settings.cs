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

                if (_instance == null)
                {
                    _instance = GameObject.Find("Setting").AddComponent<Settings>();
                }
            }

            return _instance;
        }
    }
}
