using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartMissionScene3 : MonoBehaviour
{
    public GameObject[] show;
    public GameObject[] hide;
    public static bool missionScene3Start = false;
    public static bool missionScene4Start = false;


    // Start is called before the first frame update
    void Start()
    {
        if (missionScene3Start)
        {
            foreach (var item in show)
            {
                item.SetActive(true);
            }

            foreach (var item in hide)
            {
                item.SetActive(false);
            }
        }

        if (missionScene4Start)
        {
            foreach (var item in show)
            {
                item.SetActive(true);
            }

            foreach (var item in hide)
            {
                item.SetActive(false);
            }
        }


    }


}
