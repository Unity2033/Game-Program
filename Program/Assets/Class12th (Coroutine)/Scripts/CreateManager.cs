using System.Collections;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    [SerializeField] int random;
    [SerializeField] float time;
    [SerializeField] GameObject prefab;

    [SerializeField] Transform [ ] transforms;

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
            random = Random.Range(0, transforms.Length);

            yield return waitForSeconds;

            GameObject clone = Instantiate(prefab, gameObject.transform);

            clone.transform.localPosition = transforms[random].position;

            clone.transform.rotation = Quaternion.Euler(0f, 180.0f, 0f);
        }
    }
}
