using UnityEngine;
using System.Collections;

public class ZombieDayStay : MonoBehaviour {

	public static ZombieDayStay Instance;

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