using UnityEngine;
using System.Collections;

namespace S3
{

	public class Gun_StandardInput : MonoBehaviour {

		private Gun_Master gunMaster;
		private float nextAttack;
		public float attackRate = 0.2f;
		private Transform myTransform;
		public bool isAutomatic;
		public bool hasBurstFire;
		private bool isBurstFireActive;
		public string attackButtonName;
		public string reloadButtonName;
		public string burstFireButtonName;
		public bool isFirePressed = false;
		public bool isReleasePressed = false;
		public bool isReloadPressed = false;
		public bool isReloadReleasePressed = false;
		LineRenderer gunLine;
		public Ray shootRay;
		float effectsDisplayTime = 0.2f;
		RaycastHit shootHit;
		public float timeBetweenAttacks = 0.4f;
		public float range = 500f;
		int shootableMask;
		float timer;


		void Awake ()
		{
			gunLine = GetComponent <LineRenderer> ();
			shootableMask = LayerMask.GetMask ("Shootable");
		}

		void Start ()
		{
			SetInitialReferences ();
		}

		void Update ()
		{
			CheckIfWeaponShouldAttack ();
			CheckForBurstFireToggle ();
			CheckForReloadRequest ();

			timer += Time.deltaTime;

			if(timer >= timeBetweenAttacks * effectsDisplayTime)
			{
				// ... disable the effects.
				DisableEffects ();
			}
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();
			myTransform = transform;
			gunMaster.isGunLoaded = true; //So the player can attempt shooting right away.
		}

		public void DisableEffects ()
		{
			// Disable the line renderer and the light.
			gunLine.enabled = false;
		}

		public void onPointerDownFireButton()
		{
			isFirePressed = true;
		}

		public void onPointerDownReloadButton()
		{
			isReloadPressed = true;
		}

		public void onPointerUpReloadButton ()
		{
			isReloadPressed = false;
		}

		public void onPointerUpFireButton ()
		{
			isFirePressed = false;
		}

		public void CheckIfWeaponShouldAttack()
		{
			if (isFirePressed)
			{
				if (Time.time > nextAttack && Time.timeScale > 0 &&
				    myTransform.root.CompareTag (GameManager_References._playerTag)) {
					if (isAutomatic && !isBurstFireActive) {
						AttemptAttack ();
					} else if (isAutomatic && isBurstFireActive) {
						if (isFirePressed) {
							StartCoroutine (RunBurstFire ());
						}
					} else if (!isAutomatic) {
						if (isFirePressed) {
							AttemptAttack ();
						}
					}
				}
			}
		}

		void AttemptAttack()
		{
			nextAttack = Time.time + attackRate;

			timer = 0f;

			if (gunMaster.isGunLoaded) {
				//Debug.Log ("Shooting");
				gunMaster.CallEventPlayerInput ();

				gunLine.enabled = true;
				gunLine.SetPosition (0, transform.position);

				shootRay.origin = transform.position;
				shootRay.direction = transform.parent.forward;

				if(Physics.Raycast (shootRay, out shootHit, range, shootableMask))
				{

					// Set the second position of the line renderer to the point the raycast hit.
					gunLine.SetPosition (1, shootHit.point);
				}
					
				// If the raycast didn't hit anything on the shootable layer...
				else
				{
					// ... set the second position of the line renderer to the fullest extent of the gun's range.
					gunLine.SetPosition (1, shootRay.origin + shootRay.direction * range);
				}

			} else {
				gunMaster.CallEventGunNotUsable ();
			}
		}

		void CheckForBurstFireToggle()
		{
			if (Input.GetButtonDown (burstFireButtonName) && Time.timeScale > 0 &&
			   myTransform.root.CompareTag (GameManager_References._playerTag)) 
			{
				//Debug.Log ("Burst Fire Toggled");
				isBurstFireActive = !isBurstFireActive;
				gunMaster.CallEventToggleBurstFire ();
			}
		}

		void CheckForReloadRequest()
		{
			if (isReloadPressed && Time.timeScale > 0 &&
				myTransform.root.CompareTag (GameManager_References._playerTag)) 
			{
				gunMaster.CallEventRequestReload ();
			}
		}

		IEnumerator RunBurstFire()
		{
			AttemptAttack ();
			yield return new WaitForSeconds (attackRate);
			AttemptAttack ();
			yield return new WaitForSeconds (attackRate);
			AttemptAttack ();
			yield return new WaitForSeconds (attackRate);
		}
	}
}