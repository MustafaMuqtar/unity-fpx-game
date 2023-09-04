using UnityEngine;


namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class ShowAndHideCanvas : MonoBehaviour
    {
        [SerializeField] GameObject[] hideCanvas;
        [SerializeField] GameObject[] showCanvas;


        public void ShowCanvas()
        {
            foreach (var item in showCanvas)
            {
                item.gameObject.SetActive(true);

            }

        }

        public void HideCanvas()
        {
            foreach (var item in hideCanvas)
            {
                item.gameObject.SetActive(false);

            }

        }
    }
}
