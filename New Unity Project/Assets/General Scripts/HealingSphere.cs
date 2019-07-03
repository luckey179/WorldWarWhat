using UnityEngine;
using System.Collections;

namespace S3

{

	public class HealingSphere : MonoBehaviour {

		public int healAmt = 100;

		public void HealThyme ()
		{
			GameObject.Find ("Player").GetComponent <PlayerHealth> ().IncreaseHealth (healAmt);
		}

		/*void OnTriggerEnter (Collider other)
		{

			if(other.gameObject.tag == "Player")
			{
				other.GetComponent<PlayerHealth> ().IncreaseHealth (healAmt);
			}
		}*/
	}
}