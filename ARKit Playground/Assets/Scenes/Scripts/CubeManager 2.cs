using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CubeManager : MonoBehaviour
{
    public ARRaycastManager aRRaycastManager;
    public GameObject Cube;

    private List<ARRaycastHit> aRRaycastHits = new List<ARRaycastHit>();

    void Start()
    {
        
    }

    void Update()
    {
        if(Input.touchCount > 0)
        {
            var touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Ended)
            {
                if(Input.touchCount == 1)
                {
                    if(aRRaycastManager.Raycast(touch.position, aRRaycastHits))
                    {
                        var pose = aRRaycastHits[0].pose;
                        CreateCube(pose.position);
                        return;
                    }

                    Ray rayCast = Camera.main.ScreenPointToRay(touch.position);

                    if(Physics.Raycast(rayCast, out RaycastHit hit))
                    {
                        if (hit.collider.CompareTag("CubeObject"))
                        {
                            DeleteCube(hit.collider.gameObject);
                        }
                        
                    }
                }
            }
        }
        
    }

    private void CreateCube(Vector3 pos)
    {
        Instantiate(Cube, pos, Quaternion.identity);
    }

    private void DeleteCube(GameObject cubeObj)
    {
        Destroy(cubeObj);
    }
}
