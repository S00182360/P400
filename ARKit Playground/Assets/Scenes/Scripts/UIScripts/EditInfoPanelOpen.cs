using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditInfoPanelOpen : MonoBehaviour
{
    public GameObject EditInfoPanel;
    public GameObject InfoPanel;
    private Animator animator;

    private void Start()
    {
        EditInfoPanel.TryGetComponent(out animator);
    }

    public void ShowPanel()
    {
        if (EditInfoPanel != null)
        {
            EditInfoPanel.SetActive(true);

            if (animator != null)
            {
                animator.SetBool("IsOpen", true);
            }
        }
    }

    public void SaveAndClose()
    {
        if (EditInfoPanel != null)
        {
            EditInfoPanel.SetActive(true);
            //Write into to JSON
            
            
            if (animator != null)
            {
                animator.SetBool("IsOpen", false);
            }
        }
    }

    public void ExitAndClose()
    {

    }
}

