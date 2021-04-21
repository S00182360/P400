using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceRollPanelControl : MonoBehaviour
{
    [SerializeField]
    GameObject RollPanel;
    bool active;
    private void Start()
    {
        RollPanel.SetActive(false);
        active = false;
        transform.SetAsLastSibling();
    }

    public void ToggleRollPanel()
    {
        active = !active;
        RollPanel.SetActive(active);
    }
}
