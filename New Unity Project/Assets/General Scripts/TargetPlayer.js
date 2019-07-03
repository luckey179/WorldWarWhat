#pragma strict

public var isReverse = true;

function Update () {

	if (Camera.main) {

		var cameraTransform = Camera.main.gameObject.transform;
		transform.LookAt (cameraTransform);
		if (isReverse) transform.forward *= -1;
	}
}