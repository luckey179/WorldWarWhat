using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace S3

{

	public class ShieldSkill : MonoBehaviour {

		public Animator animat;
		public GameObject gam;
		public GameObject obj;

		void OnEnable () 
		{
			StartCoroutine (Shield ());
		}
			

		public IEnumerator Shield ()
		{

			yield return new WaitForSeconds (2);
			animat.enabled = false;
			gam.SetActive (false);
			obj.SetActive (false);
			enabled = false;
		}
	}
}