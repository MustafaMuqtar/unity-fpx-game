using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Assets.FPX_Game.Scripts.GameManagers
{
    public class GameManager : MonoBehaviour
    {
        public static GameManager gameManagersInstance;


        private void Awake()
        {
            if (gameManagersInstance == null)
            {
                gameManagersInstance = this;
            }
        }


        public GameObject player;
          public SpawnEnemy SpawnEnemyScript;
    }
}
