using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCharacter : MonoBehaviour, ISelectable
{
    public GameBoard gameBoard;
    public bool isSelected;
    // Start is called before the first frame update
    void Start()
    {
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
