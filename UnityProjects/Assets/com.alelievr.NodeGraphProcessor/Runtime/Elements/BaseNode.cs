using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Reflection;
using System.Linq;

namespace GraphProcessor
{
    // 自定义端口行为委托
    public delegate IEnumerable<PortData> CustomPortBehaviorDelegate(List<SerializableEdge> edges);
    public delegate IEnumerable<PortData> CustomPortTypeBehaviorDelegate(string fieldName, string displayName, object value);

    /// <summary>
    /// 节点系统核心基类
    /// 所有自定义节点必须继承此类
    /// </summary>
    [Serializable]
    public abstract class BaseNode
    {
        #region 基础属性

        [SerializeField]
        internal string nodeCustomName = null; // 用户自定义节点名称
        /// <summary>节点默认名称(类名)</summary>
        public virtual string name => GetType().Name;

        /// <summary>节点主题色</summary>
        public virtual Color color => Color.clear;

        /// <summary>自定义USS样式路径,使用Resources的Load方法</summary>
        public virtual string layoutStyle => string.Empty;

        /// <summary>是否可锁定</summary>
        public virtual bool unlockable => true;

        /// <summary>是否已锁定（锁定后不可移动）</summary>
        public virtual bool isLocked => nodeLock;

        /// <summary>节点唯一标识符</summary>
        public string GUID;

        /// <summary>节点处理顺序</summary>
        public int computeOrder = -1;

        /// <summary>节点是否可处理,不要处理输入因为它在处理之前判断</summary>
        public virtual bool canProcess => true;

        /// <summary>控制面板是否在悬停时显示</summary>
        public virtual bool showControlsOnHover => false;

        /// <summary>是否可删除</summary>
        public virtual bool deletable => true;

        /// <summary>节点在画布中的位置和大小</summary>
        public Rect position;

        /// <summary>节点是否展开显示详细信息</summary>
        public bool expanded;

        /// <summary>是否显示调试信息</summary>
        public bool debug;

        /// <summary>节点的锁定状态</summary>
        public bool nodeLock;

        /// <summary>输入端口容器</summary>
        [NonSerialized] public readonly NodeInputPortContainer inputPorts;

        /// <summary>输出端口容器</summary>
        [NonSerialized] public readonly NodeOutputPortContainer outputPorts;

        /// <summary>消息列表</summary>
        [NonSerialized] List<string> messages = new List<string>();

        /// <summary>父图引用</summary>
        [NonSerialized] protected BaseGraph graph;

        [NonSerialized] bool _needsInspector = false;

        /// <summary>节点是否在选中时在Inspector中显示</summary>
        public virtual bool needsInspector => _needsInspector;

        /// <summary>是否可重命名</summary>
        public virtual bool isRenamable => false;

        /// <summary>是否可通过复制操作创建</summary>
        public bool createdFromDuplication { get; internal set; } = false;

        /// <summary>/// 仅当节点是从重复操作创建的，并且位于同时重复的组内时 才为True/// </summary>
        public bool createdWithinGroup { get; internal set; } = false;

        /// <summary>端口字段信息表</summary>
        [NonSerialized] internal Dictionary<string, NodeFieldInformation> nodeFields = new Dictionary<string, NodeFieldInformation>();

        /// <summary>端口类型行为映射表</summary>
        [NonSerialized] internal Dictionary<Type, CustomPortTypeBehaviorDelegate> customPortTypeBehaviorMap = new Dictionary<Type, CustomPortTypeBehaviorDelegate>();


        #endregion

        #region 事件

        public delegate void ProcessDelegate();
        /// <summary>节点处理时触发</summary>
        public event ProcessDelegate onProcessed;
        /// <summary>添加消息事件</summary>
        public event Action<string, NodeMessageType> onMessageAdded;
        /// <summary>移除消息事件</summary>
        public event Action<string> onMessageRemoved;
        /// <summary>节点连接建立后事件</summary>
        public event Action<SerializableEdge> onAfterEdgeConnected;
        /// <summary>节点连接断开后事件</summary>
        public event Action<SerializableEdge> onAfterEdgeDisconnected;
        /// <summary>端口更新事件</summary>
        public event Action<string> onPortsUpdated;

        #endregion

