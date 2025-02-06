using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private static AudioManager instance;

    public static AudioManager Instance {  get { return instance; } }

    [SerializeField] AudioSource audioSource;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }      
    }

    public void Listen(AudioClip audioClip)
    {
        audioSource.PlayOneShot(audioClip);
    }
}
