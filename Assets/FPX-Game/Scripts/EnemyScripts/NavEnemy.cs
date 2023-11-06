using Assets.FPX_Game.Scripts.GameManagers;
using Assets.FPX_Game.Scripts.Player;
using Assets.FPX_Game.Scripts.ScriptableObjects;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NavEnemy : MonoBehaviour
{
    [SerializeField] private EnemyScriptableObject enemyScriptableObject;
    [SerializeField] private ChampScriptableObject champScriptableObject;
  
    [SerializeField] FMODUnity.StudioEventEmitter zombieScream;





    private NavMeshAgent _enemy;
    private Animator _anim;
    private GameObject _player;
    private PlayerHealth _playerHealth;



    void Start()
    {
        _player = GameManager.gameManagersInstance.player;
        _enemy = GetComponent<NavMeshAgent>();
        _anim = GetComponent<Animator>();
        _playerHealth = _player.GetComponent<PlayerHealth>();

    }



    // Update is called once per frame
    void Update()
    {

        _enemy.SetDestination(_player.transform.position);

        if (champScriptableObject.health <= 0)
        {
            StartCoroutine(GameOver());

        }
    }




    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            _anim.SetBool("IsAttacking", true);

        }


        if (other.gameObject.layer == LayerMask.NameToLayer("Trigger"))
        {
            _anim.SetBool("IsRunning", true);
           // audioSource.PlayOneShot(zombieScream);
          // audioSource.maxDistance = 10;
            zombieScream.Play();


        }




    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            _anim.SetBool("IsAttacking", false);

        }


    }



    void AnimationEvent()
    {
        enemyScriptableObject.countEnemyAttacks++;

        if (enemyScriptableObject.countEnemyAttacks < 6)
        {


            _playerHealth.TakeDamage(enemyScriptableObject.damage);
        }


    }


    IEnumerator GameOver()
    {
        yield return new WaitForSeconds(1.5f);
        gameObject.SetActive(false);

    }
}