        /// <summary>节点字段信息结构</summary>
        internal class NodeFieldInformation
        {
            public string name;                     // 显示名称
            public string fieldName;                // 字段名
            public FieldInfo info;                  // 字段元信息
            public bool input;                      // 是否为输入端口
            public bool isMultiple;                 // 是否支持多连接
            public string tooltip;                  // 工具提示文本
            public CustomPortBehaviorDelegate behavior; // 自定义行为
            public bool vertical;                   // 端口是否垂直排列

            public NodeFieldInformation(FieldInfo info, string name, bool input, bool isMultiple, string tooltip, bool vertical, CustomPortBehaviorDelegate behavior)
            {
                this.input = input;
                this.isMultiple = isMultiple;
                this.info = info;
                this.name = name;
                this.fieldName = info.Name;
                this.behavior = behavior;
                this.tooltip = tooltip;
                this.vertical = vertical;
            }
        }

        /// <summary>端口更新结构</summary>
        struct PortUpdate
        {
            public List<string> fieldNames;
            public BaseNode node;

            public void Deconstruct(out List<string> fieldNames, out BaseNode node)
            {
                fieldNames = this.fieldNames;
                node = this.node;
            }
        }

        Stack<PortUpdate> fieldsToUpdate = new Stack<PortUpdate>();
        HashSet<PortUpdate> updatedFields = new HashSet<PortUpdate>();

        protected BaseNode()
        {
            inputPorts = new NodeInputPortContainer(this);
            outputPorts = new NodeOutputPortContainer(this);

            InitializeInOutDatas();
        }

        #region 节点创建

        /// <summary>
        /// 创建指定类型的节点实例，并设置其位置
        /// </summary>
        /// <param name="position">position in the graph in pixels</param>
        /// <typeparam name="T">type of the node</typeparam>
        /// <returns>the node instance</returns>
        public static T CreateFromType<T>(Vector2 position) where T : BaseNode
        {
            return CreateFromType(typeof(T), position) as T;
        }

        /// <summary>
        /// 创建指定类型的节点实例，并设置其位置
        /// </summary>
        /// <param name="position">position in the graph in pixels</param>
        /// <typeparam name="nodeType">type of the node</typeparam>
        /// <returns>the node instance</returns>
        public static BaseNode CreateFromType(Type nodeType, Vector2 position)
        {
            if (!nodeType.IsSubclassOf(typeof(BaseNode)))
                return null;

            var node = Activator.CreateInstance(nodeType) as BaseNode;

            node.position = new Rect(position, new Vector2(100, 100));

            ExceptionToLog.Call(() => node.OnNodeCreated());

            return node;
        }

        /// <summary>
        /// 节点创建时调用：初始化唯一标识符
        /// </summary>
        public virtual void OnNodeCreated() => GUID = Guid.NewGuid().ToString();

        #endregion

        #region 节点生命周期

        /// <summary>
        /// 节点添加到图时调用：初始化父图引用，启用节点
        /// </summary>
        public void Initialize(BaseGraph graph)
        {
            this.graph = graph;
            ExceptionToLog.Call(() => Enable());
            InitializePorts();
        }

        /// <summary>
        /// 节点启用时调用
        /// </summary>
        protected virtual void Enable() { }

        internal void DisableInternal()
        {
            // port containers are initialized in the OnEnable
            inputPorts.Clear();
            outputPorts.Clear();

            ExceptionToLog.Call(Disable);
        }

        /// <summary>
        /// 节点禁用时调用
        /// </summary>
        protected virtual void Disable() { }

        internal void DestroyInternal() => ExceptionToLog.Call(Destroy);

        /// <summary>
        /// 节点销毁时调用
        /// </summary>
        protected virtual void Destroy() { }

        HashSet<BaseNode> portUpdateHashSet = new HashSet<BaseNode>();

        #endregion

        #region 端口初始化和管理

        /// <summary>
        /// 获取节点的字段信息
        /// </summary>
        public virtual FieldInfo[] GetNodeFields()
            => GetType().GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);

