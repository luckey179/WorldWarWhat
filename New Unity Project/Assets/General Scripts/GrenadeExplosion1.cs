using UnityEngine;
using System.Collections;

namespace S3

{

	public class GrenadeExplosion1 : MonoBehaviour {

		private Collider[] struckColliders;
		public float explosionRange;
		public float explosionForce;
		private float distance;
		public int rawDamage;
		private int damageToApply;
		public LayerMask explosionLayers;
		private Transform myTransform;
		private RaycastHit hit;
		float timer;
		private Destructible_Master destructibleMaster;
		public GameObject explosionEffect;
		public float explosionVolume = 0.5f;
		public AudioClip explodingSound;
		private PlayerHealth playerHealth;
		GameObject player;

		void Update()
		{
			timer += Time.deltaTime;
		}

		void OnEnable()
		{
			SetInitialReferences ();
		}

		void SetInitialReferences()
		{
			myTransform = transform;
			damageToApply = 10;
			player = GameObject.Find ("Player").gameObject;
			playerHealth = player.GetComponent <PlayerHealth> ();
		}

		void SpawnExplosion()
		{
			if (explosionEffect != null) {
				Instantiate (explosionEffect, transform.position, Quaternion.identity);
			}
		}

		void PlayExplosionSound()
		{
			if (explodingSound != null) {
				AudioSource.PlayClipAtPoint (explodingSound, transform.position, explosionVolume);
			}
		}

		void OnCollisionEnter(Collision col)
		{
			//ExplosionSphere (col.contacts [0].point);

			playerHealth.TakeDamage (damageToApply);

			Destroy (gameObject);
		}
		/*
		void ExplosionSphere(Vector3 explosionPoint)
		{
			struckColliders = Physics.OverlapSphere (myTransform.position, explosionRange, explosionLayers);

			foreach (Collider col in struckColliders) 
			{
				distance = Vector3.Distance (myTransform.position, col.transform.position);
				damageToApply = 10;


				if (Physics.Linecast (myTransform.position, col.transform.position, out hit)) {
					if (hit.transform == col.transform || col.transform.GetComponent<PlayerHealth> () != null) {
						playerHealth.TakeDamage (damageToApply);
						SpawnExplosion ();
						PlayExplosionSound ();
					}
				}

				if (col.transform.GetComponent<Rigidbody> () != null) {
					col.GetComponent<Rigidbody> ().AddExplosionForce (explosionForce, myTransform.position, explosionRange, 10, ForceMode.Impulse);
				}
			}
		}
*/
	}
}