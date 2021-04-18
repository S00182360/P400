using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoPanelOpen : MonoBehaviour
{
    public GameObject CharInfoPanel;
    private Animator animator;

    private void Start()
    {
        this.transform.SetAsLastSibling();
        CharInfoPanel.TryGetComponent(out animator);
    }

    public void ShowPanel()
    {
        if(CharInfoPanel != null)
        {
            CharInfoPanel.SetActive(true);

            if (animator != null)
            {
                bool isOpen = animator.GetBool("Open");

                animator.SetBool("Open", !isOpen);
            }
        }
    }
}
