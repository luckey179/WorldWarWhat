using UnityEngine;
using System.Collections;

namespace S3

{

	public class BowCall : MonoBehaviour {

		public Animator myAnimatorbow;
		public bool isBowPressed = false;
		public bool isBowReleasePressed = false;
		public bool isBow1Pressed = false;
		public bool isBow1ReleasePressed = false;
		public bool isBow2Pressed = false;
		public bool isBow2ReleasePressed = false;
		public bool isBow3Pressed = false;
		public bool isBow3ReleasePressed = false;

		void Update()
		{
			PlayBowAnimapls ();
		}

		void OnEnable()
		{
			SetInitialReferences ();
		}

		void SetInitialReferences()
		{
			if (GetComponent<Animator>() != null)
			{
				myAnimatorbow = GetComponent<Animator> ();
			}
		}

		public void onPointerDownScopeButton()
		{
			isBowPressed = true;
			isBowReleasePressed = false;
		}

		public void onPointerUpScopeButton ()
		{
			isBowPressed = false;
			isBowReleasePressed = true;
		}

		public void onPointerDown1ScopeButton()
		{
			isBow1Pressed = true;
			isBow1ReleasePressed = false;
		}

		public void onPointerUp1ScopeButton ()
		{
			isBow1Pressed = false;
			isBow1ReleasePressed = true;
		}

		public void onPointerDown2ScopeButton()
		{
			isBow2Pressed = true;
			isBow2ReleasePressed = false;
		}

		public void onPointerUp2ScopeButton ()
		{
			isBow2Pressed = false;
			isBow2ReleasePressed = true;
		}

		public void onPointerDown3ScopeButton()
		{
			isBow3Pressed = true;
			isBow3ReleasePressed = false;
		}

		public void onPointerUp3ScopeButton ()
		{
			isBow3Pressed = false;
			isBow3ReleasePressed = true;
		}

		void PlayBowAnimapls ()
		{
			if (myAnimatorbow != null) 
			{
				if (isBowPressed) {
					myAnimatorbow.ResetTrigger ("BowRelease");
					myAnimatorbow.Play ("PullBowBack");

				}

				if(isBowReleasePressed)
				{
					myAnimatorbow.SetTrigger ("BowRelease");
				}

				if (isBow1Pressed) {
					myAnimatorbow.ResetTrigger ("BowRelease");
					myAnimatorbow.Play ("PullBowBack 1");

				}

				if(isBow1ReleasePressed)
				{
					myAnimatorbow.SetTrigger ("BowRelease");
				}

				if (isBow2Pressed) {
					myAnimatorbow.ResetTrigger ("BowRelease");
					myAnimatorbow.Play ("PullBowBack 2");

				}

				if(isBow2ReleasePressed)
				{
					myAnimatorbow.SetTrigger ("BowRelease");
				}

				if (isBow3Pressed) {
					myAnimatorbow.ResetTrigger ("BowRelease");
					myAnimatorbow.Play ("PullBowBack 3");

				}

				if(isBow3ReleasePressed)
				{
					myAnimatorbow.SetTrigger ("BowRelease");
				}
			}
		}
	}
}