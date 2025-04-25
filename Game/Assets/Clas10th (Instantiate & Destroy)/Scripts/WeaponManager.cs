using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : MonoBehaviour
{
    [SerializeField] GameObject prefab;
    [SerializeField] Transform parentPosition;

    // Start is called before the first frame update
    void Start()
    {
        Instantiate(prefab, parentPosition);
    }
}
