using PlayFab;
using Photon.Pun;
using UnityEngine;
using UnityEngine.UI;
using PlayFab.ClientModels;
using System.Collections;

public class PlayfabManager : MonoBehaviourPunCallbacks
{
    [SerializeField] string version;

    [SerializeField] GameObject failurePanel;
    [SerializeField] InputField emailInputField;
    [SerializeField] InputField passwordInputField;

    public void Success(LoginResult loginResult)
    {
        PhotonNetwork.AutomaticallySyncScene = false;

        PhotonNetwork.GameVersion = version;

        StartCoroutine(Connect());
    }

    IEnumerator Connect()
    {
        // Master Server�� �����մϴ�.
        PhotonNetwork.ConnectUsingSettings();

        // ���� ������ �Ϸ�ǰų� �ð� �ʰ��� �� ���� ���
        while(PhotonNetwork.IsConnectedAndReady == false)
        {
            yield return null;
        }

        // Ư�� �κ� �����Ͽ� �����ϴ� �Լ�
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        PhotonNetwork.LoadLevel("Lobby");
    }

    public void Access()
    {
        var request = new LoginWithEmailAddressRequest
        {
            Email = emailInputField.text,
            Password = passwordInputField.text,
        };

        PlayFabClientAPI.LoginWithEmailAddress
        (
            request,
            Success,
            Failure
        );
    }

    void Failure(PlayFabError playFabError)
    {
        failurePanel.GetComponent<Failure>().Message(playFabError.GenerateErrorReport());

        failurePanel.SetActive(true);
    }

}
