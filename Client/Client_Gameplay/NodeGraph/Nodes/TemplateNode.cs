
using GraphProcessor;

[System.Serializable, NodeMenuItem("Custom/#NAME#")]

public class TemplateNode : BaseNode
{
    [Input(name = "In")]
    public float input;
    [Output(name = "Out")]
    public float output;
    public override string name => "#NAME#";
    protected override void Process()
    {
        output = input * 42;
    }

}
