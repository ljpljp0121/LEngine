using UnityEngine;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// �쳣���񹤾���
    /// </summary>
    public static class ExceptionToLog
    {
        /// <summary>
        /// ��ȫ����Action�������쳣����ӡ��Unity����̨
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