        /// <summary>
        /// 初始化节点端口和字段信息
        /// </summary>
        void InitializeInOutDatas()
        {
            var fields = GetNodeFields();
            var methods = GetType().GetMethods(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);

            foreach (var field in fields)
            {
                var inputAttribute = field.GetCustomAttribute<InputAttribute>();
                var outputAttribute = field.GetCustomAttribute<OutputAttribute>();
                var tooltipAttribute = field.GetCustomAttribute<TooltipAttribute>();
                var showInInspector = field.GetCustomAttribute<ShowInInspector>();
                var vertical = field.GetCustomAttribute<VerticalAttribute>();
                bool isMultiple = false;
                bool input = false;
                string name = field.Name;
                string tooltip = null;

                if (showInInspector != null)
                    _needsInspector = true;

                if (inputAttribute == null && outputAttribute == null)
                    continue;

                //check if field is a collection type
                isMultiple = (inputAttribute != null) ? inputAttribute.allowMultiple : (outputAttribute.allowMultiple);
                input = inputAttribute != null;
                tooltip = tooltipAttribute?.tooltip;

                if (!String.IsNullOrEmpty(inputAttribute?.name))
                    name = inputAttribute.name;
                if (!String.IsNullOrEmpty(outputAttribute?.name))
                    name = outputAttribute.name;

                // By default we set the behavior to null, if the field have a custom behavior, it will be set in the loop just below
                nodeFields[field.Name] = new NodeFieldInformation(field, name, input, isMultiple, tooltip, vertical != null, null);
            }

            foreach (var method in methods)
            {
                var customPortBehaviorAttribute = method.GetCustomAttribute<CustomPortBehaviorAttribute>();
                CustomPortBehaviorDelegate behavior = null;

                if (customPortBehaviorAttribute == null)
                    continue;

                // Check if custom port behavior function is valid
                try
                {
                    var referenceType = typeof(CustomPortBehaviorDelegate);
                    behavior = (CustomPortBehaviorDelegate)Delegate.CreateDelegate(referenceType, this, method, true);
                }
                catch
                {
                    Debug.LogError("The function " + method + " cannot be converted to the required delegate format: " + typeof(CustomPortBehaviorDelegate));
                }

                if (nodeFields.ContainsKey(customPortBehaviorAttribute.fieldName))
                    nodeFields[customPortBehaviorAttribute.fieldName].behavior = behavior;
                else
                    Debug.LogError("Invalid field name for custom port behavior: " + method + ", " + customPortBehaviorAttribute.fieldName);
            }
        }

        /// <summary>
        /// 初始化自定义端口类型行为方法
        /// </summary>
        void InitializeCustomPortTypeMethods()
        {
            MethodInfo[] methods = Array.Empty<MethodInfo>();
            Type baseType = GetType();
            while (true)
            {
                methods = baseType.GetMethods(BindingFlags.NonPublic | BindingFlags.Instance);
                foreach (var method in methods)
                {
                    var typeBehaviors = method.GetCustomAttributes<CustomPortTypeBehaviorAttribute>().ToArray();

                    if (typeBehaviors.Length == 0)
                        continue;

                    CustomPortTypeBehaviorDelegate deleg = null;
                    try
                    {
                        deleg = Delegate.CreateDelegate(typeof(CustomPortTypeBehaviorDelegate), this, method) as CustomPortTypeBehaviorDelegate;
                    }
                    catch (Exception e)
                    {
                        Debug.LogError(e);
                        Debug.LogError($"Cannot convert method {method} to a delegate of type {typeof(CustomPortTypeBehaviorDelegate)}");
                    }

                    foreach (var typeBehavior in typeBehaviors)
                        customPortTypeBehaviorMap[typeBehavior.type] = deleg;
                }

                // Try to also find private methods in the base class
                baseType = baseType.BaseType;
                if (baseType == null)
                    break;
            }
        }

        /// <summary>
        /// 根据继承级别设置字段顺序：控制UI中端口的显示顺序
        /// </summary>
        public virtual IEnumerable<FieldInfo> OverrideFieldOrder(IEnumerable<FieldInfo> fields)
        {
            long GetFieldInheritanceLevel(FieldInfo f)
            {
                int level = 0;
                var t = f.DeclaringType;
                while (t != null)
                {
                    t = t.BaseType;
                    level++;
                }

                return level;
            }

            // Order by MetadataToken and inheritance level to sync the order with the port order (make sure FieldDrawers are next to the correct port)
            return fields.OrderByDescending(f => (long)(((GetFieldInheritanceLevel(f) << 32)) | (long)f.MetadataToken));
        }

        /// <summary>
        /// 初始化节点端口：处理简单端口和自定义端口
        /// </summary>
        public virtual void InitializePorts()
        {
            InitializeCustomPortTypeMethods();

            foreach (var key in OverrideFieldOrder(nodeFields.Values.Select(k => k.info)))
            {
                var nodeField = nodeFields[key.Name];

                if (HasCustomBehavior(nodeField))
                {
                    UpdatePortsForField(nodeField.fieldName, false);
                }
                else
                {
                    // If we don't have a custom behavior on the node, we just have to create a simple port
                    AddPort(nodeField.input, nodeField.fieldName, new PortData { acceptMultipleEdges = nodeField.isMultiple, displayName = nodeField.name, tooltip = nodeField.tooltip, vertical = nodeField.vertical });
                }
            }
        }

