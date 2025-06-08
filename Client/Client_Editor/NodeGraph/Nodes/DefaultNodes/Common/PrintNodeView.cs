using GraphProcessor;
using UnityEngine.UIElements;

[NodeCustomEditor(typeof(PrintNode))]
public class PrintNodeView : BaseNodeView
{
    Label printLabel;
    PrintNode printNode;

    public override void Enable()
    {
        printNode = nodeTarget as PrintNode;

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