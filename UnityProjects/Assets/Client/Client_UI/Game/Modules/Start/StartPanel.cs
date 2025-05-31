using LEngine;
using UnityEngine;
using UnityEngine.UI;

public class StartPanel : UIBehavior
{
    [SerializeField] private Button StartBtn;
    [SerializeField] private Button ContinueBtn;
    [SerializeField] private Button QuitBtn;

    protected override void OnShow(params object[] args)
    {
        StartBtn.SetButton(OnStartBtnClick);
        ContinueBtn.SetButton(OnContinueBtnClick);
        QuitBtn.SetButton(OnQuitBtnClick);
    }

    private void OnStartBtnClick()
    {
        Debug.Log("��ʼ��Ϸ");
        Game.UI.HideUI<StartPanel>();
    }

    private void OnContinueBtnClick()
    {
        Debug.Log("������Ϸ");
    }

    private void OnQuitBtnClick()
    {
        Application.Quit();
    }
}
