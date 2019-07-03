using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace S3

{
	public class WeaponButtonS : MonoBehaviour {

		public int cost = 500;

		public AudioClip impact;

		public GameObject button;
		public GameObject botton;
		public GameObject silo;
		//public GameObject activgamopl;

		public Button wepActivateButton;

		private AudioSource source;
		public AudioSource clip;

		// Use this for initialization

		void Start () 
		{
			source = GetComponent<AudioSource> ();
		}

		public void OnClick()
		{
			if (DayManager.credits >= cost) {

				DayManager.credits -= cost;


				button.SetActive (false);
				botton.SetActive (false);
				silo.SetActive (true);
				wepActivateButton.interactable = true;
				//activgamopl.SetActive (true);

				clip.Play ();

			} else {
				source.PlayOneShot (impact);
				silo.SetActive (false);
				wepActivateButton.interactable = false;
			}
		}

	}

}