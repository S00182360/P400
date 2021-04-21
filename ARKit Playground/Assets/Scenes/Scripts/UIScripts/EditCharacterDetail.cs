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

    public void AddOne()
    {
        switch (gameObject.tag)
        {
            case "STR":
                CharacterDetailManager.instance.currentCharacter.Str++;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Str.ToString();
                break;
            case "DEX":
                CharacterDetailManager.instance.currentCharacter.Dex++;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Dex.ToString();
                break;
            case "CON":
                CharacterDetailManager.instance.currentCharacter.Con++;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Con.ToString();
                break;
            case "INTEL":
                CharacterDetailManager.instance.currentCharacter.Intel++;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Intel.ToString();
                break;
            case "WIS":
                CharacterDetailManager.instance.currentCharacter.Wis++;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Wis.ToString();
                break;
            case "CHR":
                CharacterDetailManager.instance.currentCharacter.Chr++;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Chr.ToString();
                break;
            default:
                break;
        }
    }

    public void TakeOne()
    {
        switch (gameObject.tag)
        {
            case "STR":
                CharacterDetailManager.instance.currentCharacter.Str--;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Str.ToString();
                break;
            case "DEX":
                CharacterDetailManager.instance.currentCharacter.Dex--;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Dex.ToString();
                break;
            case "CON":
                CharacterDetailManager.instance.currentCharacter.Con--;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Con.ToString();
                break;
            case "INT":
                CharacterDetailManager.instance.currentCharacter.Intel--;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Intel.ToString();
                break;
            case "WIS":
                CharacterDetailManager.instance.currentCharacter.Wis--;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Wis.ToString();
                break;
            case "CHR":
                CharacterDetailManager.instance.currentCharacter.Chr--;
                StatValue.text = CharacterDetailManager.instance.currentCharacter.Chr.ToString();
                break;
            default:
                break;
        }
    }
}
