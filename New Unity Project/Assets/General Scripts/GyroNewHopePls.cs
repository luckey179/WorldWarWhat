using UnityEngine;
using System.Collections;

public class GyroNewHopePls : MonoBehaviour {

	Quaternion origin=Quaternion.identity;


	void Start() {
		Input.gyro.enabled=true;
		origin=Input.gyro.attitude;
	}


	void Update() {
		// reset origin on touch or not yet set origin
		if(Input.touchCount > 0 || origin == Quaternion.identity)
			origin=Input.gyro.attitude;

		transform.localRotation=Quaternion.Inverse(origin)*Input.gyro.attitude;
	}
}