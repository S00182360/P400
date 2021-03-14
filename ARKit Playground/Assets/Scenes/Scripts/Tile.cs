using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour, ISelectable
{
    public Vector2 GridPos;
    public string GridName;
    public bool isSelected;
    public GameBoard gameBoard;

    private void Start()
    {
        isSelected = false;
        //gameObject.layer = 8;
        gameBoard = GetComponentInParent<GameBoard>();
    }

    public void UpdateMat(Material mat)
    {
        GetComponent<Renderer>().material = mat;
    }

    public void Select()
    {
        if (gameBoard.selectedTile)
            gameBoard.DeselectTile();

        gameBoard.selectedTile = this;
        gameBoard.selectedTile.UpdateMat(gameBoard.ClickedMat);
        gameBoard.selectedTile.isSelected = true;
    }
}
