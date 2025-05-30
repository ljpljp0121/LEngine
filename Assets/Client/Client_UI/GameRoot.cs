using System.Collections;
using System.Collections.Generic;
using IngameDebugConsole;
using LEngine;
using UnityEngine;

public class GameRoot
{
    public static void Enter()
    {
        Debug.Log("Enter HotFix Assembly Success!!! Nice!!!");
        GameObject gameRoot = GameObject.Find("GameRoot");
        if (gameRoot == null)
        {
            Debug.LogError("Not found");
        }
        //¿ò¼ÜÆô¶¯
        LEngineRoot engineRoot = gameRoot.TryAddComponent<LEngineRoot>();
        engineRoot.Init();
        //InitOnLoad
        InitLEngineOnLoad.Init();
        Debug.Log("InitLEngineOnLoad Init");
        InitLogicOnLoad.Init();
        Debug.Log("InitLogicOnLoad Init");
        InitGameplayOnLoad.Init();
        Debug.Log("InitGameplayOnLoad Init");
        InitUIOnLoad.Init();
        Debug.Log("InitUIOnLoad Init");
        InitInGameDebug();
        Game.UI.ShowUI<StartPanel>();
    }

    private static void InitInGameDebug()
    {
        var trans = DebugLogManager.Instance.transform.Find("DebugLogWindow/CustomQuickWnd");
        if (trans != null)
        {
            trans.gameObject.TryAddComponent<CustomQuickWnd>();
        }
    }
}
