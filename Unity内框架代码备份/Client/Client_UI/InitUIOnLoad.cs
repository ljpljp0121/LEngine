using LEngine;

public class InitUIOnLoad
{
    public static bool loaded = false;
    public static void Init()
    {
        if (!loaded)
        {
            InitOnLoadMethod.ProcessInitOnLoadMethod(typeof(InitUIOnLoad));
            loaded = true;
        }
    }
}
