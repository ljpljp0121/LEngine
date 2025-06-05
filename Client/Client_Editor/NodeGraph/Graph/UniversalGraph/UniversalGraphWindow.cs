
using GraphProcessor;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public abstract class UniversalGraphWindow : BaseGraphWindow
{
    protected UniversalToolbarView m_ToolbarView;
    protected MiniMap m_MiniMap;
    private bool m_HasInitGUIStyles;
    protected override void OnEnable()
    {
        base.OnEnable();
        titleContent = new GUIContent("Universal Graph",
            AssetDatabase.LoadAssetAtPath<Texture2D>($"{GraphCreateAndSaveHelper.NodeGraphProcessorPathPrefix}/Editor/Icon_Dark.png"));
        m_HasInitGUIStyles = false;
    }

    protected override void InitializeWindow(BaseGraph graph)
    {
        graphView = new UniversalGraphView(this);
        m_MiniMap = new MiniMap() { anchored = true };
        graphView.Add(m_MiniMap);
        m_ToolbarView = new UniversalToolbarView(graphView, m_MiniMap, graph);
        graphView.Add(m_ToolbarView);
    }
}
