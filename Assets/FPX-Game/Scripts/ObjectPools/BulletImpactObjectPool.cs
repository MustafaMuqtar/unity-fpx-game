using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Assets.FPX_Game.Scripts.ObjectPools
{
    public class BulletImpactObjectPool : MonoBehaviour
    {
        public static BulletImpactObjectPool impactInstance;

        [SerializeField] private List<GameObject> bulletImapctPooledObjects;
        [SerializeField] private GameObject bulletImapctPrefab;

        private int _amounBulletImapctToPool = 60;


        private void Awake()
        {
            if (impactInstance == null)
            {
                impactInstance = this;
            }
        }

        private void Start()
        {



            for (int i = 0; i < _amounBulletImapctToPool; i++)
            {
                GameObject obj = Instantiate(bulletImapctPrefab);
                obj.SetActive(false);
                bulletImapctPooledObjects.Add(obj);
            }
        }



        public GameObject GetBulletImapctPool()
        {
            for (int i = 0; i < bulletImapctPooledObjects.Count; i++)
            {
                if (!bulletImapctPooledObjects[i].activeInHierarchy)
                {
                    return bulletImapctPooledObjects[i];
                }
            }

            return null;
        }

    }
}
