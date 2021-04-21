using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class GameBoard : MonoBehaviour
{
    public ARRaycastManager aRRaycast;
    private List<ARRaycastHit> aRRayHits;

    //[SerializeField]
    //GameObject boardTile;
    //[SerializeField]
    //GameObject playerCharacter;
    [SerializeField]
    List<GameObject> AllTiles;
    public bool isDrawn;
    public bool characterPlaced;
    [SerializeField]
    float width;
    [SerializeField]
    float length;
    [SerializeField]
    float scale;

    [SerializeField]
    public Material ClickedMat;
    [SerializeField]
    public Material UnclickedMat;
    [SerializeField]
    Color selectedColor = Color.red;
    [SerializeField]
    Color unselectedColor = Color.green;
    [SerializeField]
    Camera arCamera;

    [SerializeField]
    Tile tile;
    [SerializeField]
    PlayerCharacter player;
    [SerializeField]
    GameObject PlayerObjPrefab;
    [SerializeField]
    GameObject TileObjPrefab;
    GameObject PreviousTile;
    GameObject CurrentTile;

    public Tile selectedTile;
    public PlayerCharacter selectedPlayer;

    [SerializeField]
    CharacterDetailPannel CharPan;
    Collider boxCollider;

    void Start()
    {
        isDrawn = false;
        characterPlaced = false;
        AllTiles = new List<GameObject>();
        aRRayHits = new List<ARRaycastHit>();
        width = Random.Range(1, 20);
        length = Random.Range(1, 20);
        boxCollider = GetComponent<Collider>();
    }

    void Update()
    {

        if (!isDrawn)
        {
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);

                if (touch.phase == TouchPhase.Began)
                {
                    if (Input.touchCount == 1)
                    {
                        if (aRRaycast.Raycast(touch.position, aRRayHits))
                        {
                            var pose = aRRayHits[0].pose;
                            DrawBoardFromTouch(pose.position);
                            return;
                        }
                    }
                }
            }
        }
        else
        {
            if (!characterPlaced)
            {
                if (Input.touchCount > 0)
                {
                    var touch = Input.GetTouch(0);

                    if (touch.phase == TouchPhase.Began)
                    {
                        Ray ray = arCamera.ScreenPointToRay(touch.position);
                        if (Input.touchCount == 1)
                        {
                            if (Physics.Raycast(ray, out RaycastHit hit))
                            {
                                Tile tile = hit.transform.GetComponent<Tile>();
                                if (tile != null)
                                {
                                    Vector3 pose = tile.transform.position;
                                    PlaceCharacter(pose);
                                    return;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if (Input.touchCount > 0)
                {
                    var touch = Input.GetTouch(0);

                    if (touch.phase == TouchPhase.Began)
                    {
                        if (Input.touchCount == 1)
                        {
                            Ray rayCast = arCamera.ScreenPointToRay(touch.position);

                            if (Physics.Raycast(rayCast, out RaycastHit hit))
                            {
                                GameObject touchObj = hit.transform.gameObject;

                                //Check collidaer tag for specific behaviours
                                if (touchObj.CompareTag("Tile"))
                                {
                                    //if (GetSelectedPlayer() && GetSelectedPlayer().isSelected)
                                    //    GetSelectedPlayer().SetPosition(touchObj.transform.position);
                                    //else
                                    //    touchObj.GetComponent<ISelectable>().Select();
                                    ChangeSelectedTile(touchObj.GetComponent<Tile>());
                                }
                                else if (touchObj.CompareTag("Character"))
                                {
                                    if (GetSelectedPlayer() && GetSelectedPlayer().isSelected)
                                    {
                                        GetSelectedPlayer().isSelected = !GetSelectedPlayer().isSelected;

                                    }
                                    else
                                        touchObj.GetComponent<ISelectable>().Select();
                                }

                            }
                        }
                    }
                }

            }
        }
    }

    public void DrawBoardFromTouch(Vector3 startPos)
    {
        isDrawn = true;
        Vector3 currentPos = startPos;
        //new Vector3(x, 0, z)
        for (int x = 0; x < Random.Range(1, 20); x++)
        {
            for (int z = 0; z < Random.Range(1, 20); z++)
            {
                Debug.Log(string.Format("Tile ({0},{1}) drawn at {2}", x, z, currentPos.ToString()));
                GameObject newTileObj = Instantiate(TileObjPrefab, currentPos, Quaternion.identity);
                Tile spawnedTile = newTileObj.GetComponent<Tile>();
                spawnedTile.transform.SetParent(transform);
                spawnedTile.name = string.Concat(x.ToString(), " , ", z.ToString());
                spawnedTile.GridPos.x = x;
                spawnedTile.GridPos.y = z;
                currentPos.x = startPos.x + (boxCollider.bounds.size.x * x);
                currentPos.z = startPos.z + (boxCollider.bounds.size.z * z);
                AllTiles.Add(newTileObj);
            }
        }
        PlaceCharacter(startPos);
    }

    public void PlaceCharacter(Vector3 tilePos)
    {
        characterPlaced = true;
        PlayerCharacter placeCharacter = Instantiate(PlayerObjPrefab, tilePos, Quaternion.identity).GetComponent<PlayerCharacter>();
        placeCharacter.AssignDetails();
    }

    public Tile GetSelectedTile()
    {
        if (!selectedTile)
        {
            Debug.Log("tile is null GameBoard.GetSelectedTile()");
            throw new System.Exception("tile is null GameBoard.GetSelectedTile()");
        }
        else
            return selectedTile;
    }

    public PlayerCharacter GetSelectedPlayer()
    {
        if (!selectedPlayer)
        {
            Debug.Log("player is null GameBoard.GetSelectedPlayer()");
            throw new System.Exception("player is null GameBoard.GetSelectedPlayer()");
        }
        else
            return selectedPlayer;
    }

    public void DeselectPlayer()
    {
        selectedPlayer.UpdateMaterial(UnclickedMat);
        selectedPlayer.isSelected = false;
    }

    public void DeselectTile()
    {
        MeshRenderer meshRenderer = selectedTile.GetComponent<MeshRenderer>();
        if (selectedTile != null)
        {
            meshRenderer.material.color = unselectedColor;
            selectedTile.UpdateMat(UnclickedMat);
            selectedTile.isSelected = false;
        }
    }



    public void SelectPlayer(PlayerCharacter player)
    {
        DeselectTile();
        if (selectedPlayer)
            DeselectPlayer();
        selectedPlayer = player;
        selectedPlayer.UpdateMaterial(ClickedMat);
        selectedPlayer.isSelected = true;
    }

    public void SelectTile(Tile tile)
    {
        MeshRenderer meshRenderer = tile.GetComponent<MeshRenderer>();
        if (selectedTile)
            DeselectTile();
        selectedTile = tile;
        meshRenderer.material.color = selectedColor;
        selectedTile.UpdateMat(ClickedMat);
        selectedTile.isSelected = true;
    }

    void ChangeSelectedTile(Tile selectedTile)
    {
        foreach (var tile in AllTiles)
        {
            MeshRenderer meshRenderer = tile.GetComponent<MeshRenderer>();
            if (tile.GetComponent<Tile>() != selectedTile)
            {
                CurrentTile.GetComponent<Tile>().isSelected = false;
                meshRenderer.material.color = unselectedColor;
            }
            else
            {
                CurrentTile.GetComponent<Tile>().isSelected = true;
                meshRenderer.material.color = selectedColor;
            }
        }
    }
}

#region Commented Code
//private void CreatePlayer(Vector3 pos)
//{
//    PlayerCharacter newPlayer = Instantiate(player, transform.position, Quaternion.identity);
//    int[] stats = new int[6];
//    for (int i = 0; i < stats.Length; i++)
//        stats[i] = Random.Range(1, 10);
//    PLAYERCLASS defineClass = (PLAYERCLASS)Random.Range(1, 12);
//    if (newPlayer.currentCharacter != null)
//    {
//        newChar.detailInfo.Name = "Bardy McBardface";
//        newChar.detailInfo.DefineClass = defineClass;
//        newChar.detailInfo.Class = newChar.detailInfo.DefineClass.ToString();
//        newChar.detailInfo.Str = stats[0];
//        newChar.detailInfo.Dex = stats[1];
//        newChar.detailInfo.Con = stats[2];
//        newChar.detailInfo.Intel = stats[3];
//        newChar.detailInfo.Wis = stats[4];
//        newChar.detailInfo.Chr = stats[5];
//        //characterDetailManager.WhiteInfoToJson(newChar.detailInfo);
//    }

//    newPlayer.transform.SetParent(transform);
//    newPlayer.SetPosition(pos);
//    //CharPan.CharacterInfo = newPlayer;
//    CharPan.SetDetails();
//    //CharacterDetailStatic.ReadInfoFromJson();
//}

//UPDATE
//if (Input.touchCount > 0)
//{
//    var touch = Input.GetTouch(0);
//    if (touch.phase == TouchPhase.Ended)
//    {
//        if (Input.touchCount == 1)
//        {
//            if (arRaycastManager.Raycast(touch.position, arRaycastHits))
//            {
//                var pose = arRaycastHits[0].pose;
//                CreateCube(pose.position);
//                return;
//            }
//            Ray rayCast = Camera.main.ScreenPointToRay(touch.position);
//            if (Physics.Raycast(rayCast, out RaycastHit hit))
//            {
//                if (hit.collider.tag == "CubeObject")
//                {
//                    DeleteCube(hit.collider.gameObject);
//                }
//            }
//        }
//    }
//}
//UPDATE

//METHODS
//public void DrawBoard()
//{
//    isDrawn = true;
//    //Vector3 widthVe = Vector3.right * w;
//    for (int x = 0; x < width; x++)
//    {
//        for (int z = 0; z < length; z++)
//        {
//            Tile spawnedTile = Instantiate(tile, new Vector3(x, 0, z), Quaternion.identity);
//            spawnedTile.transform.SetParent(transform);
//            spawnedTile.name = string.Concat(x.ToString(), " , ", z.ToString());
//            spawnedTile.GridPos.x = x;
//            spawnedTile.GridPos.y = z;
//        }
//    }
//    CreatePlayer(new Vector3(0, 0, 0));
//}



//private IEnumerator DrawBoardDelayed(int w, int l)
//{
//    WaitForSeconds wait = new WaitForSeconds(0.05f);
//    //Vector3 widthVe = Vector3.right * w;
//    Vector3 heightVe = Vector3.forward * l;
//    for (int i = 0; i < w; i++)
//    {
//        Vector3 start = Vector3.forward * i;
//        Vector3 startWidth;
//        //Debug.DrawLine(start, start + widthVe);
//        //Instantiate(boardTile, start + widthVe, Quaternion.identity);
//        for (int j = 0; j < l; j++)
//        {
//            startWidth = Vector3.right * j;
//            startWidth += start;
//            GameObject newTile = Instantiate(boardTile, startWidth + heightVe, Quaternion.identity);
//            AllTiles.Add(newTile);
//            if(newTile.TryGetComponent(out Tile tile))
//            {
//                tile.GridPos.Add(i);
//                tile.GridPos.Add(j);
//                tile.GridName = i.ToString() + j.ToString();
//            }
//            yield return wait;
//        }
//    }
//}
//if (Input.GetMouseButtonDown(0))
//{
//    GameObject obj = RayGetObj();

//    if (!isDrawn) {
//        DrawTiles(Vector3.zero);
//    }
//    else
//    {
//        if (GetSelectedPlayer() && GetSelectedPlayer().isSelected)
//            GetSelectedPlayer().SetPosition(obj.transform.position);
//        else
//            obj.GetComponent<ISelectable>().Select();
//    }
//}

////Deselect tile or player
//if (Input.GetMouseButtonDown(1))
//{
//    if (GetSelectedPlayer() && GetSelectedPlayer().isSelected)
//        DeselectPlayer();

//    if (GetSelectedTile() && GetSelectedTile().isSelected)
//        DeselectTile();
//}


////Development methos for use with mouse

//public void DrawTiles(Vector3 start)
//{
//    isDrawn = true;
//    Vector3 lengthVe = start * length;
//    for (int i = 0; i < width; i++)
//    {
//        //start = Vector3.forward * i;
//        Vector3 startWidth;
//        for (int j = 0; j < length; j++)
//        {
//            startWidth = Vector3.right * j;
//            startWidth += start;
//            var newTile = Instantiate(tile, startWidth + lengthVe, Quaternion.identity);
//            newTile.transform.parent = transform;
//        }
//    }
//}

//private void OnMouseUp()
//{
//    Debug.Log("Entered OnMouseUp()");
//    Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
//    RaycastHit hit;
//    if (Physics.Raycast(ray, out hit))
//    {
//        if (PreviousTile != null)
//        {
//            PreviousTile.GetComponent<Renderer>().material = UnclickedMat;
//        }
//        CurrentTile = hit.collider.gameObject;
//        PreviousTile = CurrentTile;
//        if (CurrentTile.TryGetComponent(out Tile tile))
//        {
//            CurrentTile.GetComponent<Renderer>().material = ClickedMat;
//            Debug.Log(tile.GridName);
//        }
//    }
//}

//public IEnumerator DrawDelay(Vector3 startPos)
//{
//    WaitForSeconds wait = new WaitForSeconds(0.05f);
//    isDrawn = true;
//    Vector3 currentPos = startPos;
//    //new Vector3(x, 0, z)
//    for (int x = 0; x < width; x++)
//    {
//        for (int z = 0; z < length; z++)
//        {
//            Debug.Log(string.Format("Tile ({0},{1}) drawn at {2}", x, z, currentPos.ToString()));
//            Tile spawnedTile = Instantiate(TileObjPrefab, currentPos, Quaternion.identity).GetComponent<Tile>();
//            spawnedTile.transform.SetParent(transform);
//            spawnedTile.name = string.Concat(x.ToString(), " , ", z.ToString());
//            spawnedTile.GridPos.x = x;
//            spawnedTile.GridPos.y = z;
//            currentPos.x = startPos.x + (boxCollider.bounds.size.x * x);
//            currentPos.z = startPos.z + (boxCollider.bounds.size.z * z);
//        }
//    }
//    PlaceCharacter(startPos);
//    yield return wait;
//}
#endregion