using UnityEngine;
using System.Collections;

public class DragonFireTimer1 : MonoBehaviour {

	public GameObject fireAct;
	public GameObject fireSo;

	// Update is called once per frame
	void Awake () {

		StartCoroutine(Fireactt());

	}

	public IEnumerator Fireactt()
	{
		while (true) {
			yield return new WaitForSeconds (7);
			fireAct.SetActive (true);
			fireSo.SetActive (true);
			yield return new WaitForSeconds (13);
			fireAct.SetActive (false);
			fireSo.SetActive (false);
		}
	}
}