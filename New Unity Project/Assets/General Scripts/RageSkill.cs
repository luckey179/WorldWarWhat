using UnityEngine;
using System.Collections;

namespace S3
{

	public class RageSkill : MonoBehaviour {

		public Animator animat;
		public GameObject gam;
		public GameObject obj;
		public GunApplyDamage2 rifle2;
		public Gun_ApplyDamage rifle;
		public GunApplyDamage2 beam2;
		public Gun_ApplyDamage beam;
		public GunApplyDamage2 ion2;
		public Gun_ApplyDamage ion;
		public MeleeStrike2 blade2;
		public Melee_Strike blade;
		public MeleeStrike2 axe3;
		public Melee_Strike axe;
		public GunApplyDamage2 blaster2;
		public Gun_ApplyDamage blaster;
		public GunApplyDamage2 grenade2;
		public Gun_ApplyDamage grenade;
		public GunApplyDamage2 snipe2;
		public Gun_ApplyDamage snipe;
		public GunApplyDamage2 pistol2;
		public Gun_ApplyDamage pistol;

		void OnEnable () {

			StartCoroutine(Rage());

		}

		public IEnumerator Rage()
		{

			yield return new WaitForSeconds (20);
			animat.enabled = false;
			gam.SetActive (false);
			obj.SetActive (false);
			rifle.enabled = true;
			rifle2.enabled = false;
			ion.enabled = true;
			ion2.enabled = false;
			pistol.enabled = true;
			pistol2.enabled = false;
			snipe.enabled = true;
			snipe2.enabled = false;
			blade.enabled = true;
			blade2.enabled = false;
			axe.enabled = true;
			axe3.enabled = false;
			beam.enabled = true;
			beam2.enabled = false;
			grenade.enabled = true;
			grenade2.enabled = false;
			blaster.enabled = true;
			blaster2.enabled = false;
			enabled = false;
		}
	}
}