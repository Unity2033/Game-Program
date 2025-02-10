using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Ghost : MonoBehaviour
{
    [SerializeField] protected int health;
    [SerializeField] protected float speed;

    void Update()
    {
        
    }

    public abstract void Effect();
}
