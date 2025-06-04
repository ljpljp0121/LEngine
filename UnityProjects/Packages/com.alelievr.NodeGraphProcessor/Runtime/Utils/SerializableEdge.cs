using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GraphProcessor
{
    /// <summary>
    /// 序列化边类
    /// 实现节点间连接关系持续化
    /// </summary>
    [System.Serializable]
    public class SerializableEdge : ISerializationCallbackReceiver
    {
        public string GUID;     //唯一标识

        [SerializeField]
        BaseGraph owner;        //所属图引用

        [SerializeField]
        string inputNodeGUID;   // 输入节点GUID
        [SerializeField]
        string outputNodeGUID;  // 输出节点GUID

        [System.NonSerialized] public BaseNode inputNode;
        [System.NonSerialized] public BaseNode outputNode;
        [System.NonSerialized] public NodePort inputPort;
        [System.NonSerialized] public NodePort outputPort;
        [System.NonSerialized] public object passThroughBuffer; //数据传输临时缓冲区 (用于自定义input/output函数使用)

        public string inputFieldName;
        public string outputFieldName;
        // Use to store the id of the field that generate multiple ports
        public string inputPortIdentifier;
        public string outputPortIdentifier;

        public SerializableEdge() { }

        public static SerializableEdge CreateNewEdge(BaseGraph graph, NodePort inputPort, NodePort outputPort)
        {
            SerializableEdge edge = new SerializableEdge();

            edge.owner = graph;
            edge.GUID = System.Guid.NewGuid().ToString();
            edge.inputNode = inputPort.owner;
            edge.inputFieldName = inputPort.fieldName;
            edge.outputNode = outputPort.owner;
            edge.outputFieldName = outputPort.fieldName;
            edge.inputPort = inputPort;
            edge.outputPort = outputPort;
            edge.inputPortIdentifier = inputPort.portData.identifier;
            edge.outputPortIdentifier = outputPort.portData.identifier;

            return edge;
        }

        public void OnBeforeSerialize()
        {
            if (outputNode == null || inputNode == null)
                return;

            outputNodeGUID = outputNode.GUID;
            inputNodeGUID = inputNode.GUID;
        }

        public void OnAfterDeserialize() { }

        //here our owner have been deserialized
        public void Deserialize()
        {
            if (!owner.nodesPerGUID.ContainsKey(outputNodeGUID) || !owner.nodesPerGUID.ContainsKey(inputNodeGUID))
                return;

            outputNode = owner.nodesPerGUID[outputNodeGUID];
            inputNode = owner.nodesPerGUID[inputNodeGUID];
            inputPort = inputNode.GetPort(inputFieldName, inputPortIdentifier);
            outputPort = outputNode.GetPort(outputFieldName, outputPortIdentifier);
        }

        public override string ToString() => $"{outputNode.name}:{outputPort.fieldName} -> {inputNode.name}:{inputPort.fieldName}";
    }
}
