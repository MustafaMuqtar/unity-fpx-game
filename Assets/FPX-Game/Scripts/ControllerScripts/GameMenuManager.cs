using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.InputSystem;
using UnityEditor;


namespace Assets.FPX_Game.Scripts.ControllerScripts
{
    public class GameMenuManager : MonoBehaviour
    {


        [SerializeField] Transform head;
        [SerializeField] GameObject menu;
        [SerializeField] InputActionProperty showButton;
        [SerializeField] private GameObject _camera;

        void Update()
        {
            transform.rotation = Quaternion.LookRotation(transform.position - _camera.transform.position);


            if (showButton.action.WasPressedThisFrame())
            {

                if (menu.activeInHierarchy)
                {

                    menu.SetActive(false);
                }

                else if (!menu.activeInHierarchy)
                {
                    menu.SetActive(true);
                }

            }

        }

        public void Exit()
        {
            //EditorApplication.isPlaying = false;
            Application.Quit();
        }

        public void Restart()
        {
            StartCoroutine(LoadYourAsyncScene());
        }


        public void ResumeGame()
        {
            Time.timeScale = 1;
        }
        public void PauseGame()
        {
            Time.timeScale = 0;
        }

        public void LoadScene(string name)
        {
            SceneManager.LoadScene(name);
        }

        IEnumerator LoadYourAsyncScene()
        {

            AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Lobby");

            while (!asyncLoad.isDone)
            {
                yield return null;
            }
        }
    }
}


