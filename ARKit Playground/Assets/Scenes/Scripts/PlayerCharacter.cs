using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCharacter : MonoBehaviour
{
    public bool isSelected;
    // Start is called before the first frame update
    void Start()
    {
        gameObject.layer = 9;        
    }

    public void SetPosition(Vector3 newPos)
    {
        transform.position = new Vector3(newPos.x, 0.5f, newPos.z);
    }

    public void UpdateMaterial(Material mat)
    {
        GetComponent<Renderer>().material = mat;
    }
}
