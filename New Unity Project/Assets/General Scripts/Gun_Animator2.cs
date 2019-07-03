using UnityEngine;
using System.Collections;

namespace S3

{

	public class Gun_Animator2 : MonoBehaviour 
	{
		private Gun_Master gunMaster;
		public Animator myAnimator;

		void OnEnable()
		{
			SetInitialReferences ();
			gunMaster.EventPlayerInput += PlayShootAnimation2;
		}

		void OnDisable()
		{
			gunMaster.EventPlayerInput -= PlayShootAnimation2;
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();

			if (GetComponent<Animator>() != null)
			{
				myAnimator = GetComponent<Animator> ();
			}
		}

		void PlayShootAnimation2 ()
		{
			if (myAnimator != null) 
			{
				myAnimator.SetTrigger ("Shoot2");
			}
		}
	}
}