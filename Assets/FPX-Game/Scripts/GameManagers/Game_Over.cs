using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


namespace Assets.FPX_Game.Scripts.GameManagers
{
    public class Game_Over : MonoBehaviour
    {
        public void Exit()
        {
            //EditorApplication.isPlaying = false;
            Application.Quit();
        }



        public void LoadScene(string name)
        {
            SceneManager.LoadScene(name);
        }

        public void StartPractice()
        {
            StartMissionScene3.hideHand = true;
            AgentBaseScene1.practiceScenStart = true;
        }

        public void StartMission()
        {
            AgentBaseScene1.practiceScenStart = false;
        }
    }
}
