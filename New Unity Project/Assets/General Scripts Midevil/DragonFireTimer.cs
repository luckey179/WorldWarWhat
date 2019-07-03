using UnityEngine;
using System.Collections;

public class DragonFireTimer : MonoBehaviour {

	public GameObject fireAct;
	public GameObject fireSo;

	// Update is called once per frame
	void Awake () {

		StartCoroutine(Fireactt());

	}

	public IEnumerator Fireactt()
	{
		while (true) {
			yield return new WaitForSeconds (21);
			fireAct.SetActive (true);
			fireSo.SetActive (true);
			yield return new WaitForSeconds (9);
			fireAct.SetActive (false);
			fireSo.SetActive (false);
		}
	}
}