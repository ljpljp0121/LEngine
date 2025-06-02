using UnityEngine;
using System.Collections.Generic;

namespace GraphProcessor
{
    /// <summary>
    /// 堆栈节点数据结构容器
    /// </summary>
    [System.Serializable]
    public class BaseStackNode
    {
        /// <summary>堆栈节点在图中的位置坐标</summary>
        public Vector2 position;
        /// <summary>堆栈标题（显示在堆栈顶部）</summary>
        public string title = "New Stack";

        /// <summary>
        /// 是否允许拖放其他节点到本堆栈中
        /// true: 可拖放节点加入堆栈
        /// false: 禁止拖放操作
        /// </summary>
        public bool acceptDrop;

        /// <summary>
        /// 是否允许在堆栈上创建新节点
        /// true: 当在堆栈上按空格键时创建新节点
        /// false: 禁止在堆栈上创建新节点
        /// </summary>
        public bool acceptNewNode;

        /// <summary>
        /// 堆栈中包含的节点GUID列表
        /// GUID（全局唯一标识符）用于标识堆栈中的各个节点
        /// </summary>
        public List< string >   nodeGUIDs = new List< string >();

        public BaseStackNode(Vector2 position, string title = "Stack", bool acceptDrop = true, bool acceptNewNode = true)
        {
            this.position = position;
            this.title = title;
            this.acceptDrop = acceptDrop;
            this.acceptNewNode = acceptNewNode;
        }
    }
}