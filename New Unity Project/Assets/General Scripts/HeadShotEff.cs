using UnityEngine;
using System.Collections;

namespace S3

{

	public class HeadShotEff : MonoBehaviour {

		public GameObject hedshotparteff;
		private Enemy_TakeDamage tkdmgplsya;


		// Update is called once per frame

		void Awake()
		{
			tkdmgplsya = GetComponent<Enemy_TakeDamage> ();
		}

		void Update ()
		{

			if (tkdmgplsya != true)
			{
				hedshotparteff.SetActive (true);
			}
		}
	}
}