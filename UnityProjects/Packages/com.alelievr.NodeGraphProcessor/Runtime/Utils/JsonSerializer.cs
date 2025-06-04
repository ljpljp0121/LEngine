using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using System.Reflection;
#if UNITY_EDITOR
using UnityEditor;
#endif

// Warning, the current serialization code does not handle unity objects
// in play mode outside of the editor (because of JsonUtility)

namespace GraphProcessor
{
    /// <summary>
    /// JSON序列化元素结构
    /// 存储类型信息和序列化数据
    /// </summary>
    [Serializable]
    public struct JsonElement
    {
        public string type;
        public string jsonDatas;

        public override string ToString()
        {
            return "type: " + type + " | JSON: " + jsonDatas;
        }
    }

    /// <summary>
    /// JSON序列化工具类
    /// 提供节点图的序列化能力
    /// </summary>
    public static class JsonSerializer
    {
        /// <summary>
        /// 序列化任意对象为JsonElement
        /// </summary>
        public static JsonElement Serialize(object obj)
        {
            JsonElement elem = new JsonElement();

            elem.type = obj.GetType().AssemblyQualifiedName;
#if UNITY_EDITOR
            elem.jsonDatas = EditorJsonUtility.ToJson(obj);
#else
			elem.jsonDatas = JsonUtility.ToJson(obj);
#endif

            return elem;
        }

        /// <summary>
        /// 反序列化JsonElement为指定类型
        /// </summary>
        public static T Deserialize<T>(JsonElement e)
        {
            if (typeof(T) != Type.GetType(e.type))
                throw new ArgumentException("Deserializing type is not the same than Json element type");

            var obj = Activator.CreateInstance<T>();
#if UNITY_EDITOR
            EditorJsonUtility.FromJsonOverwrite(e.jsonDatas, obj);
#else
			JsonUtility.FromJsonOverwrite(e.jsonDatas, obj);
#endif

            return obj;
        }

        /// <summary>
        /// 序列化节点（BaseNode专用）
        /// </summary>
        public static JsonElement SerializeNode(BaseNode node)
        {
            return Serialize(node);
        }

        /// <summary>
        /// 反序列化节点（BaseNode专用）
        /// </summary>
        public static BaseNode DeserializeNode(JsonElement e)
        {
            try
            {
                var baseNodeType = Type.GetType(e.type);

                if (e.jsonDatas == null)
                    return null;

                var node = Activator.CreateInstance(baseNodeType) as BaseNode;
#if UNITY_EDITOR
                EditorJsonUtility.FromJsonOverwrite(e.jsonDatas, node);
#else
				JsonUtility.FromJsonOverwrite(e.jsonDatas, node);
#endif
                return node;
            }
            catch
            {
                return null;
            }
        }
    }
}