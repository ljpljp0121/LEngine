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

        public static T GetComponent<T>(this GameObject go, bool creat) where T : Component
        {
            T t = go.GetComponent<T>();
            if (t == null && creat)
            {
                t = go.AddComponent<T>();
            }
            return t;
        }

        public static T GetOrAddComponent<T>(this GameObject gameObject) where T : Component
        {
            T t = gameObject.GetComponent<T>();
            if (t == null)
            {
                t = gameObject.AddComponent<T>();
            }
            return t;
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

        #region  Transform

        public static void ThrowException(this string reason)
        {
            throw new System.Exception("Framework stop running because " + reason);
        }

        public static void Reset(this Transform ts)
        {
            ts.localPosition = Vector3.zero;
            ts.localRotation = Quaternion.identity;
            ts.localScale = Vector3.one;
        }

        public static Transform FindNode(this Transform t, params string[] nodes)
        {
            var curt = t;
            for (int i = 0; i < nodes.Length; i++)
            {
                string node = nodes[i];
                curt = curt.Find(node);
                if (curt == null) $"The node '{node}' is not found".ThrowException();
            }
            return curt;
        }

        public static T FindComponent<T>(this Transform t, params string[] nodes) where T : Component
        {
            var child = t.FindNode(nodes);
            if (child.TryGetComponent<T>(out var component)) return component;
            return child.gameObject.AddComponent<T>();
        }

        public static T ClearChildrenExceptFirst<T>(this Transform t) where T : Component
        {
            var children = new Transform[t.childCount];
            for (var i = 0; i < t.childCount; i++)
                children[i] = t.GetChild(i);

            for (var i = 1; i < children.Length; i++)
            {
                children[i].gameObject.SetActive(false);
                Object.Destroy(children[i].gameObject);
            }

            var child = children[0];
            child.gameObject.SetActive(false);
            return child.FindComponent<T>();
        }
        public static void SetPositionX(this Transform transform, float newValue)
        {
            Vector3 v = transform.position;
            v.x = newValue;
            transform.position = v;
        }

        public static void SetPositionY(this Transform transform, float newValue)
        {
            Vector3 v = transform.position;
            v.y = newValue;
            transform.position = v;
        }

        public static void SetPositionZ(this Transform transform, float newValue)
        {
            Vector3 v = transform.position;
            v.z = newValue;
            transform.position = v;
        }

        public static void AddPositionX(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.position;
            v.x += deltaValue;
            transform.position = v;
        }

        public static void AddPositionY(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.position;
            v.y += deltaValue;
            transform.position = v;
        }

        public static void AddPositionZ(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.position;
            v.z += deltaValue;
            transform.position = v;
        }

        public static void SetLocalPositionX(this Transform transform, float newValue)
        {
            Vector3 v = transform.localPosition;
            v.x = newValue;
            transform.localPosition = v;
        }

        public static void SetLocalPositionY(this Transform transform, float newValue)
        {
            Vector3 v = transform.localPosition;
            v.y = newValue;
            transform.localPosition = v;
        }

        public static void SetLocalPositionZ(this Transform transform, float newValue)
        {
            Vector3 v = transform.localPosition;
            v.z = newValue;
            transform.localPosition = v;
        }

        public static void AddLocalPositionX(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.localPosition;
            v.x += deltaValue;
            transform.localPosition = v;
        }

        public static void AddLocalPositionY(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.localPosition;
            v.y += deltaValue;
            transform.localPosition = v;
        }

        public static void AddLocalPositionZ(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.localPosition;
            v.z += deltaValue;
            transform.localPosition = v;
        }

        public static void SetLocalScaleX(this Transform transform, float newValue)
        {
            Vector3 v = transform.localScale;
            v.x = newValue;
            transform.localScale = v;
        }

        public static void SetLocalScaleY(this Transform transform, float newValue)
        {
            Vector3 v = transform.localScale;
            v.y = newValue;
            transform.localScale = v;
        }

        public static void SetLocalScaleZ(this Transform transform, float newValue)
        {
            Vector3 v = transform.localScale;
            v.z = newValue;
            transform.localScale = v;
        }

        public static void AddLocalScaleX(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.localScale;
            v.x += deltaValue;
            transform.localScale = v;
        }

        public static void AddLocalScaleY(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.localScale;
            v.y += deltaValue;
            transform.localScale = v;
        }

        public static void AddLocalScaleZ(this Transform transform, float deltaValue)
        {
            Vector3 v = transform.localScale;
            v.z += deltaValue;
            transform.localScale = v;
        }


        #endregion

        #region UITool

        public static void SetFullRect(this RectTransform rectTrans)
        {
            rectTrans.anchorMin = Vector2.zero;
            rectTrans.anchorMax = Vector2.one;
            rectTrans.sizeDelta = Vector2.zero;
            rectTrans.anchoredPosition3D = Vector3.zero;
        }

        public static float GetAnimDuration(this Animator animator, string animName, float defaultTime = 0.1f)
        {
            AnimationClip[] clips = animator.runtimeAnimatorController.animationClips;
            for (int i = 0; i < clips.Length; i++)
            {
                var clipName = clips[i].name.ToLower();
                if (clipName.IndexOf(animName) > 0)
                {
                    return clips[i].length;
                }
            }
            return defaultTime;
        }

        #endregion
    }
}