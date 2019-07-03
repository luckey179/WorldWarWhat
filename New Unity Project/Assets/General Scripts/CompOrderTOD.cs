using UnityEngine;
using System.Collections;

namespace S3

{

	public class CompOrderTOD : MonoBehaviour {

		public GameObject actonemis;
		public GameObject acttwomis;
		public GameObject actthrmis;
		public GameObject actonemis2;
		public GameObject acttwomis2;
		public GameObject actthrmis2;
		public GameObject actonemis3;
		public GameObject acttwomis3;
		public GameObject actthrmis3;
		public GameObject actonemis4;
		public GameObject acttwomis4;
		public GameObject actthrmis4;
		public GameObject actonemis5;
		public GameObject acttwomis5;
		public GameObject actthrmis5;
		public DayNightController currentTimeOfDay;

		// Update is called once per frame

		void Update () {
			todtime ();
		}

		void todtime ()
		{

			if (currentTimeOfDay.currentTimeOfDay >= 0.07f) {
				actonemis.SetActive (true);
				actonemis2.SetActive (true);
				actonemis3.SetActive (true);
				actonemis4.SetActive (true);
				actonemis5.SetActive (true);
			}
			if (currentTimeOfDay.currentTimeOfDay >= 0.17f) {
				actonemis.SetActive (false);
				actonemis2.SetActive (false);
				actonemis3.SetActive (false);
				actonemis4.SetActive (false);
				actonemis5.SetActive (false);
			}
			if (currentTimeOfDay.currentTimeOfDay >= 0.22f) {
				acttwomis.SetActive (true);
				acttwomis2.SetActive (true);
				acttwomis3.SetActive (true);
				acttwomis4.SetActive (true);
				acttwomis5.SetActive (true);
			}
			if (currentTimeOfDay.currentTimeOfDay >= 0.32f) {
				acttwomis.SetActive (false);
				acttwomis2.SetActive (false);
				acttwomis3.SetActive (false);
				acttwomis4.SetActive (false);
				acttwomis5.SetActive (false);
			}
			if (currentTimeOfDay.currentTimeOfDay >= 0.37f) {
				actthrmis.SetActive (true);
				actthrmis2.SetActive (true);
				actthrmis3.SetActive (true);
				actthrmis4.SetActive (true);
				actthrmis5.SetActive (true);
			}
			if (currentTimeOfDay.currentTimeOfDay >= 0.47f) {
				actthrmis.SetActive (false);
				actthrmis2.SetActive (false);
				actthrmis3.SetActive (false);
				actthrmis4.SetActive (false);
				actthrmis5.SetActive (false);
			}
		}
	}
}