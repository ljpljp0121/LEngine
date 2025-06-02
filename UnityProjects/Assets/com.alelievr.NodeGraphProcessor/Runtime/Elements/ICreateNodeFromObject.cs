using UnityEngine;
using System;
using Object = UnityEngine.Object;

namespace GraphProcessor
{
    /// <summary>
    /// 在BaseNode上实现此接口，它允许您在graphview区域中删除T类型的资产时自动生成节点
    /// </summary>
    public interface ICreateNodeFrom<T> where T : Object
    {
        /// <summary>
        /// 此函数在从对象创建节点后立即调用，并允许您使用对象数据初始化节点。
        /// </summary>
        bool InitializeNodeFromObject(T value);
    }
}