        #endregion

        #region 端口操作

        /// <summary>
        /// 添加端口到容器
        /// </summary>
        public void AddPort(bool input, string fieldName, PortData portData)
        {
            // Fixup port data info if needed:
            if (portData.displayType == null)
                portData.displayType = nodeFields[fieldName].info.FieldType;

            if (input)
                inputPorts.Add(new NodePort(this, fieldName, portData));
            else
                outputPorts.Add(new NodePort(this, fieldName, portData));
        }

        /// <summary>
        /// 移除指定端口
        /// </summary>
        public void RemovePort(bool input, NodePort port)
        {
            if (input)
                inputPorts.Remove(port);
            else
                outputPorts.Remove(port);
        }

        /// <summary>
        /// 移除指定字段的所有端口
        /// </summary>
        public void RemovePort(bool input, string fieldName)
        {
            if (input)
                inputPorts.RemoveAll(p => p.fieldName == fieldName);
            else
                outputPorts.RemoveAll(p => p.fieldName == fieldName);
        }

        /// <summary>
        /// 更新节点的所有端口(传播更新到连接的节点)
        /// </summary>
        public bool UpdateAllPorts()
        {
            bool changed = false;

            foreach (var key in OverrideFieldOrder(nodeFields.Values.Select(k => k.info)))
            {
                var field = nodeFields[key.Name];
                changed |= UpdatePortsForField(field.fieldName);
            }

            return changed;
        }

        /// <summary>
        /// 更新节点的所有端口(仅限当前节点)
        /// </summary>
        public bool UpdateAllPortsLocal()
        {
            bool changed = false;

            foreach (var key in OverrideFieldOrder(nodeFields.Values.Select(k => k.info)))
            {
                var field = nodeFields[key.Name];
                changed |= UpdatePortsForFieldLocal(field.fieldName);
            }

            return changed;
        }

        /// <summary>
        /// 检查字段是否有自定义行为（方法或类型行为）
        /// </summary>
        bool HasCustomBehavior(NodeFieldInformation info)
        {
            if (info.behavior != null)
                return true;

            if (customPortTypeBehaviorMap.ContainsKey(info.info.FieldType))
                return true;

            return false;
        }

        /// <summary>
        /// 更新字段端口(仅限本地节点)
        /// </summary>
        public bool UpdatePortsForFieldLocal(string fieldName, bool sendPortUpdatedEvent = true)
        {
            bool changed = false;

            if (!nodeFields.ContainsKey(fieldName))
                return false;

            var fieldInfo = nodeFields[fieldName];

            if (!HasCustomBehavior(fieldInfo))
                return false;

            List<string> finalPorts = new List<string>();

            var portCollection = fieldInfo.input ? (NodePortContainer)inputPorts : outputPorts;

            // Gather all fields for this port (before to modify them)
            var nodePorts = portCollection.Where(p => p.fieldName == fieldName);
            // Gather all edges connected to these fields:
            var edges = nodePorts.SelectMany(n => n.GetEdges()).ToList();

            if (fieldInfo.behavior != null)
            {
                foreach (var portData in fieldInfo.behavior(edges))
                    AddPortData(portData);
            }
            else
            {
                var customPortTypeBehavior = customPortTypeBehaviorMap[fieldInfo.info.FieldType];

                foreach (var portData in customPortTypeBehavior(fieldName, fieldInfo.name, fieldInfo.info.GetValue(this)))
                    AddPortData(portData);
            }

            void AddPortData(PortData portData)
            {
                var port = nodePorts.FirstOrDefault(n => n.portData.identifier == portData.identifier);
                // Guard using the port identifier so we don't duplicate identifiers
                if (port == null)
                {
                    AddPort(fieldInfo.input, fieldName, portData);
                    changed = true;
                }
                else
                {
                    // in case the port type have changed for an incompatible type, we disconnect all the edges attached to this port
                    if (!BaseGraph.TypesAreConnectable(port.portData.displayType, portData.displayType))
                    {
                        foreach (var edge in port.GetEdges().ToList())
                            graph.Disconnect(edge.GUID);
                    }

                    // patch the port data
                    if (port.portData != portData)
                    {
                        port.portData.CopyFrom(portData);
                        changed = true;
                    }
                }

                finalPorts.Add(portData.identifier);
            }

            // TODO
            // Remove only the ports that are no more in the list
            if (nodePorts != null)
            {
                var currentPortsCopy = nodePorts.ToList();
                foreach (var currentPort in currentPortsCopy)
                {
                    // If the current port does not appear in the list of final ports, we remove it
                    if (!finalPorts.Any(id => id == currentPort.portData.identifier))
                    {
                        RemovePort(fieldInfo.input, currentPort);
                        changed = true;
                    }
                }
            }

            // Make sure the port order is correct:
            portCollection.Sort((p1, p2) =>
            {
                int p1Index = finalPorts.FindIndex(id => p1.portData.identifier == id);
                int p2Index = finalPorts.FindIndex(id => p2.portData.identifier == id);

                if (p1Index == -1 || p2Index == -1)
                    return 0;

                return p1Index.CompareTo(p2Index);
            });

            if (sendPortUpdatedEvent)
                onPortsUpdated?.Invoke(fieldName);

            return changed;
        }

