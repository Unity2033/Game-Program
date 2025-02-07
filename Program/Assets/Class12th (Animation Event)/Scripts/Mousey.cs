using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mousey : MonoBehaviour
{
    [SerializeField] Animator animator;

    [SerializeField] Vector3 direction;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        direction.z = Input.GetAxis("Vertical");

        animator.SetFloat("Vertical", direction.z);
    }

    public void Measure()
    {
        Debug.Log("Measure");
    }
}
