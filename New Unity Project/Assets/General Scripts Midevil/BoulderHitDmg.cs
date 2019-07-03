using UnityEngine;
using System.Collections;

namespace S3
{

	public class BoulderHitDmg : MonoBehaviour {

		public PlayerHealth playerHealth;
		GameObject player;
		int attackDamage = 20;

		void Awake ()
		{
			// Setting up the references.
			player = GameObject.FindGameObjectWithTag ("Player");
			playerHealth = player.GetComponent <PlayerHealth> ();
		}

		void OnTriggerEnter(Collider other)
		{
			if(other.gameObject == player)
			{
				Attackbould ();
			}
		}
		void Attackbould ()
		{
			// If the player has health to lose...
			if(playerHealth.currentHealth > 0)
			{

				// ... damage the player.
				playerHealth.TakeDamage (attackDamage);
			}
		}
	}
}