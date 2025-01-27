using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class BilliardBall : MonoBehaviour
{
    private Rigidbody rigidbody;
    [SerializeField] Vector3 direction;

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        direction.Normalize();
    }

    private void FixedUpdate()
    {
        rigidbody.AddForce(direction, ForceMode.Force);

        // ForceMode.Force : 연속적인 힘을 적용하는 방식이며, 객체에 힘을 계속적으로 전달하는
        // 방법으로 시간에 비례하여 적용합니다.

        // ForceMode.Impulse : 순간적인 힘을 적용하는 방식이며, 객체의 가속도가 아닌 속도를
        // 변화시키는 방식입니다.

        // ForceMode.VelocityChange : 순간적인 힘을 적용하는 방식이며, 객체의 속도만 변화시키며
        // 객체의 무게에 영향을 받지 않습니다.

        // ForceMode.Acceleration : 연속적인 힘을 적용하는 방식이며, 객체에 힘을 계속적으로 전달하는
        // 방법이지만, 객체의 무게에 받지 않습니다.
    }

    private void OnCollisionEnter(Collision collision)
    {
        IDamageable damageable = collision.gameObject.GetComponent<IDamageable>();

        if (damageable != null) 
        {
            damageable.Use();
        }
    }

    private void OnCollisionStay(Collision collision)
    {
        Debug.Log("OnCollisionStay");
    }

    private void OnCollisionExit(Collision collision)
    {
        Debug.Log("OnCollisionExit");     
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Goal Line")
        {
            Debug.Log("OnTriggerEnter");
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Goal Line")
        {
            Debug.Log("OnTriggerStay");
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Goal Line")
        {
            Debug.Log("OnTriggerExit");
        }
    }
}
