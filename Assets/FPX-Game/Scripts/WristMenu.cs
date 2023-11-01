using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WristMenu : MonoBehaviour
{

    [SerializeField] GameObject buttonHide, buttonshow, showPapper;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
    }



    public void PhotoPapper()
    {

        Ray ray = new Ray(transform.position, transform.TransformDirection(Vector3.forward));

        if (Physics.Raycast(ray, out RaycastHit hittInfo))
        {
            if (hittInfo.collider.gameObject.CompareTag("Papper"))
            {
                showPapper.SetActive(true);
                buttonHide.SetActive(false);
                buttonshow.SetActive(true);
            }
        }

    }
}
