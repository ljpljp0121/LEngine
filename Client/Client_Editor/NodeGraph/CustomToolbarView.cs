using GraphProcessor;

public class CustomToolbarView : ToolbarView
{
    public CustomToolbarView(BaseGraphView graphView) : base(graphView) { }

    protected override void AddButtons()
    {
        base.AddButtons();
    }
}
