using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3

{

	public class RewardOrder3 : MonoBehaviour {

		public Text text;
		public GameObject compmis;
		public GameObject compmis2;
		public GameObject compmis3;
		public GameObject animcompl;
		public GameObject wowSound;
		public int taskendvalue = 1;
		public Image compim;
		private Enemy_Master enemyMaster;

		public int addCred = 200;

		public static int rewardCount = 9;

		// Update is called once per frame

		void Awake ()
		{
			text.text = "9";
			rewardCount = 9;
		}

		void Update () {

			text.text = "" + rewardCount;

			if (rewardCount <= 0) 
			{
				DayManager.credits += addCred;
				compmis3.SetActive (false);
				compmis.SetActive (false);
				compmis2.SetActive (false);
				animcompl.SetActive (true);
				wowSound.GetComponent<AudioSource> ().enabled = true;
				TaskComplete.taskcompend += taskendvalue;
				compim.enabled = false;
			}
		}
	}
}