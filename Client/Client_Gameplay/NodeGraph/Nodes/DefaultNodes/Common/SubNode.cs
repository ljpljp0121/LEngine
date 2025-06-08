using GraphProcessor;

[System.Serializable, NodeMenuItem("Operations/Sub")]
public class SubNode : BaseNode
{
    [Input(name = "A")]
    public float inputA;
    [Input(name = "B")]
    public float inputB;

    [Output(name = "Out")]
    public float output;

    public override string name => "Sub";

    protected override void Process()
    {
        TryGetInputValue(nameof(inputA), ref inputA);
        TryGetInputValue(nameof(inputB), ref inputB);
        output = inputA - inputB;
    }

    public override void TryGetOutputValue<T>(NodePort outputPort, NodePort inputPort, ref T value)
    {
        if (output is T finalValue)
        {
            value = finalValue;
        }
    }
}