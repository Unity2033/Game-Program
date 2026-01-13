using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] bool state;



    void Start()
    {
        state = true;
    }

    public void Pause()
    {
        state = false;
    
    }
}
