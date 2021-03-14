using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{

    [SerializeField]
    public GameBoard gameBoard;
    [SerializeField]
    Material highlightMat;
    public Tile selection;

    void Update()
    {
        HighlightTile();

        if (Input.GetMouseButtonDown(0))
        {
            GameObject obj = RayGetObj();

            if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
            {
                if (obj && obj.layer == 8)
                    gameBoard.GetSelectedPlayer().SetPosition(obj.transform.position);
            }
            else
                SelTile(obj);


        }

        if (Input.GetMouseButtonDown(1))
        {
            if(gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                gameBoard.DeselectPlayer();
            
            if (gameBoard.GetSelectedTile() && gameBoard.GetSelectedTile().isSelected)
                gameBoard.DeselectTile();
        }

        
    }

    private GameObject RayGetObj()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if(Physics.Raycast(ray, out hit))
            return hit.transform.gameObject;
        
        return null;
    }

    private void SelTile(GameObject obj)
    {
        if (obj)
        {
            if (obj.layer == 8)
                if (obj.TryGetComponent(out Tile tile))
                    gameBoard.SelectTile(tile);


            if (obj.layer == 9)
                if (obj.TryGetComponent(out PlayerCharacter player))
                    gameBoard.SelectPlayer(player);
        }
    }

    private void HighlightTile()
    {
        if (selection && !selection.isSelected)
        {
            selection.UpdateMat(gameBoard.UnclickedMat);
            selection = null;
        }
        GameObject obj = RayGetObj();

        if(obj && obj.layer == 8)
        {
            if(obj.TryGetComponent(out Tile tile))
                if (!tile.isSelected)
                {
                    tile.UpdateMat(highlightMat);
                    selection = tile;
                }
        }
    }
}
