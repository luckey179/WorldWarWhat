using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3

{

	public class EnemiesKilledEnd : MonoBehaviour {

		public static int killends;        // The player's score.


		Text text;                      // Reference to the Text component.


		void Awake ()
		{
			text = GetComponent <Text> ();

		}


		void Update ()
		{
			// Set the displayed text to be the word "Score" followed by the score value.
			text.text = "" + killends;
		}
	}
}