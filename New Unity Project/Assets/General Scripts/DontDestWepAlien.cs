using UnityEngine;
using System.Collections;

public class DontDestWepAlien : MonoBehaviour {


	void Awake ()
	{
		DontDestroyOnLoad (this.gameObject);
		// Set up the reference.

	}
}