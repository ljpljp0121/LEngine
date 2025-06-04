using UnityEngine.UIElements;
using UnityEngine;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// 图钉元素 - 类似黑板功能，可覆盖在图上方的元素
    /// </summary>
    [System.Serializable]
	public class PinnedElement
	{
        /// <summary>
        /// 默认图钉元素尺寸 (150×200像素)
        /// </summary>
        public static readonly Vector2	defaultSize = new Vector2(150, 200);

		public Rect				position = new Rect(Vector2.zero, defaultSize);
		public bool				opened = true;
		public SerializableType	editorType;

		public PinnedElement(Type editorType)
		{
			this.editorType = new SerializableType(editorType);
		}
	}
}