using UnityEngine;

public class Minotaur : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;
    [SerializeField] Transform portalTransform;

    private void Start()
    {
        portalTransform = GameObject.Find("Portal").transform;

        transform.LookAt(portalTransform);

        direction = (portalTransform.position - transform.position).normalized;
    }

    void Update()
    {
        transform.Translate(direction * speed * Time.deltaTime, Space.World);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Portal"))
        {
            Destroy(gameObject);
        }
    }
}
