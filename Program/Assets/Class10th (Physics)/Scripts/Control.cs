using UnityEngine;

public class Control : MonoBehaviour
{
    [SerializeField] float power;
    [SerializeField] Vector3 direction;
    [SerializeField] ForceMode forceMode;
    [SerializeField] Rigidbody rigidBody;

    private void Awake()
    {
        rigidBody = GetComponent<Rigidbody>();

        forceMode = ForceMode.Force;
    }

    void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        direction.Normalize();
    }

    private void FixedUpdate()
    {
        rigidBody.AddForce(direction * power, forceMode);
    }

    public void Soar()
    {
        power = 0.25f;

        forceMode = ForceMode.Impulse;

        direction = Vector3.up;
    }

    public void Initialize()
    {
        forceMode = ForceMode.Force;

        power = 5.0f;
    }
}
