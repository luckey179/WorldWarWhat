using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3
{
	public class RageSkill2 : MonoBehaviour {

		public Animator animato;
		public GameObject gam;
		public Image obj;

		void OnEnable () {

			StartCoroutine(Ragee());

		}

		public IEnumerator Ragee()
		{
			yield return new WaitForSeconds (60);
			animato.enabled = false;
			gam.SetActive (false);
			obj.enabled = false;
			enabled = false;
		}
	}
}