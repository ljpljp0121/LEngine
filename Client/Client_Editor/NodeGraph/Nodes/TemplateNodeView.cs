
using GraphProcessor;
using UnityEngine.UIElements;
using static TreeEditor.TreeEditorHelper;

[NodeCustomEditor(typeof(TemplateNode))]
public class TemplateNodeView : BaseNodeView
{
    public override void Enable()
    {
        var node = nodeTarget as TemplateNode;
        // Create your fields using node's variables and
        // add them to the controlsContainer
        controlsContainer.Add(new Label("Hello World !"));

    }
}
