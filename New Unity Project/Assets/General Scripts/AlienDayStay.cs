using UnityEngine;
using System.Collections;

public class AlienDayStay : MonoBehaviour {

	public static AlienDayStay Instance;

	void Awake ()
	{
		if (Instance == null) {
			DontDestroyOnLoad (gameObject);
			Instance = this;
		} else if (Instance != this) {
			Destroy (gameObject);
		}
	}
}