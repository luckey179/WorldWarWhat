using UnityEngine;
using System.Collections;

public class DisableAnim2gu : MonoBehaviour {

	public GameObject animWinPart;

	void OnEnable () {

		StartCoroutine(animNo());

	}

	public IEnumerator animNo()
	{

		yield return new WaitForSeconds (5);
		animWinPart.SetActive (false);
	}
}