using System.Collections;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    [SerializeField] float time;
    [SerializeField] GameObject prefab;

    [SerializeField] WaitForSeconds waitForSeconds;

    private void Awake()
    {
        waitForSeconds = new WaitForSeconds(time);
    }

    private void Start()
    {
        StartCoroutine(Coroutine());
    }

    IEnumerator Coroutine()
    {
        while (true)
        {
            yield return waitForSeconds;

            GameObject clone = Instantiate(prefab, gameObject.transform);

            clone.transform.rotation = Quaternion.Euler(0f, 180.0f, 0f);
        }
    }
}
