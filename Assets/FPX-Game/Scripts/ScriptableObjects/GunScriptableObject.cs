using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;

namespace Assets.FPX_Game.Scripts.ScriptableObjects
{
    [CreateAssetMenu(fileName = "GunScriptableObject", menuName = "ScriptableObject/Gun")]
   public class GunScriptableObject : ScriptableObject

    {
        public float damage;
        public float fireRate;
        public float hitRange;
        public int currentAmo;
        public int maxMag;
        public string weaponName;
        public Sprite image;
    }
}
 