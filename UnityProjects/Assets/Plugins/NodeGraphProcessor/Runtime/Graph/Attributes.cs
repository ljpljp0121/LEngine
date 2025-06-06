﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// Tell that this field is will generate an input port
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
    /// Tell that this field is will generate an output port
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
    /// Creates a vertical port instead of the default horizontal one
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class VerticalAttribute : Attribute
    {
    }

    /// <summary>
    /// 决定一个Port是否绘制其Icon的特性
    /// 当然如果使用了CustomPortBehavior提供自定义PortData，就需要在CustomPortBehavior标记的方法中做好处理
    /// </summary>
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class ShowPortIconAttribute : Attribute
    {
        public bool ShowIcon = true;
        /// <summary>
        /// 在USS文件中匹配的数据类型，用于无法从默认类型获取绘制图标时进行重定向
        /// 例如Dictionary无法找到其类型名对应的PortIcon文件，可以设置这个IconNameMathInUSSFile为Object作为fallback
        /// </summary>
        public string IconNameMatchedInUSSFile;
    }


    /// <summary>
    /// Register the node in the NodeProvider class. The node will also be available in the node creation window.
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
    /// Set a custom drawer for a field. It can then be created using the FieldFactory
    /// </summary>
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
    public class FieldDrawerAttribute : Attribute
    {
        public Type fieldType;

        /// <summary>
        /// Register a custom view for a type in the FieldFactory class
        /// </summary>
        /// <param name="fieldType"></param>
        public FieldDrawerAttribute(Type fieldType)
        {
            this.fieldType = fieldType;
        }
    }

    /// <summary>
    /// Allow you to modify the generated port view from a field. Can be used to generate multiple ports from one field.
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
    /// Allow to bind a method to generate a specific set of ports based on a field type in a node
    /// </summary>
    [AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
    public class CustomPortTypeBehavior : Attribute
    {
        /// <summary>
        /// Target type
        /// </summary>
        public Type type;

        public CustomPortTypeBehavior(Type type)
        {
            this.type = type;
        }
    }

    /// <summary>
    /// Allow you to have a custom view for your stack nodes
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

    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class ShowInInspector : Attribute
    {
        public bool showInNode;

        public ShowInInspector(bool showInNode = false)
        {
            this.showInNode = showInNode;
        }
    }

    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class ShowAsDrawer : Attribute
    {
    }

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