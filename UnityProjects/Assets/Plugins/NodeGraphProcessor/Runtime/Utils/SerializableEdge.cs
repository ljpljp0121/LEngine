﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GraphProcessor
{
    /// <summary>
    /// 注意，Edge的出端口和入端口取决于连接时两个端口的类型
    /// output A ----------------- input B      出端口就是A，入端口就是B
    /// </summary>
    [System.Serializable]
    public class SerializableEdge : ISerializationCallbackReceiver
    {
        public string GUID;

        [SerializeField]
        BaseGraph owner;

        [SerializeField]
        string inputNodeGUID;
        [SerializeField]
        string outputNodeGUID;

        [System.NonSerialized]
        public BaseNode inputNode;

        [System.NonSerialized]
        public NodePort inputPort;
        [System.NonSerialized]
        public NodePort outputPort;

        [System.NonSerialized]
        public BaseNode outputNode;

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
