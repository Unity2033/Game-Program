using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sound : MonoBehaviour
{
    [SerializeField] int seed;

    [SerializeField] AudioClip audioClip;

    void Start()
    {
        StartCoroutine(Coroutine());
    }

    IEnumerator Coroutine()
    {
        while (true)
        {
            seed = Random.Range(1, 5);

            yield return new WaitForSeconds(seed);

            AudioManager.Instance.Listen(audioClip);
        }
    }
}
