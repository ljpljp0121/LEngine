﻿using GraphProcessor;
using UnityEditor.Experimental.GraphView;

public class NPBehaveGraphWindow : UniversalGraphWindow
{
    protected override void InitializeWindow(BaseGraph graph)
    {
        graphView = new UniversalGraphView(this);

        m_MiniMap = new MiniMap() { anchored = true };
        graphView.Add(m_MiniMap);

        m_ToolbarView = new NPBehaveToolbarView(graphView, m_MiniMap, graph);
        graphView.Add(m_ToolbarView);
    }
}