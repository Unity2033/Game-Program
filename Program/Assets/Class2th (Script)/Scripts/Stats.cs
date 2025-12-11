using UnityEngine;

public class Stats : MonoBehaviour
{
    public int strength = 5;
    public int wisdom = 1;
    public int dexterity = 0;

    void Start()
    {
        Debug.Log("Strength : " +  strength);
        Debug.Log("Wisdom : " + wisdom);
        Debug.Log("Dexterity : " + dexterity);
    }
}
