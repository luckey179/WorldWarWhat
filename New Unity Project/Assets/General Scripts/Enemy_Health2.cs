using UnityEngine;
using UnityEngine.AI;
using System.Collections;

namespace S3

{

	public class Enemy_Health2 : MonoBehaviour {

		private Enemy_Master enemyMaster;
		public int enemyHealth = 100;
		public int dayValue = 10;
		public int killendvalue = 1;
		public AudioClip deathClip;
		public AudioClip moneyClip;
		public AudioSource moneySource;
		public AudioSource enemySource;
		public GameObject partsyscryst1;
		public Animator anim;
		public int dederAl = 1;
		private Killstreak kilstrek;
		public DayNightController currentTimeOfDay;
		GameObject textyes;

		void OnEnable()
		{
			SetInitialReferences ();
			enemyMaster.EventEnemyDeductHealth += DeductHealth;
		}

		void OnDisable()
		{
			enemyMaster.EventEnemyDeductHealth -= DeductHealth;
		}

		void SetInitialReferences()
		{
			textyes = GameObject.Find ("Textytime").gameObject;
			enemyMaster = GetComponent<Enemy_Master> ();
			kilstrek = textyes.GetComponent<Killstreak> ();
		}

		void DeductHealth(int healthChange)
		{
			enemyHealth -= healthChange;
			if (enemyHealth <= 0) {
				enemyHealth = 0;
				GetComponent <NavMeshAgent> ().enabled = false;
				GetComponent <SphereCollider> ().enabled = false;
				DayManager.credits += dayValue;
				ShardsCollected.creditss += dayValue;
				EnemiesKilledEnd.killends += killendvalue;
				//enemyMaster.CallEventEnemyDie ();
				anim.SetTrigger ("Dead");
				RewardOrder.rewardCount -= dederAl;
				RewardOrder2.rewardCount -= dederAl;
				RewardOrder3.rewardCount -= dederAl;

				partsyscryst1.SetActive (true);

				Destroy (gameObject, Random.Range (5, 6));

				moneySource.clip = moneyClip;
				moneySource.Play ();
				enemySource.clip = deathClip;
				enemySource.Play ();

				kilstrek.strtKillsTime ();

				Killstreak.killstreaks += 1;

				this.enabled = false;
			}
		}
	}
}