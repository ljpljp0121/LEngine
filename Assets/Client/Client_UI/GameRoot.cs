using System.Collections;
using System.Collections.Generic;
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
        InitLogicOnLoad.Init();
        InitGameplayOnLoad.Init();
        InitUIOnLoad.Init();

        Game.UI.ShowUI<StartPanel>();
    }
}
