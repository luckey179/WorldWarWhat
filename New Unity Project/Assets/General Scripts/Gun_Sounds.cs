using UnityEngine;
using System.Collections;

namespace S3
{

	public class Gun_Sounds : MonoBehaviour {

		private Gun_Master gunMaster;
		private Transform myTransform;
		public float shootVolume = 0.4f;
		public AudioClip[] shootSound;


		void OnEnable()
		{
			SetInitialReferences ();
			gunMaster.EventPlayerInput += PlayShootSound;
		}

		void OnDisable()
		{
			gunMaster.EventPlayerInput -= PlayShootSound;
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();
			myTransform = transform;
		}

		public void PlayShootSound()
		{
			int index = Random.Range (0, shootSound.Length);
			AudioSource.PlayClipAtPoint (shootSound [index], myTransform.position, shootVolume);
		}
	}
}