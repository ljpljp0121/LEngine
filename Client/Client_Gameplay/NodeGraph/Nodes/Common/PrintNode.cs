using GraphProcessor;

[NodeMenuItem("Print")]
public class PrintNode : BaseNode
{
    [Input]
    public object obj;

    public override string name => "Print";

    protected override void Process()
    {
        TryGetInputValue(nameof(obj), ref obj);
    }
}