using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Picking : MonoBehaviour
{
    private Ray ray;
    private RaycastHit rayCastHit;

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if(Physics.Raycast(ray, out rayCastHit, Mathf.Infinity))
            {
                rayCastHit.transform.GetComponent<View>().Show();
            }
        }
    }
}
