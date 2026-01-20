using System.Collections;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    [SerializeField] float radius;
    [SerializeField] GameObject minotaur;
    [SerializeField] WaitForSeconds waitForSeconds;

    private void Awake()
    {
        waitForSeconds = new WaitForSeconds(5.0f);
    }

    void Start()
    {
        StartCoroutine(Create());
    }

    IEnumerator Create()
    {
        while(true)
        {
            GameObject clone = Instantiate(minotaur);

            Vector2 direction = Random.insideUnitCircle.normalized * radius;

            clone.transform.position = new Vector3(direction.x, 0, direction.y);

            yield return waitForSeconds;
        }
    }


}
