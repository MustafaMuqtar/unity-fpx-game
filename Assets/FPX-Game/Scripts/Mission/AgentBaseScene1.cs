using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class AgentBaseScene1 : MonoBehaviour
{
    // Start is called before the first frame update


    [SerializeField] FMODUnity.StudioEventEmitter audioBoss;
    public Animator anim, bossAnim;
    public GameObject bossGameObj, buttonHide, buttonshow, wristHide;
    bool _truckAduio = false;
    //  [SerializeField] GameObject buttonHide, buttonshow;
    [SerializeField] string sceneName;
    [SerializeField] GameObject[] hideGuns;
    public static bool practiceScenStart = false;

    private void Start()
    {
        if (practiceScenStart)
        {
            PracticeScen();
        }
    }
    void Update()
    {
        if (_truckAduio)
        {
            if (!audioBoss.IsPlaying())
            {

                anim.SetBool("IsSpawning", false);
                buttonHide.SetActive(false);
                buttonshow.SetActive(true);

                bossGameObj.SetActive(false);
            }
        }


    

    }

    public void BossMssage()
    {
        anim.SetBool("IsSpawning", true);

    }

    public void StartMission()
    {
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
        bossGameObj.SetActive(true);
        anim.SetTrigger("IsRotating");


    }


   public void PracticeScen()
    {
        wristHide.SetActive(false);
        foreach (var item in hideGuns)
        {
            item.SetActive(true);

        }
    }
}
