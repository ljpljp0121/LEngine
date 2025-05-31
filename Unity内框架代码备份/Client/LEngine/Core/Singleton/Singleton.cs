namespace LEngine
{
    public abstract class Singleton<T> where T : Singleton<T>, new()
    {
        protected static T instance;
        public static T Instance
        {
            get { return instance ??= new T(); }
        }
    }
}
