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
    Touch touch;

    void Update()
    {
        HighlightTile();

        //select player or tile
        if (Input.GetMouseButtonDown(0))
        {
            GameObject obj = RayGetObj();

            if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                    gameBoard.GetSelectedPlayer().SetPosition(obj.transform.position);
            else
                obj.GetComponent<ISelectable>().Select();
        }

        //Deselect tile or player
        if (Input.GetMouseButtonDown(1))
        {
            if(gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                gameBoard.DeselectPlayer();
            
            if (gameBoard.GetSelectedTile() && gameBoard.GetSelectedTile().isSelected)
                gameBoard.DeselectTile();
        }

        //Select player or tile from touch
        foreach (Touch touch in Input.touches)
        {
            //if (!gameBoard.isDrawn)
                //gameBoard.DrawBoard();
            //else
            //{
                if(touch.phase == TouchPhase.Began)
                {
                    GameObject obj = RayTouch(touch);
                    if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                        gameBoard.GetSelectedPlayer().SetPosition(obj.transform.position);
                    else
                        obj.GetComponent<ISelectable>().Select();
                }

                //deselect onlong press
                if(touch.deltaTime > 0.2f)
                {
                    if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                        gameBoard.DeselectPlayer();

                    if (gameBoard.GetSelectedTile() && gameBoard.GetSelectedTile().isSelected)
                        gameBoard.DeselectTile();
                }
            //}
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

    private GameObject RayTouch(Touch touch)
    {
        Ray ray = Camera.main.ScreenPointToRay(touch.position);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
            return hit.transform.gameObject;
        return null;
    }

    private void HighlightTile()
    {
        if (selection && !selection.isSelected)
        {
            selection.UpdateMat(gameBoard.UnclickedMat);
            selection = null;
        }
        GameObject obj = RayGetObj();

        if(obj)
        {
            if(obj.TryGetComponent(out Tile tile))
                if (!tile.isSelected)
                {
                    tile.UpdateMat(highlightMat);
                    selection = tile;
                }
        }
    }

    #region Commented Code
    //private void SelTile(GameObject obj)
    //{
    //    if (obj)
    //    {
    //        if (obj.layer == 8)
    //            if (obj.TryGetComponent(out Tile tile))
    //                tile.Select();


    //        if (obj.layer == 9)
    //            if (obj.TryGetComponent(out PlayerCharacter player))
    //                player.Select();
    //    }
    //}
    #endregion
}
