
using UnityEngine;

public class SuperScrollRectScript : MonoBehaviour
{
    private static SuperScrollRectScript instance;

    public static SuperScrollRectScript Instance
    {
        get
        {
            if (instance == null)
            {
                GameObject obj = new GameObject("SuperScrollRectGameObject");
                instance = obj.AddComponent<SuperScrollRectScript>();
            }
            return instance;
        }
    }

    public bool canDrag = true;
}
