using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;

namespace S3

{

	public class GlobalControl : MonoBehaviour {
		
		public static GlobalControl Instance;
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

			if (SceneManager.GetActiveScene ().name == "Medevil") 
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