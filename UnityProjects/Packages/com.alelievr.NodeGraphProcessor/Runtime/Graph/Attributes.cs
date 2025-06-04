using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// 将字段标记为输入端口
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class InputAttribute : Attribute
    {
        public string name;
        public bool allowMultiple = false;

        /// <summary>
        /// Mark the field as an input port
        /// </summary>
        /// <param name="name">display name</param>
        /// <param name="allowMultiple">is connecting multiple edges allowed</param>
        public InputAttribute(string name = null, bool allowMultiple = false)
        {
            this.name = name;
            this.allowMultiple = allowMultiple;
        }
    }

    /// <summary>
    ///将字段标记为输出端口
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class OutputAttribute : Attribute
    {
        public string name;
        public bool allowMultiple = true;

        /// <summary>
        /// Mark the field as an output port
        /// </summary>
        /// <param name="name">display name</param>
        /// <param name="allowMultiple">is connecting multiple edges allowed</param>
        public OutputAttribute(string name = null, bool allowMultiple = true)
        {
            this.name = name;
            this.allowMultiple = allowMultiple;
        }
    }

    /// <summary>
    /// 创建一个垂直布局的端口
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class VerticalAttribute : Attribute
    {
    }

    /// <summary>
    /// Register the node in the NodeProvider class.节点会在节点选择窗口显示
    /// </summary>
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
    public class NodeMenuItemAttribute : Attribute
    {
        public string menuTitle;
        public Type onlyCompatibleWithGraph;

        /// <summary>
        /// Register the node in the NodeProvider class. The node will also be available in the node creation window.
        /// </summary>
        /// <param name="menuTitle">Path in the menu, use / as folder separators</param>
        public NodeMenuItemAttribute(string menuTitle = null, Type onlyCompatibleWithGraph = null)
        {
            this.menuTitle = menuTitle;
            this.onlyCompatibleWithGraph = onlyCompatibleWithGraph;
        }
    }

    /// <summary>
    /// 允许自定义端口的输入函数
    /// </summary>
    [AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
    public class CustomPortInputAttribute : Attribute
    {
        public string fieldName;
        public Type inputType;
        public bool allowCast;

        /// <summary>
        /// Allow you to customize the input function of a port.
        /// See CustomPortsNode example in Samples.
        /// </summary>
        /// <param name="fieldName">local field of the node</param>
        /// <param name="inputType">type of input of the port</param>
        /// <param name="allowCast">if cast is allowed when connecting an edge</param>
        public CustomPortInputAttribute(string fieldName, Type inputType, bool allowCast = true)
        {
            this.fieldName = fieldName;
            this.inputType = inputType;
            this.allowCast = allowCast;
        }
    }

    /// <summary>
    /// 允许自定义端口的输出函数
    /// </summary>
    [AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
    public class CustomPortOutputAttribute : Attribute
    {
        public string fieldName;
        public Type outputType;
        public bool allowCast;

        /// <summary>
        /// Allow you to customize the output function of a port.
        /// See CustomPortsNode example in Samples.
        /// </summary>
        /// <param name="fieldName">local field of the node</param>
        /// <param name="inputType">type of input of the port</param>
        /// <param name="allowCast">if cast is allowed when connecting an edge</param>
        public CustomPortOutputAttribute(string fieldName, Type outputType, bool allowCast = true)
        {
            this.fieldName = fieldName;
            this.outputType = outputType;
            this.allowCast = allowCast;
        }
    }

    /// <summary>
    /// 允许您从字段修改生成的端口视图。可用于从一个字段生成多个端口。
    /// </summary>
    [AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
    public class CustomPortBehaviorAttribute : Attribute
    {
        public string fieldName;

        /// <summary>
        /// Allow you to modify the generated port view from a field. Can be used to generate multiple ports from one field.
        /// You must add this attribute on a function of this signature
        /// <code>
        /// IEnumerable&lt;PortData&gt; MyCustomPortFunction(List&lt;SerializableEdge&gt; edges);
        /// </code>
        /// </summary>
        /// <param name="fieldName">local node field name</param>
        public CustomPortBehaviorAttribute(string fieldName)
        {
            this.fieldName = fieldName;
        }
    }

    /// <summary>
    /// 允许绑定一个方法，以根据节点中的字段类型生成一组特定的端口
    /// </summary>
    [AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
    public class CustomPortTypeBehaviorAttribute : Attribute
    {
        /// <summary>
        /// Target type
        /// </summary>
        public Type type;

        public CustomPortTypeBehaviorAttribute(Type type)
        {
            this.type = type;
        }
    }

    /// <summary>
    /// 允许您为堆栈节点创建自定义视图
    /// </summary>
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
    public class CustomStackNodeView : Attribute
    {
        public Type stackNodeType;

        /// <summary>
        /// Allow you to have a custom view for your stack nodes
        /// </summary>
        /// <param name="stackNodeType">The type of the stack node you target</param>
        public CustomStackNodeView(Type stackNodeType)
        {
            this.stackNodeType = stackNodeType;
        }
    }

    /// <summary>
    /// 允许通过字段的值来控制节点中字段的可见性
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class VisibleIf : Attribute
    {
        public string fieldName;
        public object value;

        public VisibleIf(string fieldName, object value)
        {
            this.fieldName = fieldName;
            this.value = value;
        }
    }

    /// <summary>
    /// 允许字段显示在Inspector面板
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class ShowInInspector : Attribute
    {
        public bool showInNode;

        public ShowInInspector(bool showInNode = false)
        {
            this.showInNode = showInNode;
        }
    }

    /// <summary>
    /// 允许字段在节点视图中显示为抽屉
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class ShowAsDrawer : Attribute
    {
    }

    /// <summary>
    /// 为节点添加一个设置字段
    /// </summary>
    [AttributeUsage(AttributeTargets.Field)]
    public class SettingAttribute : Attribute
    {
        public string name;

        public SettingAttribute(string name = null)
        {
            this.name = name;
        }
    }

    [AttributeUsage(AttributeTargets.Method)]
    public class IsCompatibleWithGraph : Attribute { }
}