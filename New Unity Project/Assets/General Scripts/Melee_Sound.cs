using UnityEngine;
using System.Collections;

namespace S3

{

	public class Melee_Sound : MonoBehaviour {

		public Melee_Master meleeMaster;
		private Transform myTransform;
		public AudioClip swingSound;
		public AudioClip strikeSound;
		public float swingSoundVolume = 0.5f;
		public float strikeSoundVolume = 0.5f;

		// Use this for initialization
		void OnEnable () {
			SetInitialReferences ();
			meleeMaster.EventHit += PlayStrikeSound;
		}
		
		// Update is called once per frame
		void OnDisable () {
			meleeMaster.EventHit -= PlayStrikeSound;
		}

		void SetInitialReferences()
		{
			myTransform = transform;
		}

		public void PlaySwingSound()
		{
			if (swingSound != null) {
				AudioSource.PlayClipAtPoint (swingSound, myTransform.position, swingSoundVolume);
			}
		}

		void PlayStrikeSound(Collision dummyCol, Transform dummyTransform)
		{
			if (strikeSound != null) {
				AudioSource.PlayClipAtPoint (strikeSound, myTransform.position, strikeSoundVolume);
			}
		}
	}
}