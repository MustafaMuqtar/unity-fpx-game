using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Assets.FPX_Game.Scripts.ScriptableObjects
{
    [CreateAssetMenu(fileName = "TargetScritableObject", menuName = "ScriptableObject/Targets")]
    public class EnemyScriptableObject : ScriptableObject
    {
        public string Name;
        public string LevelText;

       
        public GameObject TargetPrefab;

        public int enemiesDesired;
        public int enemiesCurrentCount;
        public int countEnemy;
        public int countEnemy2;
        public float countEnemyAttacks;

        public float MaxValueX;
        public float MaxValueY;
        public float MinValueX;
        public float MinValueY;
        public float YValue;
        public float spawndelay;
        public float damage;
        public bool isCompleted;
        public bool isReset;

    }
}