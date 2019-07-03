using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3

{

	public class HordeDay : MonoBehaviour {

		public GameObject gam;
		public GameObject obj;
		public GameObject gamm;
		public GameObject objj;
		public GameObject furs;
		public GameObject gamerr;
		public GameObject bus;
		public GameObject toad1;
		public GameObject toad2;
		public GameObject toad3;
		public GameObject toad4;
		public GameObject toad5;

		public static int Day = 1;        // The player's score.


		public Text text;                      // Reference to the Text component.

		void Awake ()
		{
			// Set up the reference.
			text = GameObject.Find("AlienDayTime").GetComponent<Text>();
		}


		void Update ()
		{

			text.text = "Day " + Day;
			// Set the displayed text to be the word "Score" followed by the score value.

			if (Day >= 0) 
			{
				furs.SetActive (true);

				toad1.SetActive (true);
			}

			if (Day >= 3) 
			{
				gam.SetActive(true);
				furs.SetActive (false);

				toad2.SetActive (true);
				toad1.SetActive (false);
			}

			if (Day >= 5) 
			{
				obj.SetActive(true);
				gam.SetActive(false);
				furs.SetActive (false);

				toad3.SetActive (true);
				toad2.SetActive (false);
				toad1.SetActive (false);
			}

			if (Day >= 7) 
			{
				gamm.SetActive(true);
				obj.SetActive(false);
				gam.SetActive(false);
				furs.SetActive (false);

				toad4.SetActive (true);
				toad3.SetActive (false);
				toad2.SetActive (false);
				toad1.SetActive (false);
			}

			if (Day >= 9) 
			{
				objj.SetActive(true);
				gamm.SetActive(false);
				obj.SetActive(false);
				gam.SetActive(false);
				furs.SetActive (false);

				toad5.SetActive (true);
				toad4.SetActive (false);
				toad3.SetActive (false);
				toad2.SetActive (false);
				toad1.SetActive (false);
			}

			if (Day >= 10) 
			{
				gamerr.SetActive(true);
				objj.SetActive(false);
				gamm.SetActive(false);
				obj.SetActive(false);
				gam.SetActive(false);
				bus.SetActive (false);
				furs.SetActive (false);

				toad5.SetActive (false);
				toad4.SetActive (false);
				toad3.SetActive (false);
				toad2.SetActive (false);
				toad1.SetActive (false);

			}
		}
	}
}