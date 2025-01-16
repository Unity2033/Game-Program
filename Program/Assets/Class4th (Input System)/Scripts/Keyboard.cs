using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Keyboard : MonoBehaviour
{
    public float speed = 5.0f;
    private Vector3 direction;

    void Start()
    {
        
    }

    void Update()
    {
        // Time.deltaTime란?
        // 마지막 프레임이 완료된 후 경과한 시간입니다.

        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        // 벡터의 정규화
        direction.Normalize();

        transform.position = transform.position + direction * speed * Time.deltaTime;
    }
}
