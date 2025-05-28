using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Singleton<T> where T : Singleton<T>, new()
{
    protected static T instance;
    public static T Instance
    {
        get { return instance ??= new T(); }
    }
}
