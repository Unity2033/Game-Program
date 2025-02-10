using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Angel : Ghost
{
    public override void Effect()
    {
        Debug.Log("Resurrection");
    }

    // Start is called before the first frame update
    void Start()
    {
        health = 75;
        speed = 10;

        Effect();
    }


}
