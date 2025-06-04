using GraphProcessor;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomToolbarView : ToolbarView
{
    public CustomToolbarView(BaseGraphView graphView) : base(graphView) { }

    protected override void AddButtons()
    {
        base.AddButtons();
    }
}
