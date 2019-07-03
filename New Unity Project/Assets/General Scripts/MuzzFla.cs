using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MuzzFla : MonoBehaviour {

	public GameObject gaem;
	public AudioClip[] noiz;
	AudioSource gaound;

	void OnEnable () 
	{
		gaound = GetComponent<AudioSource> ();
		StartCoroutine (Flas ());
	}


	public IEnumerator Flas ()
	{
		int waitblas = Random.Range (12, 7);
		gaem.SetActive (false);
		yield return new WaitForSeconds (waitblas);
		gaem.SetActive (true);
		gaound.clip = noiz[Random.Range(0, noiz.Length)];
		gaound.Play ();

		yield return new WaitForSeconds (4);


		yield return Flas();
	}
}