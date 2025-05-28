public class InitLogicOnLoad
{
    public static bool loaded = false;
    public static void Init()
    {
        if (!loaded)
        {
            InitOnLoadMethod.ProcessInitOnLoadMethod(typeof(InitLogicOnLoad));
            loaded = true;
        }
    }
}
