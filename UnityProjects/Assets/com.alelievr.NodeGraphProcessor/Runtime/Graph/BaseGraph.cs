using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using System;
using UnityEngine.Serialization;
using UnityEngine.SceneManagement;

namespace GraphProcessor
{
    /// <summary>
    /// 记录图结构变化的容器类
    /// </summary>
    public class GraphChanges
    {
        public SerializableEdge removedEdge;  // 被移除的边
        public SerializableEdge addedEdge;    // 新增的边
        public BaseNode removedNode;          // 被移除的节点
        public BaseNode addedNode;            // 新增的节点
        public BaseNode nodeChanged;          // 内容变更的节点
        public Group addedGroups;             // 新增的节点组
        public Group removedGroups;           // 移除的节点组
        public BaseStackNode addedStackNode;  // 新增的堆栈节点
        public BaseStackNode removedStackNode;// 移除的堆栈节点
        public StickyNote addedStickyNotes;   // 新增的便签
        public StickyNote removedStickyNotes; // 移除的便签
    }

    /// <summary>
    /// 节点计算顺序的排序方式
    /// </summary>
    public enum ComputeOrderType
    {
        DepthFirst,
        BreadthFirst,
    }

    /// <summary>
    /// 节点图的核心数据结构（序列化存储）
    /// </summary>
    [System.Serializable]
    public class BaseGraph : ScriptableObject, ISerializationCallbackReceiver
    {
        // 防止无限递归的安全阈值
        static readonly int maxComputeOrderDepth = 1000;

        // 特殊计算顺序标记值
        /// <summary>Invalid compute order number of a node when it's inside a loop</summary>
        public static readonly int loopComputeOrder = -2; // 表示节点存在循环依赖
        /// <summary>Invalid compute order number of a node can't process</summary>
        public static readonly int invalidComputeOrder = -1; // 表示节点无法处理

        #region 节点数据

        /// <summary>
        /// 图中所有节点的列表
        /// </summary>
        [SerializeReference]
        public List<BaseNode> nodes = new List<BaseNode>();

        /// <summary>
        /// 节点GUID快速查找字典
        /// </summary>
        /// <typeparam name="string"></typeparam>
        /// <typeparam name="BaseNode"></typeparam>
        /// <returns></returns>
        [System.NonSerialized]
        public Dictionary<string, BaseNode> nodesPerGUID = new Dictionary<string, BaseNode>();

        #endregion

        #region 边数据

        /// <summary>
        /// 所有边的列表
        /// </summary>
        [SerializeField]
        public List<SerializableEdge> edges = new List<SerializableEdge>();
        /// <summary>
        /// 边GUID快速查找字典
        /// </summary>
        [System.NonSerialized]
        public Dictionary<string, SerializableEdge> edgesPerGUID = new Dictionary<string, SerializableEdge>();

        #endregion

        #region 组结构数据

        /// <summary>
        /// 节点分组
        /// </summary>
        [SerializeField, FormerlySerializedAs("commentBlocks")]
        public List<Group> groups = new List<Group>();

        /// <summary>
        /// 堆栈式节点
        /// </summary>
        [SerializeField, SerializeReference] // Polymorphic serialization
        public List<BaseStackNode> stackNodes = new List<BaseStackNode>();

        /// <summary>
        ///  固定在编辑器上的元素
        /// </summary>
        [SerializeField]
        public List<PinnedElement> pinnedElements = new List<PinnedElement>();

        #endregion

        #region 参数数据

        /// <summary>
        /// 暴露参数列表
        /// </summary>
        [SerializeField, SerializeReference]
        public List<ExposedParameter> exposedParameters = new List<ExposedParameter>();

        [SerializeField, FormerlySerializedAs("exposedParameters")] // We keep this for upgrade
        List<ExposedParameter> serializedParameterList = new List<ExposedParameter>();

        [SerializeField]
        public List<StickyNote> stickyNotes = new List<StickyNote>();

        #endregion

        [System.NonSerialized]
        Dictionary<BaseNode, int> computeOrderDictionary = new Dictionary<BaseNode, int>(); //节点顺序字典

