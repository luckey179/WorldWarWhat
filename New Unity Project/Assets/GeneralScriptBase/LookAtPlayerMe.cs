using UnityEngine;
using System.Collections;

public class LookAtPlayerMe : MonoBehaviour {

	public Transform target;

	// Update is called once per frame
	void Update () {

		if (target != null) {
			transform.LookAt (target);
		}
	}
}