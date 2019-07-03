using UnityEngine;
using System.Collections;

namespace S3

{

	public class MeleeStrike2 : MonoBehaviour {

		public Melee_Master meleeMaster;
		private float nextSwingTime;
		public int damage = 25;

		void Start()
		{

		}

		// Update is called once per frame
		void OnCollisionEnter (Collision collision) 
		{
			if (collision.gameObject != GameManager_References._player &&
				Time.time > nextSwingTime) {
				nextSwingTime = Time.time + meleeMaster.swingRate;
				collision.transform.SendMessage ("ProcessDamage", damage, SendMessageOptions.DontRequireReceiver);
				meleeMaster.CallEventHit (collision, collision.transform);
			}
		}
	}
}