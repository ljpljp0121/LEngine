using System;
using System.Reflection;
using UnityEngine;

public class InitLEngineOnLoad
{
    public static bool loaded = false;
    public static void Init()
    {
        if (!loaded)
        {
            InitOnLoadMethod.ProcessInitOnLoadMethod(typeof(InitLEngineOnLoad));
            loaded = true;
        }
    }
}

[AttributeUsage(AttributeTargets.Method)]
public class InitOnLoadAttribute : Attribute
{
}

public class InitOnLoadMethod
{
    public static void ProcessInitOnLoadMethod(Type assemblyClassType)
    {
        Type[] types = assemblyClassType.Assembly.GetTypes();
        foreach (Type type in types)
        {
            MethodInfo[] info = type.GetMethods(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
            foreach (MethodInfo property in info)
            {
                foreach (var attribute in property.GetCustomAttributes(false))
                {
                    if (attribute.GetType() == typeof(InitOnLoadAttribute))
                    {
                        try
                        {
                            property.Invoke(null, null);
                        }
                        catch (Exception e)
                        {
                            Debug.Log(e.StackTrace);
                        }
                    }
                }
            }
        }
    }
}