using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.UIElements;

public class CharacterDetailPannel : MonoBehaviour
{ 
    public TMP_Text Name;
    public TMP_Text Str;
    public TMP_Text Dex;
    public TMP_Text Con;
    public TMP_Text Int;
    public TMP_Text Wis;
    public TMP_Text Chr;

    public TMP_Text EditName;
    public TMP_Text EditStr;
    public TMP_Text EditDex;
    public TMP_Text EditCon;
    public TMP_Text EditInt;
    public TMP_Text EditWis;
    public TMP_Text EditChr;

    [SerializeField]
    DetailInfo CharacterInfo;
    DetailInfo details;

    // Start is called before the first frame update
    void Start()
    {
        CharacterInfo = CharacterDetailManager.instance.currentCharacter;
    }

    public void SetDetails()
    {
        CharacterInfo = CharacterDetailManager.instance.currentCharacter;
        details = CharacterInfo;
        Name.text = details.Name;
        Str.text = details.Str.ToString();
        Dex.text = details.Dex.ToString();
        Con.text = details.Con.ToString();
        Int.text = details.Intel.ToString();
        Wis.text = details.Wis.ToString();
        Chr.text = details.Chr.ToString();

        EditName.text = details.Name;
        EditStr.text = details.Str.ToString();
        EditDex.text = details.Dex.ToString();
        EditCon.text = details.Con.ToString();
        EditInt.text = details.Intel.ToString();
        EditWis.text = details.Wis.ToString();
        EditChr.text = details.Chr.ToString();
    }

}
