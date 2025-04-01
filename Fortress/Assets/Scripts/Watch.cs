using UnityEngine;
using Photon.Pun;

public class Watch : MonoBehaviourPun
{
    // Update is called once per frame
    void Update()
    {
        Debug.Log(PhotonNetwork.Time);
    }
}
