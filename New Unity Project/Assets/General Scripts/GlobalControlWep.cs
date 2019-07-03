using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

namespace S3

{

	public class GlobalControlWep : MonoBehaviour {

		public static GlobalControlWep Instance;
		public GameObject objtobeload;

		void Awake()
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

			if (SceneManager.GetActiveScene ().name == "ZombieWar") 
			{
				objtobeload.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "Medieval") 
			{
				objtobeload.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "AlienWar")
			{
				objtobeload.SetActive (true);
			}

			if (SceneManager.GetActiveScene ().name == "BaseGame") 
			{
				objtobeload.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "StartMenu") 
			{
				objtobeload.SetActive (false);
			}
		}
		*/
	}
}