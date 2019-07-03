using UnityEngine;
using System.Collections;

namespace S3
{

	public class RageSkillMedieval : MonoBehaviour {

		public Animator animat;
		public GameObject gam;
		public GameObject obj;
		public GrenadeExplosion3 rifle2;
		public GrenadeExplosion2 rifle;
		public GrenadeExplosion3 beam2;
		public GrenadeExplosion2 beam;
		public GrenadeExplosion3 ion2;
		public GrenadeExplosion2 ion;
		public MeleeStrike2 blade2;
		public Melee_Strike blade;
		public MeleeStrike2 axe3;
		public Melee_Strike axe;
		public GrenadeExplosion3 blaster2;
		public GrenadeExplosion2 blaster;
		public GrenadeExplosion3 grenade2;
		public GrenadeExplosion2 grenade;
		public MeleeStrike2 snipe2;
		public Melee_Strike snipe;

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