using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoPanelOpen : MonoBehaviour
{
    public GameObject CharInfoPanel;
    public void ShowPanel()
    {
        if(CharInfoPanel != null)
        {
            Animator animator = CharInfoPanel.GetComponent<Animator>();
            if (animator != null)
            {
                bool isOpen = animator.GetBool("Open");

                animator.SetBool("Open", !isOpen);
            }
        }
    }
}
