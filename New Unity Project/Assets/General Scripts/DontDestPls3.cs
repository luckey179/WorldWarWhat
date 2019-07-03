using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

namespace S3

{

	public class DontDestPls3 : MonoBehaviour 
	{

		public static DontDestPls3 Instance;

		public GameObject zombiedaytex;

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
				zombiedaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "BaseGame") 
			{
				zombiedaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "StartMenu") 
			{
				zombiedaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "Medevil") 
			{
				zombiedaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "ZombieWar") 
			{
				zombiedaytex.SetActive (true);
			}


		}
		*/
	}
}