
using GraphProcessor;

public class AbstractNode : BaseNode
{
    [Input(name = "In")] public float input;
    [Output(name = "Out")] public float output;
}
