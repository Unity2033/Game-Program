using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class CreateManager : MonoBehaviourPunCallbacks
{
    [SerializeField] static int count = 0;
    [SerializeField] Transform [ ] transforms;

    private void Awake()
    {
        Create();
    }

    public void Create()
    {
        PhotonNetwork.Instantiate
        (
           "Character",
            transforms[count++].position,
            Quaternion.identity
        );
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        count--;
    }
}
