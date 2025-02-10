using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Saw : Ghost
{
    public override void Effect()
    {
        Debug.Log("Incision");
    }

    void Start()
    {
        health = 50;
        speed = 5;

        Effect();
    }
}
