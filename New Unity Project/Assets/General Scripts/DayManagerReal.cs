using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DayManagerReal : MonoBehaviour
{
	public static int Day;        // The player's score.


	Text text;                      // Reference to the Text component.


	void Awake ()
	{
		// Set up the reference.
		text = GetComponent <Text> ();

		// Reset the score.
		Day = 1;
	}


	void Update ()
	{
		// Set the displayed text to be the word "Score" followed by the score value.
		text.text = " " + Day;
	}
}