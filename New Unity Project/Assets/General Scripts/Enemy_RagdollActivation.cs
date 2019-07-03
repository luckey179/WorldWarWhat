using UnityEngine;
using System.Collections;

namespace S3
{

	public class Enemy_RagdollActivation : MonoBehaviour {

		public Enemy_Master enemyMaster;
		GameObject enemy;
		private Collider myCollider;
		private Rigidbody myRigidbody;

		void Awake ()
		{
			// Setting up the references.
			enemyMaster = GetComponent <Enemy_Master> ();

		}


		void OnEnable()
		{
			SetInitialReferences ();
			enemyMaster.EventEnemyDie += ActivateRagdoll;
		}

		void OnDisable()
		{
			enemyMaster.EventEnemyDie -= ActivateRagdoll;
		}

		void SetInitialReferences()
		{
			enemyMaster = transform.root.GetComponent<Enemy_Master> ();

			if(GetComponent<Collider>() != null)
			{
				myCollider = GetComponent<Collider>();
			}

			if(GetComponent<Rigidbody>() != null)
			{
				myRigidbody = GetComponent<Rigidbody>();
			}
		
		}

		void ActivateRagdoll()
		{

			if (myRigidbody != null) {
				myRigidbody.isKinematic = false;
				myRigidbody.useGravity = true;
			}

			if (myCollider != null) 
			{
				myCollider.isTrigger = false;
				myCollider.enabled = true;

			}	
		}
	}
}