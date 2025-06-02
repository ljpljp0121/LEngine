using System;
using UnityEngine;
using System.Collections.Generic;
using System.Reflection;
using System.Linq.Expressions;

namespace GraphProcessor
{
    /// <summary>
    /// 自定义端口IO委托：用于处理自定义端口的数据传输逻辑
    /// </summary>
    public delegate void CustomPortIODelegate(BaseNode node, List<SerializableEdge> edges, NodePort outputPort = null);

    /// <summary>
    /// 自定义端口IO处理系统
    /// 提供扩展机制让节点自定义端口的数据处理逻辑
    /// </summary>
    public static class CustomPortIO
    {
        // 内部数据结构：按字段名存储委托
        class PortIOPerField : Dictionary<string, CustomPortIODelegate> { }
        // 内部数据结构：按节点类型存储委托
        class PortIOPerNode : Dictionary<Type, PortIOPerField> { }
        // 存储类型间的可赋值关系（扩展类型系统）
        static Dictionary<Type, List<Type>> assignableTypes = new Dictionary<Type, List<Type>>();
        // 存储所有自定义IO方法（按节点类型组织）
        static PortIOPerNode customIOPortMethods = new PortIOPerNode();

        static CustomPortIO()
        {
            LoadCustomPortMethods();
        }

        /// <summary>
        /// 加载所有自定义端口IO方法
        /// </summary>
        static void LoadCustomPortMethods()
        {
            BindingFlags bindingFlags = BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance;

            foreach (var type in AppDomain.CurrentDomain.GetAllTypes())
            {
                if (type.IsAbstract || type.ContainsGenericParameters)
                    continue;
                if (!(type.IsSubclassOf(typeof(BaseNode))))
                    continue;

                var methods = type.GetMethods(bindingFlags);

                foreach (var method in methods)
                {
                    var portInputAttr = method.GetCustomAttribute<CustomPortInputAttribute>();
                    var portOutputAttr = method.GetCustomAttribute<CustomPortOutputAttribute>();

                    if (portInputAttr == null && portOutputAttr == null)
                        continue;

                    var p = method.GetParameters();
                    bool nodePortSignature = p.Length == 2 && p[1].ParameterType == typeof(NodePort);


                    CustomPortIODelegate deleg;
#if ENABLE_IL2CPP
					// IL2CPP doesn't support expression builders
					if (nodePortSignature)
					{
						deleg = new CustomPortIODelegate((node, edges, port) => {
							Debug.Log(port);
							method.Invoke(node, new object[]{ edges, port});
						});
					}
					else
					{
						deleg = new CustomPortIODelegate((node, edges, port) => {
							method.Invoke(node, new object[]{ edges });
						});
					}
#else
                    var p1 = Expression.Parameter(typeof(BaseNode), "node");
                    var p2 = Expression.Parameter(typeof(List<SerializableEdge>), "edges");
                    var p3 = Expression.Parameter(typeof(NodePort), "port");

                    MethodCallExpression ex;
                    if (nodePortSignature)
                        ex = Expression.Call(Expression.Convert(p1, type), method, p2, p3);
                    else
                        ex = Expression.Call(Expression.Convert(p1, type), method, p2);

                    deleg = Expression.Lambda<CustomPortIODelegate>(ex, p1, p2, p3).Compile();
#endif

                    if (deleg == null)
                    {
                        Debug.LogWarning("Can't use custom IO port function " + method + ": The method have to respect this format: " + typeof(CustomPortIODelegate));
                        continue;
                    }

                    string fieldName = (portInputAttr == null) ? portOutputAttr.fieldName : portInputAttr.fieldName;
                    Type customType = (portInputAttr == null) ? portOutputAttr.outputType : portInputAttr.inputType;
                    Type fieldType = type.GetField(fieldName, bindingFlags).FieldType;

                    AddCustomIOMethod(type, fieldName, deleg);
                    AddAssignableTypes(customType, fieldType);
                    AddAssignableTypes(fieldType, customType);
                }
            }
        }

        /// <summary>
        /// 获取节点的自定义端口方法
        /// </summary>
        public static CustomPortIODelegate GetCustomPortMethod(Type nodeType, string fieldName)
        {
            PortIOPerField portIOPerField;
            CustomPortIODelegate deleg;

            customIOPortMethods.TryGetValue(nodeType, out portIOPerField);

            if (portIOPerField == null)
                return null;

            portIOPerField.TryGetValue(fieldName, out deleg);

            return deleg;
        }

        /// <summary>
        /// 添加自定义IO方法到注册表
        /// </summary>
        static void AddCustomIOMethod(Type nodeType, string fieldName, CustomPortIODelegate deleg)
        {
            if (!customIOPortMethods.ContainsKey(nodeType))
                customIOPortMethods[nodeType] = new PortIOPerField();

            customIOPortMethods[nodeType][fieldName] = deleg;
        }

        /// <summary>
        /// 添加类型间的可赋值关系
        /// </summary>
        static void AddAssignableTypes(Type fromType, Type toType)
        {
            if (!assignableTypes.ContainsKey(fromType))
                assignableTypes[fromType] = new List<Type>();

            assignableTypes[fromType].Add(toType);
        }

        /// <summary>
        /// 检查类型间是否可通过自定义方法赋值
        /// </summary>
        public static bool IsAssignable(Type input, Type output)
        {
            if (assignableTypes.ContainsKey(input))
                return assignableTypes[input].Contains(output);
            return false;
        }
    }
}