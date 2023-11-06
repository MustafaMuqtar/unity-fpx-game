using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WristMenu : MonoBehaviour
{

    [SerializeField] GameObject buttonHide, buttonshow, showPapper;
    [SerializeField] private LayerMask layer;

    public void PhotoPapper()
    {

        Ray ray = new Ray(transform.position, transform.TransformDirection(Vector3.forward));

        if (Physics.Raycast(ray, out RaycastHit hittInfo, layer))
        {

            Debug.Log("raycast");
            showPapper.SetActive(true);   
            buttonshow.SetActive(true);
        

        }


    }
}


