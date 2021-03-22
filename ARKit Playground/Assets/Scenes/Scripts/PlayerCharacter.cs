using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCharacter : MonoBehaviour, ISelectable
{
    public GameBoard gameBoard;
    public bool isSelected;
    public CharacterDetail detail;
    
    void Start()
    {
        //SET character detail in code
        //gameObject.layer = 9;
        gameBoard = GetComponentInParent<GameBoard>();
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
}