        [NonSerialized]
        Scene linkedScene; //关联场景(用于引用场景对象)

        // 编辑器专用引用(保持节点检查器存活)
        [SerializeField]
        internal UnityEngine.Object nodeInspectorReference;

        //视图状态
        public Vector3 position = Vector3.zero; //图在画布的位置
        public Vector3 scale = Vector3.one; //图的缩放比例

        #region 事件    

        public event Action onExposedParameterListChanged;          // 暴露参数列表变更
        public event Action<ExposedParameter> onExposedParameterModified;   // 单个参数修改
        public event Action<ExposedParameter> onExposedParameterValueChanged; // 参数值变更
        public event Action<Scene> onSceneLinked;                   // 关联场景变更
        public event Action onEnabled;                              // 图启用事件
        public event Action<GraphChanges> onGraphChanges;          // 图结构变更

        #endregion

        [System.NonSerialized]
        bool _isEnabled = false;
        public bool isEnabled { get => _isEnabled; private set => _isEnabled = value; }

        // 图输出节点(无下游连接的节点)
        public HashSet<BaseNode> graphOutputs { get; private set; } = new HashSet<BaseNode>();

        #region 生命周期

        protected virtual void OnEnable()
        {
            if (isEnabled)
                OnDisable();

            InitializeGraphElements();
            DestroyBrokenGraphElements();
            UpdateComputeOrder();
            isEnabled = true;
            onEnabled?.Invoke();
        }

        protected virtual void OnDisable()
        {
            isEnabled = false;
            foreach (var node in nodes)
                node.DisableInternal();
        }

        #endregion

        /// <summary>
        /// 初始化所有图元素并建立关联
        /// </summary>
        void InitializeGraphElements()
        {
            // Sanitize the element lists (it's possible that nodes are null if their full class name have changed)
            // If you rename / change the assembly of a node or parameter, please use the MovedFrom() attribute to avoid breaking the graph.
            nodes.RemoveAll(n => n == null);
            exposedParameters.RemoveAll(e => e == null);

            foreach (var node in nodes.ToList())
            {
                nodesPerGUID[node.GUID] = node;
                node.Initialize(this);
            }

            foreach (var edge in edges.ToList())
            {
                edge.Deserialize();
                edgesPerGUID[edge.GUID] = edge;

                // Sanity check for the edge:
                if (edge.inputPort == null || edge.outputPort == null)
                {
                    Disconnect(edge.GUID);
                    continue;
                }

                // Add the edge to the non-serialized port data
                edge.inputPort.owner.OnEdgeConnected(edge);
                edge.outputPort.owner.OnEdgeConnected(edge);
            }
        }

        public virtual void OnAssetDeleted() { }

        #region 图结构修改

        /// <summary>
        /// 添加节点
        /// </summary>
        /// <param name="node"></param>
        /// <returns></returns>
        public BaseNode AddNode(BaseNode node)
        {
            nodesPerGUID[node.GUID] = node;

            nodes.Add(node);
            node.Initialize(this);

            onGraphChanges?.Invoke(new GraphChanges { addedNode = node });

            return node;
        }

        /// <summary>
        /// 移除节点
        /// </summary>
        /// <param name="node"></param>
        public void RemoveNode(BaseNode node)
        {
            node.DisableInternal();
            node.DestroyInternal();

            nodesPerGUID.Remove(node.GUID);

            nodes.Remove(node);

            onGraphChanges?.Invoke(new GraphChanges { removedNode = node });
        }

