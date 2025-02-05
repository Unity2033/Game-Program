using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private static AudioManager instance;

    [SerializeField] AudioSource audioSource;


    private void Awake()
    {
        
        
    }

    public void Listen(AudioClip audioClip)
    {
        audioSource.PlayOneShot(audioClip);
    }
}
