using UnityEngine;
using Assets.FPX_Game.Scripts.ScriptableObjects;

namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class ScoketMag : MonoBehaviour
    {
        [SerializeField] private GunScriptableObject weaponScriptable;

        public void MagSocketSelect()
        {
            weaponScriptable.currentAmo = weaponScriptable.maxMag;

        }


        public void MagDeSocketSelect()
        {
            weaponScriptable.currentAmo = 0;
        }


    }
}






