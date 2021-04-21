using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DropdownControl : MonoBehaviour
{
    List<string> names = new List<string>();
    [SerializeField]
    TMP_Dropdown dropdown;
    [SerializeField]
    GameObject InfoPanel;
    DetailInfo currentchar;

    public TMP_Text Name;
    public TMP_Text Str;
    public TMP_Text Dex;
    public TMP_Text Con;
    public TMP_Text Int;
    public TMP_Text Wis;
    public TMP_Text Chr;
    // Start is called before the first frame update
    void Start()
    {
        //dropdown.onValueChanged.AddListener(delegate
        //{
        //    ChangedValueDel(dropdown);

        //});
        InfoPanel.SetActive(true);
        InitDetail();
        SetDetailUI(CharacterDetailManager.instance.currentCharacter);
        foreach (var character in CharacterDetailManager.instance.characterDeck)
        {
            names.Add(character.Name);
        }
        foreach (var name in names)
        {
            dropdown.options.Add(new TMP_Dropdown.OptionData() { text = name });
        }
    }

    public void ChangedValueDel(TMP_Dropdown sender)
    {
        ChangedValue(dropdown.options[dropdown.value].text);
    }

    public void ChangedValue(string value)
    {
        CharacterDetailManager.instance.SelectPlayerFromName(value);
        currentchar = CharacterDetailManager.instance.characterDeck.Find(d => d.Name.Equals(dropdown.captionText.text));
        SetDetailUI(currentchar);
    }

    public void SetDetailUI(DetailInfo details)
    {
        Name.text = details.Name;
        Str.text = details.Str.ToString();
        Dex.text = details.Dex.ToString();
        Con.text = details.Con.ToString();
        Int.text = details.Intel.ToString();
        Wis.text = details.Wis.ToString();
        Chr.text = details.Chr.ToString();
    }

    public void InitDetail()
    {
        Name.text = "";
        Str.text = "";
        Dex.text = "";
        Con.text = "";
        Int.text = "";
        Wis.text = "";
        Chr.text = "";
    }

    public void SetAsActiveChar()
    {
        CharacterDetailManager.instance.currentCharacter = currentchar;
    }
}
