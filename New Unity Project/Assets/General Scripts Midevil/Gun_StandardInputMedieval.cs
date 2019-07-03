using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3
{

	public class Gun_StandardInputMedieval : MonoBehaviour {

		public Gun_Master gunMaster;
		private float nextAttack;
		public string attackButtonName;
		public string reloadButtonName;
		public string burstFireButtonName;

		public GameObject curWepp;
		public GameObject ammoPle;

		void Start ()
		{
			SetInitialReferences ();

			if (curWepp != null) {
				ammoPle.SetActive (true);
			}
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();
			gunMaster.isGunLoaded = true; //So the player can attempt shooting right away.
		}

		public void AttemptAttack()
		{
			if (gunMaster.isGunLoaded) {
				
				//Debug.Log ("Shooting");
				gunMaster.CallEventPlayerInput ();

			} else {

				gunMaster.CallEventGunNotUsable ();
			}
		}
	}
}