using Assets.FPX_Game.Scripts.ScriptableObjects;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


namespace Assets.FPX_Game.Scripts.Player
{
    public class PlayerHealth : MonoBehaviour
    {

        [SerializeField] private ChampScriptableObject champScriptableObject;
        [SerializeField] private EnemyScriptableObject enemyScriptableObject;
        [SerializeField] private Slider slider;
        [SerializeField] private TextMeshProUGUI damageHealthDisplay;
        [SerializeField] private GameObject show;
        [SerializeField] private GameObject[] hide;

        void Start()
        {
            champScriptableObject.health = champScriptableObject.maxhealth;
            damageHealthDisplay.text = champScriptableObject.health.ToString();
            enemyScriptableObject.countEnemyAttacks = 0;
            slider.maxValue = champScriptableObject.maxhealth;
            slider.value = champScriptableObject.health;
        }


        public void TakeDamage(float amount)
        {

            champScriptableObject.health -= amount;
            if (champScriptableObject.health >= 0)
            {
                damageHealthDisplay.text = champScriptableObject.health.ToString();

            }
            slider.value = champScriptableObject.health;
            if (champScriptableObject.health <= 0)
            {


                StartCoroutine(GameOver());




            }



        }




        IEnumerator GameOver()
        {
            yield return new WaitForSeconds(2f);


            show.SetActive(true);

            foreach (var item in hide)
            {
                item.SetActive(false);

            }
            Time.timeScale = 0;

        }




    }
}

