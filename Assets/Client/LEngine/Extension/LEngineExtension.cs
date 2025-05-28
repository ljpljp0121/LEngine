using UnityEngine;

namespace LEngine
{
    public static class LEngineExtension
    {
        #region GameObject

        public static bool IsNull(this GameObject obj)
        {
            return ReferenceEquals(obj, null);
        }

        public static T TryAddComponent<T>(this GameObject obj) where T : Component
        {
            if (obj == null) return null;
            T curComponent = obj.GetComponent<T>();
            if (curComponent == null)
            {
                curComponent = obj.AddComponent<T>();
            }

            return curComponent;
        }

        #endregion
    }
}