        /// <summary>
        /// 连接两个节点端口
        /// </summary>
        /// <param name="inputPort">input port</param>
        /// <param name="outputPort">output port</param>
        /// <param name="autoDisconnectInputs">is the edge allowed to disconnect another edge</param>
        /// <returns>the connecting edge</returns>
        public SerializableEdge Connect(NodePort inputPort, NodePort outputPort, bool autoDisconnectInputs = true)
        {
            var edge = SerializableEdge.CreateNewEdge(this, inputPort, outputPort);

            //If the input port does not support multi-connection, we remove them
            if (autoDisconnectInputs && !inputPort.portData.acceptMultipleEdges)
            {
                foreach (var e in inputPort.GetEdges().ToList())
                {
                    // TODO: do not disconnect them if the connected port is the same than the old connected
                    Disconnect(e);
                }
            }
            // same for the output port:
            if (autoDisconnectInputs && !outputPort.portData.acceptMultipleEdges)
            {
                foreach (var e in outputPort.GetEdges().ToList())
                {
                    // TODO: do not disconnect them if the connected port is the same than the old connected
                    Disconnect(e);
                }
            }

            edges.Add(edge);

            // Add the edge to the list of connected edges in the nodes
            inputPort.owner.OnEdgeConnected(edge);
            outputPort.owner.OnEdgeConnected(edge);

            onGraphChanges?.Invoke(new GraphChanges { addedEdge = edge });

            return edge;
        }

        /// <summary>
        /// 断开两个节点端口
        /// </summary>
        /// <param name="inputNode">input node</param>
        /// <param name="inputFieldName">input field name</param>
        /// <param name="outputNode">output node</param>
        /// <param name="outputFieldName">output field name</param>
        public void Disconnect(BaseNode inputNode, string inputFieldName, BaseNode outputNode, string outputFieldName)
        {
            edges.RemoveAll(r =>
            {
                bool remove = r.inputNode == inputNode
                && r.outputNode == outputNode
                && r.outputFieldName == outputFieldName
                && r.inputFieldName == inputFieldName;

                if (remove)
                {
                    r.inputNode?.OnEdgeDisconnected(r);
                    r.outputNode?.OnEdgeDisconnected(r);
                    onGraphChanges?.Invoke(new GraphChanges { removedEdge = r });
                }

                return remove;
            });
        }

        /// <summary>
        /// 断开指定边
        /// </summary>
        /// <param name="edge"></param>
        public void Disconnect(SerializableEdge edge) => Disconnect(edge.GUID);

        /// <summary>
        /// 断开指定边
        /// </summary>
        /// <param name="edgeGUID"></param>
        public void Disconnect(string edgeGUID)
        {
            List<(BaseNode, SerializableEdge)> disconnectEvents = new List<(BaseNode, SerializableEdge)>();

            edges.RemoveAll(r =>
            {
                if (r.GUID == edgeGUID)
                {
                    disconnectEvents.Add((r.inputNode, r));
                    disconnectEvents.Add((r.outputNode, r));
                    onGraphChanges?.Invoke(new GraphChanges { removedEdge = r });
                }
                return r.GUID == edgeGUID;
            });

            // Delay the edge disconnect event to avoid recursion
            foreach (var (node, edge) in disconnectEvents)
                node?.OnEdgeDisconnected(edge);
        }

        /// <summary>
        /// 添加一个组
        /// </summary>
        /// <param name="block"></param>
        public void AddGroup(Group block)
        {
            groups.Add(block);
            onGraphChanges?.Invoke(new GraphChanges { addedGroups = block });
        }

        /// <summary>
        /// 移除一个组
        /// </summary>
        /// <param name="block"></param>
        public void RemoveGroup(Group block)
        {
            groups.Remove(block);
            onGraphChanges?.Invoke(new GraphChanges { removedGroups = block });
        }

        /// <summary>
        /// 添加一个栈节点
        /// </summary>
        /// <param name="stackNode"></param>
        public void AddStackNode(BaseStackNode stackNode)
        {
            stackNodes.Add(stackNode);
            onGraphChanges?.Invoke(new GraphChanges { addedStackNode = stackNode });
        }

        /// <summary>
        /// 移除一个栈节点
        /// </summary>
        /// <param name="stackNode"></param>
        public void RemoveStackNode(BaseStackNode stackNode)
        {
            stackNodes.Remove(stackNode);
            onGraphChanges?.Invoke(new GraphChanges { removedStackNode = stackNode });
        }

        /// <summary>
        /// 添加一个粘性便签(就是在节点的边上可以直接输入内容不用连线)
        /// </summary>
        /// <param name="note"></param>
        public void AddStickyNote(StickyNote note)
        {
            stickyNotes.Add(note);
            onGraphChanges?.Invoke(new GraphChanges { addedStickyNotes = note });
        }

