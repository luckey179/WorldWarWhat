using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

namespace S3
{
	public class GameManager_RestartLevel : MonoBehaviour 
	{
		private GameManager_Master gameManagerMaster;

		void OnEnable()
		{
			SetInitialReferences ();
            //gameManagerMaster.RestartLevelEvent += RestartLevel;
		}

        void GameManagerMaster_RestartLevelEvent()
        {
        }


		void OnDisable()
		{
			//gameManagerMaster.RestartLevelEvent -= RestartLevel;
		}

		void SetInitialReferences()
		{
			gameManagerMaster = GetComponent<GameManager_Master> ();
		}
        /*
		void RestartLevel()
		{
			SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
		}
		*/
	}

}