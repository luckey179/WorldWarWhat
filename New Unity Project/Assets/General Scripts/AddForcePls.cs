using UnityEngine;
using System.Collections;

namespace S3

{

	public class AddForcePls : MonoBehaviour {

		public float thrust;
		public float thrust2;
		public Enemy_Master enemyMaster;
		public Rigidbody rb;

		void Awake ()
		{
			// Setting up the references.
			enemyMaster = GetComponent <Enemy_Master> ();
			rb = GetComponent<Rigidbody> ();
		}


		void OnEnable()
		{
			SetInitialReferences ();
			enemyMaster.EventEnemyDie += Pushrag;
		}

		void OnDisable()
		{
			enemyMaster.EventEnemyDie -= Pushrag;
		}

		void SetInitialReferences()
		{
			enemyMaster = transform.root.GetComponent<Enemy_Master> ();
		}
			

		void Pushrag()
		{
			rb.AddForce (transform.forward * thrust);
			rb.AddForce (transform.up * thrust2);
		}
	}
}