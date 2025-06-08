using GraphProcessor;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public class SkillToolbarView : NPBehaveToolbarView
{
    private SkillGraphWindow _skillGraphWindow;

    public SkillToolbarView(SkillGraphWindow skillGraphWindow, BaseGraphView graphView, MiniMap miniMap,
        BaseGraph baseGraph) : base(graphView,
        miniMap, baseGraph)
    {
        _skillGraphWindow = skillGraphWindow;
    }

    protected override void AddButtons()
    {
        base.AddButtons();
        AddButton(new GUIContent("Show Edge Flow", "展示连线流向"), _skillGraphWindow.ShowOrHideEdgeFlowPoint);
    }
}