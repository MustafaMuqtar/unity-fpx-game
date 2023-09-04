using UnityEngine;

namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class WeaponHolder : MonoBehaviour
    {
        [SerializeField] private GameObject[] canvas;

        public void WeapoonSetActive()
        {
            foreach (var item in canvas)
            {


                if (item.activeInHierarchy)
                {

                    item.SetActive(false);


                }

                else if (!item.activeInHierarchy)
                {

                    item.SetActive(true);


                }
            }

        }

    }
}