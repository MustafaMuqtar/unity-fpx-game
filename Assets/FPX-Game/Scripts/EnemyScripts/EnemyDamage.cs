using Assets.FPX_Game.Scripts.GameManagers;
using Assets.FPX_Game.Scripts.ScriptableObjects;
using Assets.FPX_Game.Scripts.WeaponScripts;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

namespace Assets.FPX_Game.Scripts.TargetScripts
{
    public class EnemyDamage : MonoBehaviour
    {
        [SerializeField] private Slider slider;
        [SerializeField] private TextMeshProUGUI damageHealthDisplay;
        [SerializeField] private EnemyScriptableObject enemyScriptableObject;

        [SerializeField] FMODUnity.StudioEventEmitter zombieTalk;

        [SerializeField] private float health;
        [SerializeField] private float maxhealth;



        private Animator _anim;
        private NavMeshAgent _enemy;
        private SpawnEnemy _spawnEnemyScript;
        private void Start()
        {
            //  _spawnEnemyScript = GameObject.FindGameObjectWithTag("Bullet");
            _spawnEnemyScript = GameManager.gameManagersInstance.SpawnEnemyScript;

        }


        private void OnEnable()
        {
            _anim = GetComponent<Animator>();
            _enemy = GetComponent<NavMeshAgent>();
            _enemy.speed = 0.3f;
            health = maxhealth;
            damageHealthDisplay.text = health.ToString();


            slider.maxValue = maxhealth;
            slider.value = health;
            slider.gameObject.SetActive(true);

           // zombieTalk.Play();

        }

        public void TakeDamage(float amount)
        {




            health -= amount;
            if (health >= 0)
            {

                damageHealthDisplay.text = health.ToString();

            }
            slider.value = health;
            if (health <= 0)
            {
                StartCoroutine(Die());
                zombieTalk.Stop();

            }


            StartCoroutine(TextDeactivee());

        }




        IEnumerator Die()
        {

            _anim.SetBool("IsDead", true);
            _enemy.speed = 0;
            yield return new WaitForSeconds(10f);
            // Destroy(gameObject);

            gameObject.SetActive(false);
            enemyScriptableObject.countEnemy--;
            if (enemyScriptableObject.isCompleted)
            {
                enemyScriptableObject.countEnemy2--;

            }

            if (enemyScriptableObject.countEnemy == 0)
            {

                _spawnEnemyScript.StartLevelCountDownLV2();
            }



        }

        IEnumerator TextDeactivee()
        {

            if (health == 0)
            {
                yield return new WaitForSeconds(1.5f);

                slider.gameObject.SetActive(false);


            }



        }
    }
}