        /// <summary>
        /// 移除一个粘性便签
        /// </summary>
        /// <param name="note"></param>
        public void RemoveStickyNote(StickyNote note)
        {
            stickyNotes.Remove(note);
            onGraphChanges?.Invoke(new GraphChanges { removedStickyNotes = note });
        }

        /// <summary>
        /// 节点内容变更通知
        /// </summary>
        public void NotifyNodeChanged(BaseNode node) => onGraphChanges?.Invoke(new GraphChanges { nodeChanged = node });

        /// <summary>
        /// 打开一个固定在编辑器上的元素
        /// </summary>
        /// <param name="viewType">元素类型</param>
        public PinnedElement OpenPinned(Type viewType)
        {
            var pinned = pinnedElements.Find(p => p.editorType.type == viewType);

            if (pinned == null)
            {
                pinned = new PinnedElement(viewType);
                pinnedElements.Add(pinned);
            }
            else
                pinned.opened = true;

            return pinned;
        }

        /// <summary>
        /// 关闭一个固定在编辑器上的元素
        /// </summary>
        /// <param name="viewType">元素类型</param>
        public void ClosePinned(Type viewType)
        {
            var pinned = pinnedElements.Find(p => p.editorType.type == viewType);

            pinned.opened = false;
        }

        #endregion

        #region 参数系统    

        /// <summary>
        /// 添加暴露参数
        /// </summary>
        /// <param name="name">parameter name</param>
        /// <param name="type">parameter type (must be a subclass of ExposedParameter)</param>
        /// <param name="value">default value</param>
        /// <returns>The unique id of the parameter</returns>
        public string AddExposedParameter(string name, Type type, object value = null)
        {

            if (!type.IsSubclassOf(typeof(ExposedParameter)))
            {
                Debug.LogError($"Can't add parameter of type {type}, the type doesn't inherit from ExposedParameter.");
            }

            var param = Activator.CreateInstance(type) as ExposedParameter;

            // patch value with correct type:
            if (param.GetValueType().IsValueType)
                value = Activator.CreateInstance(param.GetValueType());

            param.Initialize(name, value);
            exposedParameters.Add(param);

            onExposedParameterListChanged?.Invoke();

            return param.guid;
        }

        /// <summary>
        /// Add an already allocated / initialized parameter to the graph
        /// </summary>
        /// <param name="parameter">The parameter to add</param>
        /// <returns>The unique id of the parameter</returns>
        public string AddExposedParameter(ExposedParameter parameter)
        {
            string guid = Guid.NewGuid().ToString(); // Generated once and unique per parameter

            parameter.guid = guid;
            exposedParameters.Add(parameter);

            onExposedParameterListChanged?.Invoke();

            return guid;
        }

        /// <summary>
        /// 移除暴露参数
        /// </summary>
        /// <param name="ep">the parameter to remove</param>
        public void RemoveExposedParameter(ExposedParameter ep)
        {
            exposedParameters.Remove(ep);

            onExposedParameterListChanged?.Invoke();
        }

        /// <summary>
        /// Remove an exposed parameter
        /// </summary>
        /// <param name="guid">GUID of the parameter</param>
        public void RemoveExposedParameter(string guid)
        {
            if (exposedParameters.RemoveAll(e => e.guid == guid) != 0)
                onExposedParameterListChanged?.Invoke();
        }

        internal void NotifyExposedParameterListChanged()
            => onExposedParameterListChanged?.Invoke();

        /// <summary>
        /// 更新暴露参数
        /// </summary>
        /// <param name="guid">GUID of the parameter</param>
        /// <param name="value">new value</param>
        public void UpdateExposedParameter(string guid, object value)
        {
            var param = exposedParameters.Find(e => e.guid == guid);
            if (param == null)
                return;

            if (value != null && !param.GetValueType().IsAssignableFrom(value.GetType()))
                throw new Exception("Type mismatch when updating parameter " + param.name + ": from " + param.GetValueType() + " to " + value.GetType().AssemblyQualifiedName);

            param.value = value;
            onExposedParameterModified?.Invoke(param);
        }

