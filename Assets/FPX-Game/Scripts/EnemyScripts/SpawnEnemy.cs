using Assets.FPX_Game.Scripts.ObjectPools;
using Assets.FPX_Game.Scripts.ScriptableObjects;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SpawnEnemy : MonoBehaviour
{

    [SerializeField] private TextMeshProUGUI numberCount, levelText, anotherText, gameCompleted;
    [SerializeField] private EnemyScriptableObject enemyScriptableObject;
    [SerializeField] private ChampScriptableObject champScriptableObject;
    [SerializeField] private AudioSource audioLevelStart, audioLevelCount;
    [SerializeField] private GameObject canvas;
    [SerializeField] private GameObject _camera;
    [SerializeField] private Slider slider;
    [SerializeField] private TextMeshProUGUI damageHealthDisplay;

    private void Start()
    {

        enemyScriptableObject.countEnemy = 0;
        enemyScriptableObject.countEnemy2 = 0;
        enemyScriptableObject.isCompleted = false;
        StartCoroutine(LevelCountDownLV1());
    }


    void Update()
    {

        transform.rotation = Quaternion.LookRotation(transform.position - _camera.transform.position);

        if (enemyScriptableObject.isCompleted && enemyScriptableObject.countEnemy2 == 0)
        {

            StartCoroutine(GameCompleted());

            

        }



    }




    IEnumerator LevelCountDownLV1(int timeremaning = 10)
    {
        audioLevelCount.Play();

        for (int f = timeremaning; f > 0; f--)
        {


            canvas.SetActive(true);

            numberCount.text = f.ToString("00");
            levelText.text = f.ToString(enemyScriptableObject.LevelText);



            yield return new WaitForSeconds(1);

        }
        audioLevelCount.Stop();

        anotherText.enabled = false;
        StartCoroutine(SpawnRandomEnemiesLV1());

    }

    IEnumerator SpawnRandomEnemiesLV1()
    {
        canvas.SetActive(false);

        audioLevelStart.Play();


        for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired; i++)
        {
            enemyScriptableObject.countEnemy++;

            InstantiateEnemy();

            yield return new WaitForSeconds(enemyScriptableObject.spawndelay);


        }



    }

    public void StartLevelCountDownLV2()
    {
        audioLevelStart.Stop();
        StartCoroutine(LevelCountDownLV2());

    }

    IEnumerator LevelCountDownLV2(int timeremaning = 10)
    {


        audioLevelStart.Stop();
        for (int f = timeremaning; f > 0; f--)
        {
            canvas.SetActive(true);

            numberCount.text = f.ToString("00");
            levelText.text = f.ToString("Prepare for Wave 2");
            yield return new WaitForSeconds(1);
        }
        champScriptableObject.health = champScriptableObject.maxhealth;
        damageHealthDisplay.text = champScriptableObject.health.ToString();
        slider.maxValue = champScriptableObject.maxhealth;
        slider.value = champScriptableObject.health;

        StartCoroutine(SpawnRandomEnemie2());


    }


    IEnumerator SpawnRandomEnemie2()
    {
        enemyScriptableObject.isCompleted = true;
        canvas.SetActive(false);

        audioLevelStart.Play();


        for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired + 5; i++)
        {
            enemyScriptableObject.countEnemy2++;

            InstantiateEnemy();
            yield return new WaitForSeconds(enemyScriptableObject.spawndelay / 2);
        }
       
    }

    void InstantiateEnemy()
    {


        Vector3 randomSpawn = new Vector3(Random.Range(enemyScriptableObject.MinValueX, enemyScriptableObject.MaxValueX), enemyScriptableObject.YValue, Random.Range(enemyScriptableObject.MinValueY, enemyScriptableObject.MaxValueY));


        GameObject enemyPool = EnemyObjectPool.enemyInstance.GetEnemyPool();

        if (enemyPool != null)
        {
            enemyPool.transform.position = randomSpawn;

            enemyPool.SetActive(true);
        }
    }



    IEnumerator GameCompleted()
    {
        levelText.text = "Game Is completed";
        numberCount.enabled = false;
        canvas.SetActive(true);

        yield return new WaitForSeconds(3);

    }

}
