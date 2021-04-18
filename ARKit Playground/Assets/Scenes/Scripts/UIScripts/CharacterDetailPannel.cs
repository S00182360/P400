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
    [SerializeField]
    PlayerCharacter CharacterInfo;
    CharacterDetail details;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void SetDetails()
    {
        details = CharacterInfo.GetComponent<CharacterDetail>();
        Name.text = details.Name;
        Str.text = details.Str.ToString();
        Dex.text = details.Dex.ToString();
        Con.text = details.Con.ToString();
        Int.text = details.Intel.ToString();
        Wis.text = details.Wis.ToString();
        Chr.text = details.Chr.ToString();
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