        /// <summary>
        /// Update the exposed parameter name
        /// </summary>
        /// <param name="parameter">The parameter</param>
        /// <param name="name">new name</param>
        public void UpdateExposedParameterName(ExposedParameter parameter, string name)
        {
            parameter.name = name;
            onExposedParameterModified?.Invoke(parameter);
        }

        /// <summary>
        /// Update parameter visibility
        /// </summary>
        /// <param name="parameter">The parameter</param>
        /// <param name="isHidden">is Hidden</param>
        public void NotifyExposedParameterChanged(ExposedParameter parameter)
        {
            onExposedParameterModified?.Invoke(parameter);
        }

        public void NotifyExposedParameterValueChanged(ExposedParameter parameter)
        {
            onExposedParameterValueChanged?.Invoke(parameter);
        }

        /// <summary>
        /// 获取暴露参数
        /// </summary>
        /// <param name="name">name</param>
        /// <returns>the parameter or null</returns>
        public ExposedParameter GetExposedParameter(string name)
        {
            return exposedParameters.FirstOrDefault(e => e.name == name);
        }

        /// <summary>
        /// Get exposed parameter from GUID
        /// </summary>
        /// <param name="guid">GUID of the parameter</param>
        /// <returns>The parameter</returns>
        public ExposedParameter GetExposedParameterFromGUID(string guid)
        {
            return exposedParameters.FirstOrDefault(e => e?.guid == guid);
        }

        /// <summary>
        /// Set parameter value from name. (Warning: the parameter name can be changed by the user)
        /// </summary>
        /// <param name="name">name of the parameter</param>
        /// <param name="value">new value</param>
        /// <returns>true if the value have been assigned</returns>
        public bool SetParameterValue(string name, object value)
        {
            var e = exposedParameters.FirstOrDefault(p => p.name == name);

            if (e == null)
                return false;

            e.value = value;

            return true;
        }

        /// <summary>
        /// Get the parameter value
        /// </summary>
        /// <param name="name">parameter name</param>
        /// <returns>value</returns>
        public object GetParameterValue(string name) => exposedParameters.FirstOrDefault(p => p.name == name)?.value;

        /// <summary>
        /// Get the parameter value template
        /// </summary>
        /// <param name="name">parameter name</param>
        /// <typeparam name="T">type of the parameter</typeparam>
        /// <returns>value</returns>
        public T GetParameterValue<T>(string name) => (T)GetParameterValue(name);

        #endregion

        #region 连接场景

        /// <summary>
        /// Link the current graph to the scene in parameter, allowing the graph to pick and serialize objects from the scene.
        /// </summary>
        /// <param name="scene">Target scene to link</param>
        public void LinkToScene(Scene scene)
        {
            linkedScene = scene;
            onSceneLinked?.Invoke(scene);
        }

        /// <summary>
        /// Return true when the graph is linked to a scene, false otherwise.
        /// </summary>
        public bool IsLinkedToScene() => linkedScene.IsValid();

        /// <summary>
        /// Get the linked scene. If there is no linked scene, it returns an invalid scene
        /// </summary>
        public Scene GetLinkedScene() => linkedScene;

        #endregion

        public void OnBeforeSerialize()
        {
            // Cleanup broken elements
            stackNodes.RemoveAll(s => s == null);
            nodes.RemoveAll(n => n == null);
        }

        public void Deserialize()
        {
            // Disable nodes correctly before removing them:
            if (nodes != null)
            {
                foreach (var node in nodes)
                    node.DisableInternal();
            }

            InitializeGraphElements();
        }

        public void OnAfterDeserialize() { }

        void DestroyBrokenGraphElements()
        {
            edges.RemoveAll(e => e.inputNode == null
                                 || e.outputNode == null
                                 || string.IsNullOrEmpty(e.outputFieldName)
                                 || string.IsNullOrEmpty(e.inputFieldName)
            );
            nodes.RemoveAll(n => n == null);
        }

        #region 节点顺序相关

