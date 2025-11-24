using UnityEngine;
using Photon.Pun;

public class CreateManager : MonoBehaviourPunCallbacks
{
    void Start()
    {
        PhotonNetwork.Instantiate("Character", Vector3.zero, Quaternion.identity);
    }
}
