using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace S3

{

	public class ThrowGrenade : MonoBehaviour {

		List<GameObject> grenades = new List<GameObject> ();
		public GameObject grenadePrefab;
		private Transform myTransform;
		public float propulsionForce;
		public int maxGrenades = 20;
		public bool isGrenadeClicked = false;

		void Start()
		{
			SetInitialReferences();
		}

		public void Update()
		{
			if (Input.GetMouseButtonDown (0)) {
				if (grenades.Count < maxGrenades) {
					SpawnGrenade ();
				}
			}
		}

		void SetInitialReferences()
		{
			myTransform = transform;
		}

		void SpawnGrenade()
		{
			GameObject go = (GameObject)Instantiate (grenadePrefab, myTransform.TransformPoint (0, 0, 0f), myTransform.rotation);
			go.GetComponent<Rigidbody> ().AddForce (myTransform.parent.forward * propulsionForce, ForceMode.Impulse);
			grenades.Add (go);
			Destroy (go, 10);
		}
	}
}