using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.FPX_Game.Scripts.ObjectPools
{
    public class EnemyObjectPool : MonoBehaviour
    {

        public static EnemyObjectPool enemyInstance;

        [SerializeField] private List<GameObject> enemyPooledObjects;
       public  GameObject enemyPrefab;

        private int _amountEnemyToPool = 25;


        private void Awake()
        {
            if (enemyInstance == null)
            {
                enemyInstance = this;
            }
        }

        private void Start()
        {
            for (int i = 0; i < _amountEnemyToPool; i++)
            {
                GameObject obj = Instantiate(enemyPrefab);
                obj.SetActive(false);
                enemyPooledObjects.Add(obj);
            }


          
        }

        public GameObject GetEnemyPool()
        {
            for (int i = 0; i < enemyPooledObjects.Count; i++)
            {
                if (!enemyPooledObjects[i].activeInHierarchy)
                {
                    return enemyPooledObjects[i];
                }
            }

            return null;
        }




    }
}
