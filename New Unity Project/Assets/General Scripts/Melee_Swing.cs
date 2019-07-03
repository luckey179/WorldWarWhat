using UnityEngine;
using System.Collections;

namespace S3

{

	public class Melee_Swing : MonoBehaviour {

		private Melee_Master meleeMaster;
		public Collider myCollider;
		public Rigidbody myRigidbody;
		public Animator myAnimator;

		// Use this for initialization
		void OnEnable () 
		{
			SetInitialReferences ();
			meleeMaster.EventPlayerInput += MeleeAttackActions;
		}
		
		// Update is called once per frame
		void OnDisable () 
		{
			meleeMaster.EventPlayerInput -= MeleeAttackActions;
		}

		void SetInitialReferences()
		{
			meleeMaster = GetComponent<Melee_Master> ();
		}

		void MeleeAttackActions()
		{
			myCollider.enabled = true;
			myRigidbody.isKinematic = false;
		}

		void MeleeAttackComplete()
		{
			myCollider.enabled = false;
			myRigidbody.isKinematic = true;
			meleeMaster.isInUse = false;
		}
	}
}