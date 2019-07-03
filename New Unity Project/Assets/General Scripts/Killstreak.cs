using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3

{

	public class Killstreak : MonoBehaviour 
	{

		public static int killstreaks;
		Text text;
		public Image streakyes;
		public Transform textoffpls;
		public Transform textoffplsstil;
		public GameObject soundyaco;
		//public Animation animtrigkill;


		void Awake ()
		{

			text = GetComponent <Text> ();
			//animtrigkill = GetComponent<Animation>();
		}

		// Update is called once per frame
		void Update ()
		{

			text.text = "" + killstreaks;

			if (killstreaks >= 3) {
				streakyes.enabled = true;
				textoffplsstil.localScale = new Vector3(1, 1, 1);
				textoffpls.localScale = new Vector3(1, 1, 1);
				soundyaco.SetActive (true);
				//animtrigkill.Play ("KillStreakAnim");

			}

			if (killstreaks <= 2) {
				streakyes.enabled = false;
				textoffpls.localScale = new Vector3(0, 0, 0);
				textoffplsstil.localScale = new Vector3(0, 0, 0);
				soundyaco.SetActive (false);
				//animtrigkill.Stop ("KillStreakAnim");

			}
				
			if (killstreaks == 3) {
				if (LongestStreak.killstreakys <= 3) {
					LongestStreak.killstreakys = 3;
				}
			}
			if (killstreaks == 4) {
				if (LongestStreak.killstreakys <= 4) {
					LongestStreak.killstreakys = 4;
				}
			}
			if (killstreaks == 5) {
				if (LongestStreak.killstreakys <= 5) {
					LongestStreak.killstreakys = 5;
				}
			}
			if (killstreaks == 6) {
				if (LongestStreak.killstreakys <= 6) {
					LongestStreak.killstreakys = 6;
				}
			}
			if (killstreaks == 7) {
				if (LongestStreak.killstreakys <= 7) {
					LongestStreak.killstreakys = 7;
				}
			}
			if (killstreaks == 8) {
				if (LongestStreak.killstreakys <= 8) {
					LongestStreak.killstreakys = 8;
				}
			}
			if (killstreaks == 9) {
				if (LongestStreak.killstreakys <= 9) {
					LongestStreak.killstreakys = 9;
				}
			}
			if (killstreaks == 10) {
				if (LongestStreak.killstreakys <= 10) {
					LongestStreak.killstreakys = 10;
				}
			}
			if (killstreaks == 11) {
				if (LongestStreak.killstreakys <= 11) {
					LongestStreak.killstreakys = 11;
				}
			}
			if (killstreaks == 12) {
				if (LongestStreak.killstreakys <= 12) {
					LongestStreak.killstreakys = 12;
				}
			}
			if (killstreaks == 13) {
				if (LongestStreak.killstreakys <= 13) {
					LongestStreak.killstreakys = 13;
				}
			}
			if (killstreaks == 14) {
				if (LongestStreak.killstreakys <= 14) {
					LongestStreak.killstreakys = 14;
				}
			}
			if (killstreaks == 15) {
				if (LongestStreak.killstreakys <= 15) {
					LongestStreak.killstreakys = 15;
				}
			}
			if (killstreaks == 15) {
				if (LongestStreak.killstreakys <= 15) {
					LongestStreak.killstreakys = 15;
				}
			}
			if (killstreaks == 16) {
				if (LongestStreak.killstreakys <= 16) {
					LongestStreak.killstreakys = 16;
				}
			}
			if (killstreaks == 17) {
				if (LongestStreak.killstreakys <= 17) {
					LongestStreak.killstreakys = 17;
				}
			}
			if (killstreaks == 18) {
				if (LongestStreak.killstreakys <= 18) {
					LongestStreak.killstreakys = 18;
				}
			}
			if (killstreaks == 19) {
				if (LongestStreak.killstreakys <= 19) {
					LongestStreak.killstreakys = 19;
				}
			}
			if (killstreaks == 20) {
				if (LongestStreak.killstreakys <= 20) {
					LongestStreak.killstreakys = 20;
				}
			}
		}

		public void strtKillsTime()
		{
			StopCoroutine ("ResetStreak");
			StartCoroutine ("ResetStreak");
		}

		private IEnumerator ResetStreak()
		{
			yield return new WaitForSeconds (5f);
			{
				killstreaks = 0;
			}
		}
	}
}