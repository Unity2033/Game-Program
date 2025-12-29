using UnityEngine;
using UnityEngine.Scripting;

public class Mouse : MonoBehaviour
{
    [SerializeField] Ray ray;
    [SerializeField] RaycastHit raycastHit;

    [SerializeField] float duration = 1.0f;

    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if(Physics.Raycast(ray, out raycastHit, Mathf.Infinity))
            {
                Debug.DrawLine(ray.origin, raycastHit.point, Color.green, duration);

                if (raycastHit.collider.TryGetComponent<Equipment>(out Equipment equipment))
                {
                    equipment.Operate();
                }
            }      
        }
    }
}
