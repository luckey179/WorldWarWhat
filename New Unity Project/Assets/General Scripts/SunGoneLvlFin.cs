using UnityEngine;
using System.Collections;

namespace S3

{

	public class SunGoneLvlFin : MonoBehaviour {

		public DayNightController currentTimeOfDay;
		public Animator endofthyme;
		public GameObject endeffectmoo;

		// Update is called once per frame

		void Update () {
		
			if (currentTimeOfDay.currentTimeOfDay >= 0.47f) {

				endofthyme.enabled = true;
				endeffectmoo.SetActive (true);

			}

		}
	}
}