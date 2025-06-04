using UnityEngine;
using System;
using Object = UnityEngine.Object;

namespace GraphProcessor
{
    /// <summary>
    /// ��BaseNode��ʵ�ִ˽ӿڣ�����������graphview������ɾ��T���͵��ʲ�ʱ�Զ����ɽڵ�
    /// </summary>
    public interface ICreateNodeFrom<T> where T : Object
    {
        /// <summary>
        /// �˺����ڴӶ��󴴽��ڵ���������ã���������ʹ�ö������ݳ�ʼ���ڵ㡣
        /// </summary>
        bool InitializeNodeFromObject(T value);
    }
}