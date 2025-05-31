
using System;
using UnityEngine;
using UnityEngine.UI;

public class GenBlur : MonoBehaviour
{
    public static RenderTexture RtForFeature;
    public static bool bClose = false;
    public static Color trColor = new Color(0, 0, 0, 0.7f);
    public static int shareRefCount;
    public static Texture TrxShare;
    
    public Color color = Color.white;
    public GameObject[] relatedObj = Array.Empty<GameObject>();
    public GameObject[] inactiveObj = Array.Empty<GameObject>();
    public bool IsShare;
    public bool Once;
    public bool isRefresh = true;

    private CanvasGroup cg;
    private RawImage ri;

    public RawImage RI => ri;

    void Awake()
    {
        
    }
}
