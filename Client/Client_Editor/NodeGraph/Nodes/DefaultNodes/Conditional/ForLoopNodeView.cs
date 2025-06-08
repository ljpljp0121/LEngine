using GraphProcessor;

[NodeCustomEditor(typeof(ForLoopNode))]
public class ForLoopNodeView : BaseNodeView
{
    public override void Enable()
    {
        var node = nodeTarget as ForLoopNode;

        DrawDefaultInspector();

        // Create your fields using node's variables and add them to the controlsContainer

        // controlsContainer.Add(new Label("Hello World !"));
    }
}