using UnityEngine;
using System.Collections;

namespace S3
{
	public class Gun_Sounds2 : MonoBehaviour {

		public Gun_Master gunMaster;
		private Transform myTransform;
		public float reloadVolume = 0.5f;
		public AudioClip reloadSound;
		public bool isSoundPressed = false;
		public bool isReleasePressed = false;
		AudioSource audioo;

		void Awake()
		{
			audioo = GetComponent <AudioSource> ();
		}

		void OnEnable()
		{
			SetInitialReferences ();
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();
			myTransform = transform;
		}

		public void onPointerDownSoundButton()
		{
			isSoundPressed = true;
			audioo.enabled = true;
		}

		public void onPointerUpSoundButton ()
		{
			isSoundPressed = false;
			audioo.enabled = false;
		}

		public void PlayReloadSound()
		{
			if (reloadSound != null) {
				AudioSource.PlayClipAtPoint (reloadSound, myTransform.position, reloadVolume);
			}
		}
	}
}