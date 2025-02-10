using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mutant : Ghost
{
    public override void Effect()
    {
        Debug.Log("Poison Attack");
    }

    // Start is called before the first frame update
    void Start()
    {
        health = 100;
        speed = 20;

        Effect();
    }
}
