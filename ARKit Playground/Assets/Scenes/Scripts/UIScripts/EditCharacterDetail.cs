using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class EditCharacterDetail : MonoBehaviour
{
    [SerializeField]
    GameObject EditPannel;
    [SerializeField]
    TMP_Text StatValue;
    [SerializeField]
    PlayerCharacter CharacterInfo;
    CharacterDetail details;
    string statTag;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AddOne()
    {
        details = CharacterInfo.GetComponent<CharacterDetail>();
        switch (gameObject.tag)
        {
            case "STR":
                details.Str++;
                StatValue.text = details.Str.ToString();
                break;
            case "DEX":
                details.Dex++;
                StatValue.text = details.Dex.ToString();
                break;
            case "CON":
                details.Con++;
                StatValue.text = details.Con.ToString();
                break;
            case "INTEL":
                details.Intel++;
                StatValue.text = details.Intel.ToString();
                break;
            case "WIS":
                details.Wis++;
                StatValue.text = details.Wis.ToString();
                break;
            case "CHR":
                details.Chr++;
                StatValue.text = details.Chr.ToString();
                break;
            default:
                break;
        }
    }

    public void TakeOne()
    {
        details = CharacterInfo.GetComponent<CharacterDetail>();
        switch (gameObject.tag)
        {
            case "STR":
                details.Str--;
                StatValue.text = details.Str.ToString();
                break;
            case "DEX":
                details.Dex--;
                StatValue.text = details.Dex.ToString();
                break;
            case "CON":
                details.Con--;
                StatValue.text = details.Con.ToString();
                break;
            case "INT":
                details.Intel--;
                StatValue.text = details.Intel.ToString();
                break;
            case "WIS":
                details.Wis--;
                StatValue.text = details.Wis.ToString();
                break;
            case "CHR":
                details.Chr--;
                StatValue.text = details.Chr.ToString();
                break;
            default:
                break;
        }
    }
}
