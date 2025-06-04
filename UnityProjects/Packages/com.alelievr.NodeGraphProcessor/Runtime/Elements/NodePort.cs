// #define DEBUG_LAMBDA

using System.Linq;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using System.Reflection;
using System.Linq.Expressions;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// 端口数据描述类
    /// </summary>
    public class PortData : IEquatable<PortData>
    {
        /// <summary>
        /// 端口唯一标识符
        /// </summary>
        public string identifier;
        /// <summary>
        /// 显示名称
        /// </summary>
        public string displayName;
        /// <summary>
        /// 显示类型(用于样式着色)
        /// </summary>
        public Type displayType;
        /// <summary>
        /// 是否允许多连接
        /// </summary>
        public bool acceptMultipleEdges;
        /// <summary>
        /// 端口大小
        /// </summary>
        public int sizeInPixel;
        /// <summary>
        /// 工具提示
        /// </summary>
        public string tooltip;
        /// <summary>
        /// 是否垂直排列
        /// </summary>
        public bool vertical;

        public bool Equals(PortData other)
        {
            return identifier == other.identifier
                && displayName == other.displayName
                && displayType == other.displayType
                && acceptMultipleEdges == other.acceptMultipleEdges
                && sizeInPixel == other.sizeInPixel
                && tooltip == other.tooltip
                && vertical == other.vertical;
        }

        /// <summary>
        /// 从另一个端口数据复制值
        /// </summary>
        public void CopyFrom(PortData other)
        {
            identifier = other.identifier;
            displayName = other.displayName;
            displayType = other.displayType;
            acceptMultipleEdges = other.acceptMultipleEdges;
            sizeInPixel = other.sizeInPixel;
            tooltip = other.tooltip;
            vertical = other.vertical;
        }
    }

    /// <summary>
    /// 节点端口运行时类
    /// </summary>
    public class NodePort
    {
        /// <summary>端口后面的属性的实际名称(必须准确,用于反射)</summary>
        public string fieldName;

        /// <summary>所属节点</summary>
        public BaseNode owner;

        /// <summary>字段反射信息</summary>
        public FieldInfo fieldInfo;

        /// <summary>端口配置数据</summary>
        public PortData portData;

        /// <summary>字段所属对象</summary>
        public object fieldOwner;

        List<SerializableEdge> edges = new List<SerializableEdge>(); //连接边列表
        Dictionary<SerializableEdge, PushDataDelegate> pushDataDelegates = new Dictionary<SerializableEdge, PushDataDelegate>();// 数据推送委托
        List<SerializableEdge> edgeWithRemoteCustomIO = new List<SerializableEdge>();// 自定义IO边列表

        // 自定义IO方法
        CustomPortIODelegate customPortIOMethod;

        /// <summary>
        /// 委托将数据从该端口发送到通过边缘连接的另一个端口
        /// 与使用反射动态设置值相比，这是一种优化（反射非常慢）
        /// More info: https://codeblog.jonskeet.uk/2008/08/09/making-reflection-fly-and-exploring-delegates/
        /// </summary>
        public delegate void PushDataDelegate();

        public NodePort(BaseNode owner, string fieldName, PortData portData) : this(owner, owner, fieldName, portData) { }

        public NodePort(BaseNode owner, object fieldOwner, string fieldName, PortData portData)
        {
            this.fieldName = fieldName;
            this.owner = owner;
            this.portData = portData;
            this.fieldOwner = fieldOwner;

            fieldInfo = fieldOwner.GetType().GetField(
                fieldName,
                BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
            customPortIOMethod = CustomPortIO.GetCustomPortMethod(owner.GetType(), fieldName);
        }

        /// <summary>
        /// 添加边连接
        /// </summary>
        public void Add(SerializableEdge edge)
        {
            if (!edges.Contains(edge))
                edges.Add(edge);

            if (edge.inputNode == owner)
            {
                if (edge.outputPort.customPortIOMethod != null)
                    edgeWithRemoteCustomIO.Add(edge);
            }
            else
            {
                if (edge.inputPort.customPortIOMethod != null)
                    edgeWithRemoteCustomIO.Add(edge);
            }

            //if we have a custom io implementation, we don't need to genereate the defaut one
            if (edge.inputPort.customPortIOMethod != null || edge.outputPort.customPortIOMethod != null)
                return;

            PushDataDelegate edgeDelegate = CreatePushDataDelegateForEdge(edge);

            if (edgeDelegate != null)
                pushDataDelegates[edge] = edgeDelegate;
        }

        /// <summary>
        /// 创建数据推送委托（表达式树实现）
        /// </summary>
        PushDataDelegate CreatePushDataDelegateForEdge(SerializableEdge edge)
        {
            try
            {
                //Creation of the delegate to move the data from the input node to the output node:
                FieldInfo inputField = edge.inputNode.GetType().GetField(edge.inputFieldName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
                FieldInfo outputField = edge.outputNode.GetType().GetField(edge.outputFieldName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
                Type inType, outType;

#if DEBUG_LAMBDA
				return new PushDataDelegate(() => {
					var outValue = outputField.GetValue(edge.outputNode);
					inType = edge.inputPort.portData.displayType ?? inputField.FieldType;
					outType = edge.outputPort.portData.displayType ?? outputField.FieldType;
					Debug.Log($"Push: {inType}({outValue}) -> {outType} | {owner.name}");

					object convertedValue = outValue;
					if (TypeAdapter.AreAssignable(outType, inType))
					{
						var convertionMethod = TypeAdapter.GetConvertionMethod(outType, inType);
						Debug.Log("Convertion method: " + convertionMethod.Name);
						convertedValue = convertionMethod.Invoke(null, new object[]{ outValue });
					}

					inputField.SetValue(edge.inputNode, convertedValue);
				});
#endif

                // We keep slow checks inside the editor
#if UNITY_EDITOR
                if (!BaseGraph.TypesAreConnectable(inputField.FieldType, outputField.FieldType))
                {
                    Debug.LogError("Can't convert from " + inputField.FieldType + " to " + outputField.FieldType + ", you must specify a custom port function (i.e CustomPortInput or CustomPortOutput) for non-implicit convertions");
                    return null;
                }
#endif

                Expression inputParamField = Expression.Field(Expression.Constant(edge.inputNode), inputField);
                Expression outputParamField = Expression.Field(Expression.Constant(edge.outputNode), outputField);

                inType = edge.inputPort.portData.displayType ?? inputField.FieldType;
                outType = edge.outputPort.portData.displayType ?? outputField.FieldType;

                // If there is a user defined convertion function, then we call it
                if (TypeAdapter.AreAssignable(outType, inType))
                {
                    // We add a cast in case there we're calling the conversion method with a base class parameter (like object)
                    var convertedParam = Expression.Convert(outputParamField, outType);
                    outputParamField = Expression.Call(TypeAdapter.GetConvertionMethod(outType, inType), convertedParam);
                    // In case there is a custom port behavior in the output, then we need to re-cast to the base type because
                    // the convertion method return type is not always assignable directly:
                    outputParamField = Expression.Convert(outputParamField, inputField.FieldType);
                }
                else // otherwise we cast
                    outputParamField = Expression.Convert(outputParamField, inputField.FieldType);

                BinaryExpression assign = Expression.Assign(inputParamField, outputParamField);
                return Expression.Lambda<PushDataDelegate>(assign).Compile();
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                return null;
            }
        }

        /// <summary>
        /// 移除边连接
        /// </summary>
        public void Remove(SerializableEdge edge)
        {
            if (!edges.Contains(edge))
                return;

            pushDataDelegates.Remove(edge);
            edgeWithRemoteCustomIO.Remove(edge);
            edges.Remove(edge);
        }

        /// <summary>
        /// 获取所有连接边
        /// </summary>
        public List<SerializableEdge> GetEdges() => edges;

        /// <summary>
        /// 推送数据（输出端口）
        /// </summary>
        public void PushData()
        {
            if (customPortIOMethod != null)
            {
                customPortIOMethod(owner, edges, this);
                return;
            }

            foreach (var pushDataDelegate in pushDataDelegates)
                pushDataDelegate.Value();

            if (edgeWithRemoteCustomIO.Count == 0)
                return;

            //if there are custom IO implementation on the other ports, they'll need our value in the passThrough buffer
            object ourValue = fieldInfo.GetValue(fieldOwner);
            foreach (var edge in edgeWithRemoteCustomIO)
                edge.passThroughBuffer = ourValue;
        }

        /// <summary>
        /// 重置端口到默认值
        /// </summary>
        public void ResetToDefault()
        {
            // Clear lists, set classes to null and struct to default value.
            if (typeof(IList).IsAssignableFrom(fieldInfo.FieldType))
                (fieldInfo.GetValue(fieldOwner) as IList)?.Clear();
            else if (fieldInfo.FieldType.GetTypeInfo().IsClass)
                fieldInfo.SetValue(fieldOwner, null);
            else
            {
                try
                {
                    fieldInfo.SetValue(fieldOwner, Activator.CreateInstance(fieldInfo.FieldType));
                }
                catch { } // Catch types that don't have any constructors
            }
        }

        /// <summary>
        /// 拉取数据（输入端口）
        /// </summary>
        public void PullData()
        {
            if (customPortIOMethod != null)
            {
                customPortIOMethod(owner, edges, this);
                return;
            }

            // check if this port have connection to ports that have custom output functions
            if (edgeWithRemoteCustomIO.Count == 0)
                return;

            // Only one input connection is handled by this code, if you want to
            // take multiple inputs, you must create a custom input function see CustomPortsNode.cs
            if (edges.Count > 0)
            {
                var passThroughObject = edges.First().passThroughBuffer;

                // We do an extra convertion step in case the buffer output is not compatible with the input port
                if (passThroughObject != null)
                    if (TypeAdapter.AreAssignable(fieldInfo.FieldType, passThroughObject.GetType()))
                        passThroughObject = TypeAdapter.Convert(passThroughObject, fieldInfo.FieldType);

                fieldInfo.SetValue(fieldOwner, passThroughObject);
            }
        }
    }

    /// <summary>
    /// 节点端口容器基类
    /// </summary>
    public abstract class NodePortContainer : List<NodePort>
    {
        protected BaseNode node;

        public NodePortContainer(BaseNode node)
        {
            this.node = node;
        }

        /// <summary>
        /// 移除边连接
        /// </summary>
        public void Remove(SerializableEdge edge)
        {
            ForEach(p => p.Remove(edge));
        }

        /// <summary>
        /// 添加边连接
        /// </summary>
        public void Add(SerializableEdge edge)
        {
            string portFieldName = (edge.inputNode == node) ? edge.inputFieldName : edge.outputFieldName;
            string portIdentifier = (edge.inputNode == node) ? edge.inputPortIdentifier : edge.outputPortIdentifier;

            // Force empty string to null since portIdentifier is a serialized value
            if (String.IsNullOrEmpty(portIdentifier))
                portIdentifier = null;

            var port = this.FirstOrDefault(p =>
            {
                return p.fieldName == portFieldName && p.portData.identifier == portIdentifier;
            });

            if (port == null)
            {
                Debug.LogError("The edge can't be properly connected because it's ports can't be found");
                return;
            }

            port.Add(edge);
        }
    }

    /// <summary>
    /// 输入端口容器
    /// </summary>
    public class NodeInputPortContainer : NodePortContainer
    {
        public NodeInputPortContainer(BaseNode node) : base(node) { }

        /// <summary>
        /// 从所有输入端口拉取数据
        /// </summary>
        public void PullDatas()
        {
            ForEach(p => p.PullData());
        }
    }

    /// <summary>
    /// 输出端口容器
    /// </summary>
    public class NodeOutputPortContainer : NodePortContainer
    {
        public NodeOutputPortContainer(BaseNode node) : base(node) { }

        /// <summary>
        /// 向所有输出端口推送数据
        /// </summary>
        public void PushDatas()
        {
            ForEach(p => p.PushData());
        }
    }
}