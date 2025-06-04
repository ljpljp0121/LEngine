using GraphProcessor;
using UnityEngine;

public class DefaultGraphWindow : BaseGraphWindow
{
    protected override void OnDestroy()
    {
        graphView?.Dispose();
    }

    protected override void InitializeWindow(BaseGraph graph)
    {
        titleContent = new GUIContent("Default Graph");
        if (graphView == null)
        {
            graphView = new DefaultGraphView(this);
            graphView.Add(new ToolbarView(graphView));
            graphView.Add(new MiniMapView(graphView));
        }
        rootView.Add(graphView);
    }
}
