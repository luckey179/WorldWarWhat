using UnityEngine;
using System.Collections;

public class DisableAnim : MonoBehaviour {

	public GameObject animWin;
	public GameObject wowSound1;
	
	void OnEnable () {

		StartCoroutine(animNo());

	}

	public IEnumerator animNo()
	{
		
		yield return new WaitForSeconds (5);
		wowSound1.GetComponent<AudioSource> ().enabled = false;
		animWin.SetActive (false);
	}
}