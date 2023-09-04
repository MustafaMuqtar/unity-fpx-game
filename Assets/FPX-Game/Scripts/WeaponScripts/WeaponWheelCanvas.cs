using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;


namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class WeaponWheelCanvas : MonoBehaviour
    {
        [SerializeField] private InputActionProperty showButton;
        [SerializeField] private GameObject canvas;
        [SerializeField] private GameObject _camera;
        [SerializeField] private GameObject[] images;
        [SerializeField] private Button[] button;


        private void Start()
        {

            ButtonDisable();
            HideImage();
        }

        // Start is called before the first frame update
        private void Update()
        {

            transform.rotation = Quaternion.LookRotation(transform.position - _camera.transform.position);

            if (showButton.action.WasPressedThisFrame())
            {


                if (canvas.activeInHierarchy)
                {

                    canvas.SetActive(false);


                }

                else if (!canvas.activeInHierarchy)
                {

                    canvas.SetActive(true);

                }

            }


        }


        void ButtonDisable()
        {
            foreach (var item in button)
            {
                item.interactable = false;
            }
        }


        void HideImage()
        {
            foreach (var item in images)
            {
                item.gameObject.SetActive(false);

            }

        }
    }
}