        /// <summary>
        /// 更新节点执行顺序
        /// </summary>
        public void UpdateComputeOrder(ComputeOrderType type = ComputeOrderType.DepthFirst)
        {
            if (nodes.Count == 0)
                return;

            // Find graph outputs (end nodes) and reset compute order
            graphOutputs.Clear();
            foreach (var node in nodes)
            {
                if (node.GetOutputNodes().Count() == 0)
                    graphOutputs.Add(node);
                node.computeOrder = 0;
            }

            computeOrderDictionary.Clear();
            infiniteLoopTracker.Clear();

            switch (type)
            {
                default:
                case ComputeOrderType.DepthFirst:
                    UpdateComputeOrderDepthFirst();
                    break;
                case ComputeOrderType.BreadthFirst:
                    foreach (var node in nodes)
                        UpdateComputeOrderBreadthFirst(0, node);
                    break;
            }
        }

        HashSet<BaseNode> infiniteLoopTracker = new HashSet<BaseNode>();

        /// <summary>
        /// 广度优先遍历
        /// </summary>
        int UpdateComputeOrderBreadthFirst(int depth, BaseNode node)
        {
            int computeOrder = 0;

            if (depth > maxComputeOrderDepth)
            {
                Debug.LogError("Recursion error while updating compute order");
                return -1;
            }

            if (computeOrderDictionary.ContainsKey(node))
                return node.computeOrder;

            if (!infiniteLoopTracker.Add(node))
                return -1;

            if (!node.canProcess)
            {
                node.computeOrder = -1;
                computeOrderDictionary[node] = -1;
                return -1;
            }

            foreach (var dep in node.GetInputNodes())
            {
                int c = UpdateComputeOrderBreadthFirst(depth + 1, dep);

                if (c == -1)
                {
                    computeOrder = -1;
                    break;
                }

                computeOrder += c;
            }

            if (computeOrder != -1)
                computeOrder++;

            node.computeOrder = computeOrder;
            computeOrderDictionary[node] = computeOrder;

            return computeOrder;
        }

        /// <summary>
        /// 深度优先遍历
        /// </summary>
        void UpdateComputeOrderDepthFirst()
        {
            Stack<BaseNode> dfs = new Stack<BaseNode>();

            GraphUtils.FindCyclesInGraph(this, (n) =>
            {
                PropagateComputeOrder(n, loopComputeOrder);
            });

            int computeOrder = 0;
            foreach (var node in GraphUtils.DepthFirstSort(this))
            {
                if (node.computeOrder == loopComputeOrder)
                    continue;
                if (!node.canProcess)
                    node.computeOrder = -1;
                else
                    node.computeOrder = computeOrder++;
            }
        }

        /// <summary>
        /// 为循环节点添加特定顺序值
        /// </summary>
        /// <param name="node"></param>
        /// <param name="computeOrder"></param>
        void PropagateComputeOrder(BaseNode node, int computeOrder)
        {
            Stack<BaseNode> deps = new Stack<BaseNode>();
            HashSet<BaseNode> loop = new HashSet<BaseNode>();

            deps.Push(node);
            while (deps.Count > 0)
            {
                var n = deps.Pop();
                n.computeOrder = computeOrder;

                if (!loop.Add(n))
                    continue;

                foreach (var dep in n.GetOutputNodes())
                    deps.Push(dep);
            }
        }

        #endregion

        /// <summary>
        /// 验证两种类型的接口是否可以连接
        /// </summary>
        /// <param name="t1"></param>
        /// <param name="t2"></param>
        /// <returns></returns>
        public static bool TypesAreConnectable(Type t1, Type t2)
        {
            if (t1 == null || t2 == null)
                return false;

            if (TypeAdapter.AreIncompatible(t1, t2))
                return false;

            //Check if there is custom adapters for this assignation
            if (CustomPortIO.IsAssignable(t1, t2))
                return true;

            //Check for type assignability
            if (t2.IsReallyAssignableFrom(t1))
                return true;

            // User defined type convertions
            if (TypeAdapter.AreAssignable(t1, t2))
                return true;

            return false;
        }
    }
}