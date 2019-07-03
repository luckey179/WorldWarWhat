using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace S3

{

	public class ResetHorizon : MonoBehaviour {

		public bool isResetPressed = false;
		public Quaternion originalRotationValue;
		float rotationResetSpeed = 1.0f;

		void Start()
		{
			originalRotationValue = transform.rotation;
		}

		public void OnResetDown()
		{
			isResetPressed = true;
		}

		public void OnResetUp()
		{
			isResetPressed = false;
		}
		
		// Update is called once per frame
		void Update ()
		{
			HorizonReset ();

		}

		public void HorizonReset()
		{
			if (isResetPressed) {

				gameObject.transform.rotation = Quaternion.Euler (0, transform.eulerAngles.y, transform.eulerAngles.z);
			}
		}
	}
}