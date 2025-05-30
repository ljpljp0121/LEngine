
using System;
using System.Reflection;
using DG.Tweening;
using IngameDebugConsole;
using LEngine;
using log4net.Util;
using UnityEngine;
using UnityEngine.UI;

[AttributeUsage(AttributeTargets.Method)]
public class CommandBtnAttribute : Attribute
{
    public string BtnName = "未命名";
    public string checkFlagFunc = "";
    public float BtnNameRefresh = 0;

    public CommandBtnAttribute(string name)
    {
        this.BtnName = name;
    }

    public CommandBtnAttribute(string name, string checkFlagFunc)
    {
        this.BtnName = name;
        this.checkFlagFunc = checkFlagFunc;
    }
    public CommandBtnAttribute(string name, float refresh)
    {
        this.BtnName = name;
        this.BtnNameRefresh = refresh;
    }
}

public class CustomQuickWnd : MonoBehaviour
{
    void Start()
    {
        Button prefab = transform.ClearChildrenExceptFirst<Button>();
        MethodInfo[] infos = GetType().GetMethods(BindingFlags.Public | BindingFlags.Instance);

        for (int i = 0; i < infos.Length; i++)
        {
            var info = infos[i];
            foreach (var attribute in info.GetCustomAttributes(false))
            {
                if (attribute.GetType() == typeof(CommandBtnAttribute))
                {
                    try
                    {
                        CommandBtnAttribute attr = attribute as CommandBtnAttribute;
                        var btn = Instantiate(prefab, transform);
                        SetCheckFlag(btn, attr);
                        SetButtonName(btn, attr);
                        btn.SetButton(() =>
                        {
                            info.Invoke(this, null);
                            SetCheckFlag(btn, attr);
                        });
                        btn.gameObject.SetActive(true);
                        break;
                    }
                    catch (Exception e)
                    {
                        Debug.LogError(e);
                    }
                }
            }
        }
    }

    private void SetButtonName(Button btn, CommandBtnAttribute attr)
    {
        try
        {
            if (attr.BtnName.EndsWith("()"))
            {
                var methodInfo = this.GetType().GetMethod(attr.BtnName.Replace("()", ""));
                if (methodInfo != null)
                {
                    btn.GetComponentInChildren<Text>().text = (string)methodInfo.Invoke(this, null);
                }
                else
                {
                    btn.GetComponentInChildren<Text>().text = attr.BtnName;
                }
            }
            else
            {
                btn.GetComponentInChildren<Text>().text = attr.BtnName;
            }
            if (attr.BtnNameRefresh > 0)
            {
                DOVirtual.DelayedCall(attr.BtnNameRefresh, () =>
                {
                    SetButtonName(btn, attr);
                });
            }
        }
        catch (Exception e)
        {
            Debug.LogError(e);
        }
    }

    private void SetCheckFlag(Button btn, CommandBtnAttribute attr)
    {
        try
        {
            var img = btn.GetComponent<Image>();
            if (img != null)
            {
                bool btnActive = false;
                if (string.IsNullOrEmpty(attr.checkFlagFunc) == false)
                {
                    var methodInfo = this.GetType().GetMethod(attr.checkFlagFunc);
                    btnActive = (bool)methodInfo.Invoke(this, null);
                }
                img.color = btnActive ? Color.yellow : Color.white;
            }
        }
        catch (Exception e)
        {
            Debug.LogError(e);
        }
    }

    [CommandBtn("GetVersion()")]
    public void Test1()
    {
        Debug.Log($"当前版本{Application.version}");
    }

    public string GetVersion()
    {
        return "ver: " + Application.version;
    }

    [CommandBtn("测试按钮")]
    public void Test2()
    {
        Debug.Log("测试测试测试活动");
    }

    [CommandBtn("Flag测试", "TestFlag")]
    public void FlagTest()
    {
        flag = !flag;
        Debug.Log($"Flag测试{flag}");
    }

    private bool flag;

    public bool TestFlag()
    {
        return flag;
    }
}



public class GameCommand
{
    [InitOnLoad]
    private static void Init()
    {
        Debug.Log("Command Init");
        //在本类里添加命令
        DebugLogConsole.AddCommand<string, GameObject>("test1", "test1 to add command ", AddChild);
        //方法可以在任何类里(必须是静态方法)
        DebugLogConsole.AddCommandStatic("test2", "test2 to add command", "TestMethod",
            typeof(TestCommandClass));
        //方法可以在任何类里(因为不是静态方法所以必须有类的实例)
        DebugLogConsole.AddCommandInstance("test3", "test3 to add command", "TestMethod2", TestCommandClass.Instance);
    }

    public static GameObject AddChild(string name)
    {
        GameObject child = new GameObject(name);
        return child;
    }

    //使用Attribute添加命令
    [ConsoleMethod("test4", "test4 to add command")]
    public static void TestDebug(int name)
    {
        Debug.Log($"Command1111Debug  {name}");
    }
}

public class TestCommandClass : Singleton<TestCommandClass>
{
    public void TestMethod2(float num)
    {
        Debug.Log($"TestClass TestMethod2 {num}");
    }

    //这种GameObject参数就直接填场景里GameObject的名字
    public static void TestMethod(GameObject obj)
    {
        Debug.Log($"TestClass TestMethod {obj.name}");
    }
}