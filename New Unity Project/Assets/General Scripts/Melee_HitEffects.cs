using UnityEngine;
using System.Collections;

namespace S3

{

	public class Melee_HitEffects : MonoBehaviour {

		private Melee_Master meleeMaster;
		public GameObject defaultHitEffect;
		public GameObject enemyHitEffect;

		// Use this for initialization
		void OnEnable () {
			SetInitialReferences ();
			meleeMaster.EventHit += SpawnHitEffect;
		}
		
		// Update is called once per frame
		void OnDisable () {
			meleeMaster.EventHit -= SpawnHitEffect;
		}

		void SetInitialReferences()
		{
			meleeMaster = GetComponent<Melee_Master> ();
		}

		void SpawnHitEffect(Collision hitCollision, Transform hitTransform)
		{
			Quaternion quatAngle = Quaternion.LookRotation (hitCollision.contacts [0].normal);

			if (hitTransform.GetComponent<Enemy_TakeDamage> () != null) {
				Instantiate (enemyHitEffect, hitCollision.contacts [0].point, quatAngle);
			} else {
				Instantiate (defaultHitEffect, hitCollision.contacts [0].point, quatAngle);
			}
		}
	}
}