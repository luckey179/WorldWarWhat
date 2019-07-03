using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

namespace S3

{

	public class DayManager : MonoBehaviour

	{
		

		public static int credits;        // The player's score.


		Text text;                      // Reference to the Text component.


		void Awake ()
		{
			DontDestroyOnLoad (this.gameObject);
			// Set up the reference.
			text = GetComponent <Text> ();
		}

		void Update ()
		{
			// Set the displayed text to be the word "Score" followed by the score value.
			text.text = "" + credits;
		}
	}
}