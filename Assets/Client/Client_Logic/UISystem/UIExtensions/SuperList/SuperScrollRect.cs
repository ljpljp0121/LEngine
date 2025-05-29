
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SuperScrollRect : ScrollRect, IPointerExitHandler
{
    public bool isRestrain = false;
    private bool isRestrainDrag;
    private bool isOneTouchDrag;

    public static bool CanDrag
    {
        get => SuperScrollRectScript.Instance.canDrag;
        set => SuperScrollRectScript.Instance.canDrag = value;
    }

    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (!CanDrag || Input.touchCount > 1)
            return;
        if (isRestrain)
            isRestrainDrag = true;
        isOneTouchDrag = true;
        base.OnBeginDrag(eventData);
        EventSystem.DispatchEvent(new E_OnSuperListBeginDrag(this.gameObject));
    }

    public override void OnEndDrag(PointerEventData eventData)
    {
        base.OnEndDrag(eventData);
        EventSystem.DispatchEvent(new E_OnSuperListEndDrag(this.gameObject));
    }

    public override void OnDrag(PointerEventData eventData)
    {
        if (!CanDrag)
            return;
        if (Input.touchCount > 1)
        {
            isOneTouchDrag = false;
            return;
        }

        if (isOneTouchDrag && (!isRestrain || isRestrainDrag))
            base.OnDrag(eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (isRestrain)
        {
            base.OnEndDrag(eventData);
            isRestrainDrag = false;
        }
    }
}

public class E_OnSuperListBeginDrag : BaseEvent
{
    public GameObject owner;
    public E_OnSuperListBeginDrag(GameObject owner)
    {
        this.owner = owner;
    }
}

public class E_OnSuperListEndDrag : BaseEvent
{
    public GameObject owner;
    public E_OnSuperListEndDrag(GameObject owner)
    {
        this.owner = owner;
    }
}