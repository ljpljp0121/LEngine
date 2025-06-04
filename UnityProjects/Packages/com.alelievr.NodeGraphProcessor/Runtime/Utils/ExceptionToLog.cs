using UnityEngine;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// 异常捕获工具类
    /// </summary>
    public static class ExceptionToLog
    {
        /// <summary>
        /// 安全调用Action，捕获异常并打印到Unity控制台
        /// </summary>
        public static void Call(Action a)
        {
#if UNITY_EDITOR
            try
            {
#endif
                a?.Invoke();
#if UNITY_EDITOR
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
#endif
        }
    }
}
