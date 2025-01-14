﻿using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class PlayerCharacter : MonoBehaviour, ISelectable
{
    public GameBoard gameBoard;
    public bool isSelected;
    public List<DetailInfo> characterDeck;
    public DetailInfo currentCharacter;
    string json;
    
    void Start()
    {
        //SET character detail in code
        //gameObject.layer = 9;
        characterDeck = CharacterDetailManager.instance.characterDeck;
        gameBoard = GetComponentInParent<GameBoard>();
        AssignDetails();
    }

    public void SetPosition(Vector3 newPos)
    {
        transform.position = new Vector3(newPos.x, 0.5f, newPos.z);
    }

    public void UpdateMaterial(Material mat)
    {
        GetComponent<Renderer>().material = mat;
    }

    public void Select()
    {
        gameBoard.DeselectTile();

        if (gameBoard.selectedPlayer)
            gameBoard.DeselectPlayer();

        gameBoard.selectedPlayer = this;
        gameBoard.selectedPlayer.UpdateMaterial(gameBoard.ClickedMat);
        gameBoard.selectedPlayer.isSelected = true;
    }

    public void AssignDetails()
    {
        //Read from JSON
        //json = File.ReadAllText("Assets/SaveFiles/CharacterDetail.json");
        //currentCharacter = JsonUtility.FromJson<DetailInfo>(json);
        currentCharacter = CharacterDetailManager.instance.currentCharacter;
    }
}
