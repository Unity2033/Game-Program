using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    [SerializeField] AudioSource audioSource;

    public void Listen(AudioClip audioClip)
    {
        audioSource.PlayOneShot(audioClip);
    }
}
