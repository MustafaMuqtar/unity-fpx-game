using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class AgentBaseScene2 : MonoBehaviour
{
    // Start is called before the first frame update


    [SerializeField] FMODUnity.StudioEventEmitter audioBoss;
    public Animator anim;
    public GameObject[] weaponObjects;
    bool _truckAduio = false;
    [SerializeField] GameObject buttonHide, buttonshow;
    [SerializeField] string sceneName;


  

    void Update()
    {
        if (_truckAduio)
        {
            if (!audioBoss.IsPlaying())
            {

                anim.SetBool("IsSpawning", false);
                buttonHide.SetActive(false);
                buttonshow.SetActive(true);
                foreach (var item in weaponObjects)
                {
                    item.SetActive(true);
                }

            }
        }


    }

    public void BossMssage()
    {
        anim.SetBool("IsSpawning", true);

    }

    public void StartMission()
    {
        StartMissionScene3.missionScene4Start = true;
        SceneManager.LoadScene(sceneName);
    }



    void PlayAduio()
    {
        audioBoss.Play();
        _truckAduio = true;
        StartCoroutine(PlayBossAnim());


    }





    IEnumerator PlayBossAnim()
    {
        yield return new WaitForSeconds(6);
        anim.SetTrigger("IsRotating");




    }

 
}
