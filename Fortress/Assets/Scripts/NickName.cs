using Photon.Pun;
using PlayFab;
using PlayFab.ClientModels;
using UnityEditor.PackageManager;
using UnityEngine;

public class NickName : MonoBehaviourPunCallbacks
{
    private void Awake()
    {
        Information(null);
    }

    private void Information(LoginResult result)
    {
        GetAccountInfoRequest accountInfoRequest = new GetAccountInfoRequest();

        PlayFabClientAPI.GetAccountInfo(accountInfoRequest, Success, Failure);
    }

    private void Success(GetAccountInfoResult result)
    {
        photonView.Owner.NickName = result.AccountInfo.Username;
    }

    private void Failure(PlayFabError error)
    {
        Debug.LogError("Error: " + error.GenerateErrorReport());
    }
}
