using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class InputManager : MonoBehaviour
{

    [SerializeField]
    public GameBoard gameBoard;
    [SerializeField]
    Material highlightMat;
    public Tile selection;
    Touch touch;
    public ARRaycastManager arRaycastManager;
    private List<ARRaycastHit> arRaycastHits;

    private void Start()
    {
         arRaycastHits = new List<ARRaycastHit>();
    }

    void Update()
    {
        HighlightTile();

        //select player or tile
        if (Input.GetMouseButtonDown(0))
        {
            GameObject obj = RayGetObj();

            if (!gameBoard.isDrawn)
                gameBoard.DrawTiles(Vector3.zero);
            else
            {
                if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                        gameBoard.GetSelectedPlayer().SetPosition(obj.transform.position);
                else
                    obj.GetComponent<ISelectable>().Select();
            }
        }

        //Deselect tile or player
        if (Input.GetMouseButtonDown(1))
        {
            if(gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                gameBoard.DeselectPlayer();
            
            if (gameBoard.GetSelectedTile() && gameBoard.GetSelectedTile().isSelected)
                gameBoard.DeselectTile();
        }

        if(Input.touchCount > 0)
        {
            GameObject touchObj = RayTouch(touch);
            touch = Input.GetTouch(0);
            if(touch.phase == TouchPhase.Ended)
            {
                if(Input.touchCount == 1)
                {
                    if (!gameBoard.isDrawn)
                    {
                        if(arRaycastManager.Raycast(touch.position, arRaycastHits))
                        {
                            Pose pose = arRaycastHits[0].pose;
                            gameBoard.DrawTiles(pose.position);
                            return;
                        }
                    }
                    else
                    {
                        if (touchObj.CompareTag("Tile"))
                        {
                            if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                                gameBoard.GetSelectedPlayer().SetPosition(touchObj.transform.position);
                            else
                                touchObj.GetComponent<ISelectable>().Select();

                        }
                        else if(touchObj.CompareTag("Player Token"))
                        {
                            if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
                                gameBoard.GetSelectedPlayer().isSelected = !gameBoard.GetSelectedPlayer().isSelected;
                            else
                                touchObj.GetComponent<ISelectable>().Select();
                        }
                    }
                    
                }
            }
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
        if (selection != null && !selection.isSelected)
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

    ////Select player or tile from touch
    //foreach (Touch touch in Input.touches)
    //{
    //    if (!gameBoard.isDrawn)
    //        gameBoard.DrawTiles(Vector3.zero);
    //    else
    //    {
    //        if (touch.phase == TouchPhase.Began)
    //        {
    //            GameObject obj = RayTouch(touch);
    //            if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
    //                gameBoard.GetSelectedPlayer().SetPosition(obj.transform.position);
    //            else
    //                obj.GetComponent<ISelectable>().Select();
    //        }

    //        //deselect onlong press
    //        if(touch.deltaTime > 0.2f)
    //        {
    //            if (gameBoard.GetSelectedPlayer() && gameBoard.GetSelectedPlayer().isSelected)
    //                gameBoard.DeselectPlayer();

    //            if (gameBoard.GetSelectedTile() && gameBoard.GetSelectedTile().isSelected)
    //                gameBoard.DeselectTile();
    //        }
    //    }
    //}
    #endregion
}
