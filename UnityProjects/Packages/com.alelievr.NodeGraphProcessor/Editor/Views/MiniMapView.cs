using UnityEditor.Experimental.GraphView;
using UnityEngine;

namespace GraphProcessor
{
    public class MiniMapView : MiniMap
	{
		new BaseGraphView	graphView;
		Vector2				size;

		public MiniMapView(BaseGraphView baseGraphView)
        {
            capabilities = 0;
			this.graphView = baseGraphView;
			SetPosition(new Rect(0, 20, 100, 100));
			size = new Vector2(100, 100);
		}
	}
}