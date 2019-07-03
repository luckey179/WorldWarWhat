using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShieldSkill2 : MonoBehaviour {

	public Animator animato;
	public Animation animm;
	public GameObject gam;
	public Image obj;

	void OnEnable () {

		StartCoroutine(Shieldd());

	}

	public IEnumerator Shieldd()
	{
		yield return new WaitForSeconds (60);
		animm.Rewind ();
		animato.enabled = false;
		gam.SetActive (false);
		obj.enabled = false;
		enabled = false;
	}
}