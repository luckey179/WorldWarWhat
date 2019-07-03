using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

namespace S3
{

	public class Gun_AmmoMedieval : MonoBehaviour {

		private Gun_Master gunMaster;
		private Player_Master playerMaster;
		private Player_AmmoBox ammoBox;
		public Animator myAnimator;
		public bool isReloadPressed = false;
		public bool isReloadReleasePressed = false;
		private Transform myTransform;
		public GameObject stahp;
		public int clipSize;
		public int currentAmmo;
		public string ammoName;
		public float reloadTime;
		public float reloadVolume = 0.5f;
		public AudioClip reloadSound;
		AudioSource audio;
		public Slider manaSlidd;


		void OnEnable()
		{
			SetInitialReferences ();
			StartingSanityCheck ();
			CheckAmmoStatus ();
			ammoBox = GameObject.Find ("SavePlayerPref").GetComponent <Player_AmmoBox>();
			audio = GetComponent<AudioSource> ();

			gunMaster.EventPlayerInput += DeductAmmo;
			gunMaster.EventPlayerInput += CheckAmmoStatus;
			gunMaster.EventRequestReload += TryToReload;
			gunMaster.EventGunNotUsable += TryToReload;
			gunMaster.EventRequestGunReset += ResetGunReloading;

			if (playerMaster != null) {
				playerMaster.EventAmmoChanged += UIAmmoUpdateRequest;
			}

			if (ammoBox != null) {
				StartCoroutine (UpdateAmmoUIWhenEnabling ());
			}
		}

		void OnDisable()
		{
			gunMaster.EventPlayerInput -= DeductAmmo;
			gunMaster.EventPlayerInput -= CheckAmmoStatus;
			gunMaster.EventRequestReload -= TryToReload;
			gunMaster.EventGunNotUsable -= TryToReload;
			gunMaster.EventRequestGunReset -= ResetGunReloading;

			if (playerMaster != null) {
				playerMaster.EventAmmoChanged -= UIAmmoUpdateRequest;
			}
		}

		void SetInitialReferences()
		{
			gunMaster = GetComponent<Gun_Master> ();

			if (GetComponent<Animator> () != null) {
				myAnimator = GetComponent<Animator> ();
			}

			if (GameManager_References._player != null) {
				playerMaster = GameManager_References._player.GetComponent<Player_Master> ();
				ammoBox = GameManager_References._player.GetComponent <Player_AmmoBox> ();
			}
		}

		void DeductAmmo()
		{
			currentAmmo--;
			UIAmmoUpdateRequest ();
		}

		public void onPointerDownReloadButton()
		{
			isReloadPressed = true;
		}

		public void onPointerUpReloadButton()
		{
			isReloadPressed = false;
		}

		public void TryToReload()
		{
			if(isReloadPressed)
			{
				for (int i = 0; i < ammoBox.typesOfAmmunition.Count; i++) {
					if (ammoBox.typesOfAmmunition [i].ammoName == ammoName) {
						if (ammoBox.typesOfAmmunition [i].ammoCurrentCarried > 0 &&
						   currentAmmo != clipSize &&
						   !gunMaster.isReloading) {
							gunMaster.isReloading = true;
							gunMaster.isGunLoaded = false;

							if (myAnimator != null) {
								myAnimator.SetTrigger ("Reload");
								audio.PlayOneShot (reloadSound, reloadVolume);
								OnReloadComplete ();

							} else {
								StartCoroutine (ReloadWithoutAnimation ());
							}
						}

						break;
					}
				}
			}
		}

		void CheckAmmoStatus()
		{
			if (currentAmmo <= 0) {
				currentAmmo = 0;
				gunMaster.isGunLoaded = false;
				stahp.SetActive (true);
			} else if (currentAmmo > 0) {
				gunMaster.isGunLoaded = true;
				stahp.SetActive (false);
			}
		}

		void StartingSanityCheck()
		{
			if (currentAmmo > clipSize) {
				currentAmmo = clipSize;
			}
		}

		public void UIAmmoUpdateRequest()
		{
			for (int i = 0; i < ammoBox.typesOfAmmunition.Count; i++) {
				if (ammoBox.typesOfAmmunition [i].ammoName == ammoName) {
					gunMaster.CallEventAmmoChanged (currentAmmo, ammoBox.typesOfAmmunition [i].ammoCurrentCarried);
					manaSlidd.value = currentAmmo;
					break;
				}
			}
		}

		void ResetGunReloading()
		{
			gunMaster.isReloading = false;
			CheckAmmoStatus ();
			UIAmmoUpdateRequest ();
		}

		public void OnReloadComplete()
		{
			for (int i = 0; i < ammoBox.typesOfAmmunition.Count; i++) {
				if (ammoBox.typesOfAmmunition [i].ammoName == ammoName) {
					int ammoTopUp = clipSize - currentAmmo;

					if (ammoBox.typesOfAmmunition [i].ammoCurrentCarried >= ammoTopUp) {
						currentAmmo += ammoTopUp;
						ammoBox.typesOfAmmunition [i].ammoCurrentCarried -= ammoTopUp;
					}

					else if (ammoBox.typesOfAmmunition [i].ammoCurrentCarried < ammoTopUp &&
					    ammoBox.typesOfAmmunition [i].ammoCurrentCarried != 0) {
						currentAmmo += ammoBox.typesOfAmmunition [i].ammoCurrentCarried;
						ammoBox.typesOfAmmunition [i].ammoCurrentCarried = 0;
					}

					break;
				}
			}

			ResetGunReloading ();
		}

		IEnumerator ReloadWithoutAnimation()
		{
			yield return new WaitForSeconds (reloadTime);
			OnReloadComplete ();
		}

		IEnumerator UpdateAmmoUIWhenEnabling()
		{
			yield return new WaitForSeconds (0.05f);
			UIAmmoUpdateRequest ();
		}
	}
}