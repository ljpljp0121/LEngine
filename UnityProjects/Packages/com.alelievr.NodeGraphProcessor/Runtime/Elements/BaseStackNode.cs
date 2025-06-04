using UnityEngine;
using System.Collections.Generic;

namespace GraphProcessor
{
    /// <summary>
    /// ��ջ�ڵ����ݽṹ����
    /// </summary>
    [System.Serializable]
    public class BaseStackNode
    {
        /// <summary>��ջ�ڵ���ͼ�е�λ������</summary>
        public Vector2 position;
        /// <summary>��ջ���⣨��ʾ�ڶ�ջ������</summary>
        public string title = "New Stack";

        /// <summary>
        /// �Ƿ������Ϸ������ڵ㵽����ջ��
        /// true: ���ϷŽڵ�����ջ
        /// false: ��ֹ�ϷŲ���
        /// </summary>
        public bool acceptDrop;

        /// <summary>
        /// �Ƿ������ڶ�ջ�ϴ����½ڵ�
        /// true: ���ڶ�ջ�ϰ��ո��ʱ�����½ڵ�
        /// false: ��ֹ�ڶ�ջ�ϴ����½ڵ�
        /// </summary>
        public bool acceptNewNode;

        /// <summary>
        /// ��ջ�а����Ľڵ�GUID�б�
        /// GUID��ȫ��Ψһ��ʶ�������ڱ�ʶ��ջ�еĸ����ڵ�
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