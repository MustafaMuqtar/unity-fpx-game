using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TriggerAnimation : MonoBehaviour
{

    [SerializeField] FMODUnity.StudioEventEmitter constructorWorker, cellPhone;
    [SerializeField] Animator cellPhoneAnim, constructorAnim1, constructorAnim2;
    [SerializeField] float waitArgue = 13f, waitTalking = 3.5f;
    [SerializeField] GameObject buttonshow, papperSHow, missionSHow, buttonHide;
    [SerializeField] string sceneName;
    private bool _truckAduio = false;




    // Start is called before the first frame update



    void Update()
    {
        if (_truckAduio)
        {
            if (!constructorWorker.IsPlaying())
            {

                buttonshow.SetActive(true);


            }
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("TalkingCell"))
        {
            cellPhoneAnim.SetTrigger("IsPlaying");

            cellPhone.Play();
        }

        if (other.gameObject.CompareTag("ConstructorWorker"))
        {

            StartCoroutine(PlayAnim());
        }

        if (other.gameObject.CompareTag("Papper"))
        {

            papperSHow.SetActive(true);
            missionSHow.SetActive(true);
            buttonHide.SetActive(false);
        }

    }




    IEnumerator PlayAnim()
    {
        constructorWorker.Play();
        _truckAduio = true;
        constructorAnim1.SetBool("IsArguing", true);
        yield return new WaitForSeconds(waitArgue);
        constructorAnim1.SetBool("IsArguing", false);
        constructorAnim2.SetTrigger("IsTalking");
        yield return new WaitForSeconds(waitTalking);
        constructorAnim1.SetTrigger("IsTalking");


    }



    public void StartMission()
    {
        SceneManager.LoadScene(sceneName);
    }
}
