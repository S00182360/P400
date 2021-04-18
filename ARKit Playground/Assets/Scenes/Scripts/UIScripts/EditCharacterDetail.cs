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
                details.detailInfo.Str++;
                StatValue.text = details.detailInfo.Str.ToString();
                break;
            case "DEX":
                details.detailInfo.Dex++;
                StatValue.text = details.detailInfo.Dex.ToString();
                break;
            case "CON":
                details.detailInfo.Con++;
                StatValue.text = details.detailInfo.Con.ToString();
                break;
            case "INTEL":
                details.detailInfo.Intel++;
                StatValue.text = details.detailInfo.Intel.ToString();
                break;
            case "WIS":
                details.detailInfo.Wis++;
                StatValue.text = details.detailInfo.Wis.ToString();
                break;
            case "CHR":
                details.detailInfo.Chr++;
                StatValue.text = details.detailInfo.Chr.ToString();
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
                details.detailInfo.Str--;
                StatValue.text = details.detailInfo.Str.ToString();
                break;
            case "DEX":
                details.detailInfo.Dex--;
                StatValue.text = details.detailInfo.Dex.ToString();
                break;
            case "CON":
                details.detailInfo.Con--;
                StatValue.text = details.detailInfo.Con.ToString();
                break;
            case "INT":
                details.detailInfo.Intel--;
                StatValue.text = details.detailInfo.Intel.ToString();
                break;
            case "WIS":
                details.detailInfo.Wis--;
                StatValue.text = details.detailInfo.Wis.ToString();
                break;
            case "CHR":
                details.detailInfo.Chr--;
                StatValue.text = details.detailInfo.Chr.ToString();
                break;
            default:
                break;
        }
    }
}
