using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hide : MonoBehaviour
{

    [SerializeField] GameObject[] clones;
    // Start is called before the first frame update


    public void HideALlClones()
    {
        foreach (var item in clones)
        {
            item.SetActive(false);
        }
    }

}
