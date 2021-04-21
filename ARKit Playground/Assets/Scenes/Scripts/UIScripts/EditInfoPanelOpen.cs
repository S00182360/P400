using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditInfoPanelOpen : MonoBehaviour
{
    public GameObject EditInfoPanel;
    public GameObject CharInfoPanel;
    public CharacterDetailPannel pannel;
    private Animator InfoAnimator;
    private Animator EditAnimator; 
    private DetailInfo detail;
    //public CharacterDetailPannel characterDetailPannel;

    private void Start()
    {
        EditInfoPanel.TryGetComponent(out EditAnimator);
        CharInfoPanel.TryGetComponent(out InfoAnimator);
    }

    public void ShowPanel()
    {
        //detail = CharacterDetailManager.instance.currentCharacter;
        if (!EditInfoPanel.activeSelf)
        {
            EditInfoPanel.SetActive(true);
            CharInfoPanel.SetActive(false);
        }
        //Debug.Log("EditInfoPanel.ShowPanel() Entered");
        //EditInfoPanel.SetActive(true);
        //CharInfoPanel.SetActive(false);
        //if (EditInfoPanel != null)
        //{
        //    Debug.Log("EditInfoPanel.ShowPanel() EditInfoPanel != null");
        //    EditInfoPanel.SetActive(true);
        //    CharInfoPanel.SetActive(true);

        //    if (EditAnimator != null)
        //    {
        //        Debug.Log("EditInfoPanel.ShowPanel() EditAnimator != null");
        //        EditAnimator.SetBool("IsOpen", true);
        //        InfoAnimator.SetBool("Open", false);
        //    }
        //}
    }

    public void SaveAndClose()
    {
        //detail = CharacterDetailManager.instance.currentCharacter;
        //CharacterDetailManager.instance.AddOrUpdateJson();

        if (EditInfoPanel.activeSelf)
        {
            EditInfoPanel.SetActive(false);
            CharInfoPanel.SetActive(true);
            pannel.SetDetails();
        }
        //if (EditInfoPanel != null)
        //{
        //    EditInfoPanel.SetActive(true);
        //    CharInfoPanel.SetActive(true);
        //    //Write into to JSON
        //    CharacterDetailManager.instance.AddOrUpdateJson(detail);
        //    characterDetailPannel.SetDetails();

        //    if (InfoAnimator != null)
        //    {
        //        EditAnimator.SetBool("IsOpen", false);
        //        InfoAnimator.SetBool("Open", true);
        //    }
        //}
    }
}

