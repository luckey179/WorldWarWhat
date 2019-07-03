using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

namespace S3

{

	public class DontDestPls2 : MonoBehaviour 
	{

		public static DontDestPls2 Instance;

		public GameObject medievaldaytex;

		void Awake ()
		{
			if (Instance == null) {
				DontDestroyOnLoad (gameObject);
				Instance = this;
			} else if (Instance != this) {
				Destroy (gameObject);
			}
		}
        /*
		void Update()
		{

			if (SceneManager.GetActiveScene ().name == "AlienWar") 
			{
				medievaldaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "BaseGame") 
			{
				medievaldaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "StartMenu") 
			{
				medievaldaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "Medevil") 
			{
				medievaldaytex.SetActive (true);
			}

			if (SceneManager.GetActiveScene ().name == "ZombieWar") 
			{
				medievaldaytex.SetActive (false);
			}


		}
		*/
	}
}