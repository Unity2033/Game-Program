using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : MonoBehaviour
{
    [SerializeField] GameObject [] weapons;
    [SerializeField] List<GameObject> weaponsList;

    [SerializeField] Transform parentPosition;

    void Start()
    {
        for(int i = 0; i < weapons.Length; i++)
        {
            // Instantiate(prefab, parentPosition);
        }
    }
}
