using UnityEngine;
using System.Collections;

namespace S3

{

	public class SuperHit : MonoBehaviour {

		private Collider[] struckColliders;
		public int rawDamage;
		public float explosionRange;
		public float explosionForce;
		private int damageToApply;
		public LayerMask explosionLayers;
		private Transform myTransform;
		private RaycastHit hit;
		private float distance;
		private Destructible_Master2 destructibleMaster2;

		void OnEnable()
		{
			SetInitialReferences ();
		}

		void SetInitialReferences()
		{
			myTransform = transform;
		}

		void OnCollisionEnter2(Collision col)
		{
			ExplosionSphere2 (col.contacts [0].point);
		}

		void ExplosionSphere2(Vector3 explosionPoint)
		{
			struckColliders = Physics.OverlapSphere (myTransform.position, explosionLayers);

			foreach (Collider col in struckColliders) 
			{
				distance = Vector3.Distance (myTransform.position, col.transform.position);
				damageToApply = (int)Mathf.Abs ((1 - (distance / explosionRange)) * rawDamage);


				if (Physics.Linecast (myTransform.position, col.transform.position, out hit)) {
					if (hit.transform == col.transform || col.transform.GetComponent<Enemy_TakeDamage> () != null) {
						col.transform.SendMessage ("ProcessDamage", damageToApply, SendMessageOptions.DontRequireReceiver);
					}
				}

				if (col.transform.GetComponent<Rigidbody> () != null) {
					col.GetComponent<Rigidbody> ().AddExplosionForce (explosionForce, myTransform.position, explosionRange, 10, ForceMode.Impulse);
				}
			}
		}
	}
}