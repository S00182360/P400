using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditInfoPanelOpen : MonoBehaviour
{
    public GameObject EditInfoPanel;
    public GameObject InfoPanel;
    private Animator InfoAnimator;
    private Animator EditAnimator; 
    private DetailInfo detail;

    private void Start()
    {
        EditInfoPanel.TryGetComponent(out EditAnimator);
        InfoPanel.TryGetComponent(out InfoAnimator);
    }

    public void ShowPanel()
    {
        //detail = CharacterDetailManager.instance.currentCharacter;
        Debug.Log("EditInfoPanel.ShowPanel() Entered");
        EditInfoPanel.SetActive(true);
        InfoPanel.SetActive(false);
        if (EditInfoPanel != null)
        {
            Debug.Log("EditInfoPanel.ShowPanel() EditInfoPanel != null");
            EditInfoPanel.SetActive(true);
            InfoPanel.SetActive(true);
            if (EditAnimator != null)
            {
                Debug.Log("EditInfoPanel.ShowPanel() EditAnimator != null");
                EditAnimator.SetBool("IsOpen", true);
                InfoAnimator.SetBool("Open", false);
            }
        }
    }

    public void SaveAndClose()
    {
        detail = CharacterDetailManager.instance.currentCharacter;

        if (EditInfoPanel != null)
        {
            EditInfoPanel.SetActive(true);
            //Write into to JSON
            CharacterDetailManager.instance.AddOrUpdateJson(detail);
            
            if (InfoAnimator != null)
            {
                EditAnimator.SetBool("IsOpen", false);
                InfoAnimator.SetBool("Open", true);
            }
        }
    }
}

