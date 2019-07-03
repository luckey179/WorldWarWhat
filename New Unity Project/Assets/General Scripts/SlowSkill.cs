using UnityEngine;
using System.Collections;

namespace S3
{

	public class SlowSkill : MonoBehaviour {

		public Animator animat;
		public GameObject gam;
		public GameObject obj;

		void OnEnable () {
			
			StartCoroutine(Slow());
		
		}

		public IEnumerator Slow()
		{
			
			Time.timeScale = 0.25f;
			yield return new WaitForSeconds (5);
			animat.enabled = false;
			gam.SetActive (false);
			obj.SetActive (false);
			Time.timeScale = 1;
			enabled = false;
		}
	}
}