        /// <summary>
        /// 更新字段端口(传播更新到连接的节点)
        /// </summary>
        public bool UpdatePortsForField(string fieldName, bool sendPortUpdatedEvent = true)
        {
            bool changed = false;

            fieldsToUpdate.Clear();
            updatedFields.Clear();

            fieldsToUpdate.Push(new PortUpdate { fieldNames = new List<string>() { fieldName }, node = this });

            // Iterate through all the ports that needs to be updated, following graph connection when the 
            // port is updated. This is required ton have type propagation multiple nodes that changes port types
            // are connected to each other (i.e. the relay node)
            while (fieldsToUpdate.Count != 0)
            {
                var (fields, node) = fieldsToUpdate.Pop();

                // Avoid updating twice a port
                if (updatedFields.Any((t) => t.node == node && fields.SequenceEqual(t.fieldNames)))
                    continue;
                updatedFields.Add(new PortUpdate { fieldNames = fields, node = node });

                foreach (var field in fields)
                {
                    if (node.UpdatePortsForFieldLocal(field, sendPortUpdatedEvent))
                    {
                        foreach (var port in node.IsFieldInput(field) ? (NodePortContainer)node.inputPorts : node.outputPorts)
                        {
                            if (port.fieldName != field)
                                continue;

                            foreach (var edge in port.GetEdges())
                            {
                                var edgeNode = (node.IsFieldInput(field)) ? edge.outputNode : edge.inputNode;
                                var fieldsWithBehavior = edgeNode.nodeFields.Values.Where(f => HasCustomBehavior(f)).Select(f => f.fieldName).ToList();
                                fieldsToUpdate.Push(new PortUpdate { fieldNames = fieldsWithBehavior, node = edgeNode });
                            }
                        }
                        changed = true;
                    }
                }
            }

            return changed;
        }

        #endregion

        #region 节点连接处理

        /// <summary>
        /// 连接建立时处理：添加连接到端口容器，触发更新
        /// </summary>
        public void OnEdgeConnected(SerializableEdge edge)
        {
            bool input = edge.inputNode == this;
            NodePortContainer portCollection = (input) ? (NodePortContainer)inputPorts : outputPorts;

            portCollection.Add(edge);

            UpdateAllPorts();

            onAfterEdgeConnected?.Invoke(edge);
        }

        /// <summary>
        /// 连接断开时处理：移除连接，重置端口，触发更新
        /// </summary>
        public void OnEdgeDisconnected(SerializableEdge edge)
        {
            if (edge == null)
                return;

            bool input = edge.inputNode == this;
            NodePortContainer portCollection = (input) ? (NodePortContainer)inputPorts : outputPorts;

            portCollection.Remove(edge);

            // Reset default values of input port:
            bool haveConnectedEdges = edge.inputNode.inputPorts.Where(p => p.fieldName == edge.inputFieldName).Any(p => p.GetEdges().Count != 0);
            if (edge.inputNode == this && !haveConnectedEdges && CanResetPort(edge.inputPort))
                edge.inputPort?.ResetToDefault();

            UpdateAllPorts();

            onAfterEdgeDisconnected?.Invoke(edge);
        }

        /// <summary>
        /// 检查端口是否可重置
        /// </summary>
        protected virtual bool CanResetPort(NodePort port) => true;

        #endregion

        #region 节点处理逻辑

