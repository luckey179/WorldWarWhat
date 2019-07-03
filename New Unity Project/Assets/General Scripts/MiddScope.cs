using UnityEngine;
using System.Collections;

namespace S3

{

	public class MiddScope : MonoBehaviour {

		private Gun_Master gunMaster;
		public Animator myAnimator;
		public bool isScopePressed = false;
		public bool isScopeReleasePressed = false;
		Animation anim;

		void OnEnable()
		{
			SetInitialReferences ();
		}

		void Update()
		{
			PlayScopeAnimation ();
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();

			if (GetComponent<Animator>() != null)
			{
				myAnimator = GetComponent<Animator> ();
			}
		}

		public void onPointerDownScopeButton()
		{
			isScopePressed = true;
			isScopeReleasePressed = false;
		}

		public void onPointerUpScopeButton ()
		{
			isScopePressed = false;
			isScopeReleasePressed = true;
		}

		void PlayScopeAnimation ()
		{
			if (myAnimator != null) 
			{
				if (isScopePressed) {
					myAnimator.ResetTrigger ("ScopeRelease");
					myAnimator.Play ("Midsight");

				}

				if(isScopeReleasePressed)
				{
					myAnimator.SetTrigger ("ScopeRelease");
				}
			}
		}
	}
}