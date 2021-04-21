using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoPanelOpen : MonoBehaviour
{
    public GameObject CharInfoPanel;
    public GameObject EditInfoPanel;
    private Animator InfoAnimator;
    private Animator EditAnimator;
    public CharacterDetailPannel UIControl;

    private void Start()
    {
        transform.SetAsLastSibling();
        CharInfoPanel.TryGetComponent(out InfoAnimator);
        EditInfoPanel.TryGetComponent(out EditAnimator);
        UIControl.SetDetails();
    }

    public void ShowPanel()
    {
        if (!CharInfoPanel.activeSelf)
        {
            CharInfoPanel.SetActive(true);
            EditInfoPanel.SetActive(false);
        }
        else if (CharInfoPanel.activeSelf)
        {
            CharInfoPanel.SetActive(false);
            EditInfoPanel.SetActive(false);
        }

        //if(CharInfoPanel != null)
        //{
        //    CharInfoPanel.SetActive(true);

        //    if (InfoAnimator != null && EditAnimator != null)
        //    {
        //        bool isOpen = InfoAnimator.GetBool("Open");
        //        InfoAnimator.SetBool("Open", !isOpen);
        //        EditAnimator.SetBool("IsOpen", false);
        //    }
        //}
    }
}
