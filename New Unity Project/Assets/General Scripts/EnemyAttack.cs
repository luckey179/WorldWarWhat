﻿using UnityEngine;
using System.Collections;

namespace S3
{

	public class EnemyAttack : MonoBehaviour
	{
		public float timeBetweenAttacks = 0.5f;     // The time in seconds between each attack.
		public int attackDamage = 10;               // The amount of health taken away per attack.

		Animator anim;                              // Reference to the animator component.
		private PlayerHealth playerHealth;                  // Reference to the player's health.
		bool playerInRange;                         // Whether player is within the trigger collider and can be attacked.
		float timer;                                // Timer for counting up to the next attack.

		GameObject player;

		void Awake()
		{
			player = GameObject.Find ("Player").gameObject;
			anim = GetComponent <Animator> ();
			playerHealth = player.GetComponent <PlayerHealth> ();
		}


		void OnTriggerEnter (Collider other)
		{
			// If the entering collider is the player...
			if(other.gameObject == player)
			{
				// ... the player is in range.
				playerInRange = true;
			}
		}


		void OnTriggerExit (Collider other)
		{
			// If the exiting collider is the player...
			if(other.gameObject == player)
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
					Attack ();
				}
			}

			// If the player has zero or less health...
			if(playerHealth.currentHealth <= 0)
			{
				// ... tell the animator the player is dead.
				anim.SetTrigger ("PlayerDead");
				anim.enabled = false;
			}
		}


		void Attack ()
		{
			// Reset the timer.
			timer = 0f;

			// If the player has health to lose...
			if(playerHealth.currentHealth > 0)
			{
				
				// ... damage the player.
				playerHealth.TakeDamage (attackDamage);
			}
		}
	}
}