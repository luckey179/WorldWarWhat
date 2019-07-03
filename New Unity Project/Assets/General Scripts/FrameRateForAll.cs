using UnityEngine;
using System.Collections;

public class FrameRateForAll : MonoBehaviour {

	// Use this for initialization
	void Awake()
	{
		Application.targetFrameRate = 30;
	}
}