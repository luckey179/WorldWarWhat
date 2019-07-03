using UnityEngine;
using System.Collections;

namespace S3
{

	public class CompAttack : MonoBehaviour
	{
		public float timeBetweenAttacks = 0.5f;     // The time in seconds between each attack.
		public int attackDamage = 10;               // The amount of health taken away per attack.

		Animator anim;                              // Reference to the animator component.
		GameObject enemee;                          // Reference to the player GameObject.
		public Enemy_Health playerHealth;                  // Reference to the player's health.
		Enemy_Health enemyHealth;                    // Reference to this enemy's health.
		public int currentHealth;
		bool playerInRange;                         // Whether player is within the trigger collider and can be attacked.
		float timer;                                // Timer for counting up to the next attack.
		private Gun_Master gunMaster;
		public int damage = 10;


		void Awake ()
		{
			// Setting up the references.
			enemee = GameObject.FindGameObjectWithTag ("Enemy");
			playerHealth = enemee.GetComponent <Enemy_Health> ();
			enemyHealth = GetComponent<Enemy_Health>();
			anim = GetComponent <Animator> ();

		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();
		}


		void OnTriggerEnter (Collider other)
		{
			// If the entering collider is the player...
			if(other.gameObject == enemee)
			{
				// ... the player is in range.
				playerInRange = true;
			}
		}


		void OnTriggerExit (Collider other)
		{
			// If the exiting collider is the player...
			if(other.gameObject == enemee)
			{
				// ... the player is no longer in range.
				playerInRange = false;
			}
		}


		void Update ()
		{
			// Add the time since Update was last called to the timer.
			timer += Time.deltaTime;

			// If the timer exceeds the time between attacks, the player is in range and this enemy is alive...
			if (timer >= timeBetweenAttacks && playerInRange) {

				{
					anim.SetTrigger ("Attack");
					GetComponent<Enemy_TakeDamage> ().ProcessDamage (damage);
				}
			}

			// If the player has zero or less health...
			if (playerHealth.enemyHealth <= 0) {
				// ... tell the animator the player is dead.
				anim.SetTrigger ("PlayerDead");
				anim.enabled = false;
			}
		}
	}
}