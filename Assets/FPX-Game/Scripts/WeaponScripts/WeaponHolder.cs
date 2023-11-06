using UnityEngine;
using UnityEngine.InputSystem;

namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class WeaponHolder : MonoBehaviour
    {
        [SerializeField] private GameObject[] canvas;
        [SerializeField] private GameObject[] hideCanvas;
        [SerializeField] private InputActionProperty canvasShowButton;
        [SerializeField] private Transform mag, gun;



        public void WeapoonSetActive()
        {
            foreach (var item in canvas)
            {


                if (item.activeInHierarchy && !canvasShowButton.action.WasPressedThisFrame())
                {

                    item.SetActive(false);

                }

                else if (!item.activeInHierarchy && !canvasShowButton.action.WasPressedThisFrame())
                {

                    item.SetActive(true);


                }
            }

            foreach (var items in hideCanvas)
            {

                if ( items.transform.IsChildOf(gun) || items.transform.IsChildOf(mag))
                {
                    items.SetActive(false);

                }

         

            }

        }

    }
}