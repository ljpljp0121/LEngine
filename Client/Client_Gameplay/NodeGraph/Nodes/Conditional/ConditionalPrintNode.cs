using GraphProcessor;

[NodeMenuItem("Conditional/Print")]
public class ConditionalPrintNode : LinearConditionalNode
{
    [Input]
    public object obj;

    public override string name => "Print";

    protected override void Process()
    {
        TryGetInputValue(nameof(obj), ref obj);
    }
}