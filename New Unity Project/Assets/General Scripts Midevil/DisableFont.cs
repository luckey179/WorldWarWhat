using UnityEngine;
using System.Collections;

namespace S3

{

	public class DisableFont : MonoBehaviour {

		public GameObject removFo;
		public GameObject wepRemo;

		// Use this for initialization
		void Update () {

			if (wepRemo == null) {
				removFo.SetActive (false);
			}
		}
	}
}