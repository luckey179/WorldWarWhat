using UnityEngine;
using System.Collections;

public class MedievalDayStay : MonoBehaviour {

	public static MedievalDayStay Instance;

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