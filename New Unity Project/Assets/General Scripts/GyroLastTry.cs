using UnityEngine;
using System.Collections;

public class GyroLastTry : MonoBehaviour
{
	private float initialYAngle = 0f;
	private float appliedGyroYAngle = 0f;
	private float calibrationYAngle = 0f;
	private float sensitivity = 100f;

	void Start()
	{
		Application.targetFrameRate = 60;
		initialYAngle = transform.eulerAngles.y;
	}

	void Update()
	{
		ApplyGyroRotation();
		ApplyCalibration();
	}

	public void CalibrateYAngle()
	{
		calibrationYAngle = appliedGyroYAngle - initialYAngle; // Offsets the y angle in case it wasn't 0 at edit time.
	}

	void ApplyGyroRotation()
	{
		transform.rotation = Input.gyro.attitude;
		transform.Rotate( 0f, 0f, 180f, Space.Self ); // Swap "handedness" of quaternion from gyro.
		transform.Rotate( 90f, 180f, 0f, Space.World ); // Rotate to make sense as a camera pointing out the back of your device.
		appliedGyroYAngle = transform.eulerAngles.y; // Save the angle around y axis for use in calibration.
	}

	public void ApplyCalibration()
	{
		transform.Rotate( 0f, -calibrationYAngle, 0f, Space.World ); // Rotates y angle back however much it deviated when calibrationYAngle was saved.
	}
}