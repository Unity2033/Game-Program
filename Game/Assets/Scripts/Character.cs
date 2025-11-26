using UnityEngine;
using Photon.Pun;

public class Character : MonoBehaviourPun 
{
    [SerializeField] Camera remoteCamera;
    [SerializeField] CharacterController characterController;

    [SerializeField] float speed;
    [SerializeField] Vector3 direction;

    private void Awake()
    {
        characterController = GetComponent<CharacterController>();
    }

    void Start()
    {
        DisableCamera();
    }

    private void Update()
    {
        if(photonView.IsMine)
        {
            Control();

            Move();
        }
    }

    public void DisableCamera()
    {
        // 현재 플레이어가 나 자신이라면
        if(photonView.IsMine)
        {
            Camera.main.gameObject.SetActive(false);
        }
        else
        {
            remoteCamera.gameObject.SetActive(false);
        }
    }

    public void Control()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        // direction 방향을 단위 벡터로 설정합니다.
        direction.Normalize();
    }

    public void Move()
    {
        characterController.Move(direction * speed * Time.deltaTime);
    }

}
