using UnityEngine;
using System.Collections;

public class WepBuyStay : MonoBehaviour {

	public static WepBuyStay Instance;

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