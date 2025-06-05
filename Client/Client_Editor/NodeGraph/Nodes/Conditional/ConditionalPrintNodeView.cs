using GraphProcessor;
using UnityEngine.UIElements;

[NodeCustomEditor(typeof(ConditionalPrintNode))]
public class ConditionalPrintNodeView : BaseNodeView
{
    Label printLabel;
    ConditionalPrintNode printNode;

    public override void Enable()
    {
        printNode = nodeTarget as ConditionalPrintNode;

        printLabel = new Label();
        controlsContainer.Add(printLabel);

        nodeTarget.onProcessed += UpdatePrintLabel;
        onPortConnected += (p) => UpdatePrintLabel();
        onPortDisconnected += (p) => UpdatePrintLabel();

        UpdatePrintLabel();
    }

    void UpdatePrintLabel()
    {
        if (printNode.obj != null)
            printLabel.text = printNode.obj.ToString();
        else
            printLabel.text = "null";
    }
}