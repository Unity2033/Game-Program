using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Select : MonoBehaviour
{
    [SerializeField] Text titleText;

    public void OnEnter()
    {
        titleText.fontSize = 80;
    }

    public void OnDown()
    {
        titleText.fontSize = 50;
    }

    public void OnExit()
    {
        titleText.fontSize = 65;
    }
}
