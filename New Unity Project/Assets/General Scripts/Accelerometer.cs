using UnityEngine;
using System.Collections;

public class Accelerometer : MonoBehaviour {

	// Update is called once per frame
	void Update ()
	{

		transform.Translate (Input.acceleration.x, 0, -Input.acceleration.z);
	}
}