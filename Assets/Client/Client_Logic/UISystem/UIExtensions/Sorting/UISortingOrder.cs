using UnityEngine;
using UnityEngine.UI;

public class UISortingOrder : MonoBehaviour
{
    [SerializeField] private int orderPlus = 1;
    [SerializeField] private bool createCanvas = false;

    private UISortingRoot sortingRoot;

    private void Start()
    {
        RefreshOrder();
    }
    void OnEnable()
    {
        RefreshOrder();
    }

    public void ForceRefresh()
    {
        sortingRoot = null;
        RefreshOrder();
    }

    private void RefreshOrder()
    {
        if (!sortingRoot)
            sortingRoot = GetComponentInParent<UISortingRoot>();
        if (!sortingRoot)
            return;

        var renders = GetComponentsInChildren<Renderer>(true);
        foreach (var render in renders)
        {
            if (render.GetComponentInParent<UISortingOrder>() != this)
                continue;
            render.sortingOrder = sortingRoot.SortingOrder + orderPlus;
        }

        if (createCanvas)
        {
            var selfCvs = GetComponent<Canvas>();
            if (!selfCvs)
            {
                gameObject.AddComponent<GraphicRaycaster>();
                selfCvs = GetComponent<Canvas>();
            }

            selfCvs.overrideSorting = true;
            selfCvs.sortingOrder = sortingRoot.SortingOrder + orderPlus;
        }
    }
}
