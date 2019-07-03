using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace S3

{

	public class Disablepowerbutton : MonoBehaviour {

		public Button inactivebutton;

		// Update is called once per frame
		void Update () 
		{
			if (inactivebutton.interactable == false) {
				inactivebutton.interactable = false;
			}
		}
	}
}