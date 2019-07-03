using UnityEngine;
using System.Collections;

namespace S3

{

	public class DayNightController : MonoBehaviour {

		public Light sun;
		public float secondsInFullDay = 120f;
		[Range(0,1)]
		public float currentTimeOfDay = 0;
		[HideInInspector]
		public float timeMultiplier = 1f;
		public GameObject waterBi;
		public Animator playerRise;
		public Animator playerEffectsRise;
		private int healAmt = 1000;

		private bool issPaused;

		float sunInitialIntensity;

		void Start() {
			sunInitialIntensity = sun.intensity;
		}

		void Update() {
			UpdateSun ();

			currentTimeOfDay += (Time.deltaTime / secondsInFullDay) * timeMultiplier;

			if (currentTimeOfDay >= 0.47) {
				currentTimeOfDay = 0.47f;
				playerRise.SetTrigger ("PlayerRiseEnd");
				playerEffectsRise.SetTrigger ("PlayerEffectEnd");
				GameObject.Find ("Player").GetComponent <PlayerHealth> ().IncreaseHealth (healAmt);
				//TogglePause ();
			}

			if (currentTimeOfDay >= 0.05 && currentTimeOfDay != 0.47) {

				waterBi.SetActive (false);
			} else {
				waterBi.SetActive (true);
			}
		}

		void UpdateSun() {
			sun.transform.localRotation = Quaternion.Euler((currentTimeOfDay * 360f) + 2, 0, 0);

			float intensityMultiplier = 1;
			if (currentTimeOfDay <= 0.00f || currentTimeOfDay >= 0.75f) {
				intensityMultiplier = 0;
			}
			else if (currentTimeOfDay <= 0.02f) {
				intensityMultiplier = Mathf.Clamp01((currentTimeOfDay - 0.00f) * (1 / 0.02f));
			}
			else if (currentTimeOfDay >= 0.47f) {
				intensityMultiplier = Mathf.Clamp01(1 - ((currentTimeOfDay - 0.47f) * (1 / 0.02f)));
			}

			sun.intensity = sunInitialIntensity * intensityMultiplier;
		}


		void TogglePause ()
		{
			if (issPaused) {
				Time.timeScale = 1;
				issPaused = false;
			} else {
				Time.timeScale = 0.0001f;
				//issPaused = true;
			}
		}
	}
}