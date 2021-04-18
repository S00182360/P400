using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditInfoPanelOpen : MonoBehaviour
{
    public GameObject EditInfoPanel;
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
                bool isOpen = animator.GetBool("Open");

                animator.SetBool("Open", !isOpen);
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
                bool isOpen = animator.GetBool("Open");

                animator.SetBool("Open", !isOpen);
            }
        }
    }

    public void ExitAndClose()
    {

    }
}

