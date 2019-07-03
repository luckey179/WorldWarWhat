using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3

{

	public class LongestStreak : MonoBehaviour 
	{

		public static int killstreakys;
		Text text;

		void Awake ()
		{
			text = GetComponent <Text> ();
		}

		// Update is called once per frame
		void Update ()
		{

			text.text = "" + killstreakys;
		}
	}
}