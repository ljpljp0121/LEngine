
using UnityEngine;
using UnityEngine.UI;

public class UIAnim : MonoBehaviour
{
    [SerializeField] private Image img;
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private int fps = 30;
    [SerializeField] private int loopTime = -1;
    [SerializeField] private bool pauseHide = false;
    [SerializeField] private float speed = 1;
    [SerializeField] private bool OnEnableReset = false;
    [SerializeField] private bool isSetNativeSize = true;

    private int curIndex = 0;
    private float timePause = 0;
    private bool pause = false;

    private void Awake()
    {
        if (img == null) img = GetComponent<Image>();
    }

    private void OnEnable()
    {
        if (OnEnableReset)
        {
            Stop();
            Play();
        }
    }

    void Update()
    {
        if (pause)
        {
            if (pauseHide)
                img.enabled = false;
            return;
        }
        timePause += Time.deltaTime * speed;
        if (timePause >= 1.0f / fps)
        {
            timePause = 0;
            img.sprite = sprites[curIndex % sprites.Length];
            if (isSetNativeSize)
                img.SetNativeSize();
            curIndex++;
            if (loopTime >= 0)
            {
                if (curIndex == (loopTime + 1) * sprites.Length)
                    pause = true;
            }
        }
    }

    public bool IsPlaying()
    {
        return !pause;
    }

    public void Pause()
    {
        pause = true;
    }

    public void Play()
    {
        pause = false;
        img.enabled = true;
    }

    public void Stop()
    {
        pause = true;
        curIndex = 0;
        timePause = 0;
        img.sprite = sprites[0];
        if (isSetNativeSize)
            img.SetNativeSize();
    }
}