        /// <summary>
        /// 节点处理流程：拉取输入 → 执行处理 → 推送输出
        /// </summary>
        public void OnProcess()
        {
            inputPorts.PullDatas();

            ExceptionToLog.Call(Process);

            InvokeOnProcessed();

            outputPorts.PushDatas();
        }

        /// <summary>
        /// 节点核心处理逻辑（子类必须实现）
        /// </summary>
        protected virtual void Process() { }

        /// <summary>
        /// 触发处理完成事件
        /// </summary>
        public void InvokeOnProcessed() => onProcessed?.Invoke();

        #endregion

        #region 端口查询

        /// <summary>
        /// 获取指定端口
        /// </summary>
        public NodePort GetPort(string fieldName, string identifier)
        {
            return inputPorts.Concat(outputPorts).FirstOrDefault(p =>
            {
                var bothNull = String.IsNullOrEmpty(identifier) && String.IsNullOrEmpty(p.portData.identifier);
                return p.fieldName == fieldName && (bothNull || identifier == p.portData.identifier);
            });
        }

        /// <summary>
        /// 获取所有端口
        /// </summary>
        public IEnumerable<NodePort> GetAllPorts()
        {
            foreach (var port in inputPorts)
                yield return port;
            foreach (var port in outputPorts)
                yield return port;
        }

        /// <summary>
        /// 获取所有连接边
        /// </summary>
        public IEnumerable<SerializableEdge> GetAllEdges()
        {
            foreach (var port in GetAllPorts())
                foreach (var edge in port.GetEdges())
                    yield return edge;
        }

        #endregion

        #region 节点关系查询

        /// <summary>
        /// 获取所有输入节点
        /// </summary>
        public IEnumerable<BaseNode> GetInputNodes()
        {
            foreach (var port in inputPorts)
                foreach (var edge in port.GetEdges())
                    yield return edge.outputNode;
        }

        /// <summary>
        /// 获取所有输出节点
        /// </summary>
        public IEnumerable<BaseNode> GetOutputNodes()
        {
            foreach (var port in outputPorts)
                foreach (var edge in port.GetEdges())
                    yield return edge.inputNode;
        }

        /// <summary>
        /// 在节点依赖图中查找符合条件的节点（DFS搜索）
        /// </summary>
        public BaseNode FindInDependencies(Func<BaseNode, bool> condition)
        {
            Stack<BaseNode> dependencies = new Stack<BaseNode>();

            dependencies.Push(this);

            int depth = 0;
            while (dependencies.Count > 0)
            {
                var node = dependencies.Pop();

                // Guard for infinite loop (faster than a HashSet based solution)
                depth++;
                if (depth > 2000)
                    break;

                if (condition(node))
                    return node;

                foreach (var dep in node.GetInputNodes())
                    dependencies.Push(dep);
            }
            return null;
        }

        #endregion

        #region 字段查询与操作

        /// <summary>
        /// 判断字段是否为输入端口
        /// </summary>
        public bool IsFieldInput(string fieldName) => nodeFields[fieldName].input;

        /// <summary>
        /// 设置节点自定义名称
        /// </summary>
        public void SetCustomName(string customName) => nodeCustomName = customName;

        /// <summary>
        /// 获取节点显示名称
        /// </summary>
        public string GetCustomName() => String.IsNullOrEmpty(nodeCustomName) ? name : nodeCustomName;

        #endregion

        #region 消息管理

        /// <summary>
        /// 添加节点消息（警告/错误等）
        /// </summary>
        public void AddMessage(string message, NodeMessageType messageType)
        {
            if (messages.Contains(message))
                return;

            onMessageAdded?.Invoke(message, messageType);
            messages.Add(message);
        }

        /// <summary>
        /// 移除指定消息
        /// </summary>
        public void RemoveMessage(string message)
        {
            onMessageRemoved?.Invoke(message);
            messages.Remove(message);
        }

        /// <summary>
        /// 移除包含特定文本的消息
        /// </summary>
        public void RemoveMessageContains(string subMessage)
        {
            string toRemove = messages.Find(m => m.Contains(subMessage));
            messages.Remove(toRemove);
            onMessageRemoved?.Invoke(toRemove);
        }

        /// <summary>
        /// 清除所有消息
        /// </summary>
        public void ClearMessages()
        {
            foreach (var message in messages)
                onMessageRemoved?.Invoke(message);
            messages.Clear();
        }

        #endregion
    }
}
