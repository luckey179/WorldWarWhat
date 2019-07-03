using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SlowSkill2 : MonoBehaviour {

	public Animator animato;
	public GameObject gam;
	public Image obj;

	void OnEnable () {

		StartCoroutine(Sloww());

	}

	public IEnumerator Sloww()
	{
		yield return new WaitForSeconds (65);
		animato.enabled = false;
		gam.SetActive (false);
		obj.enabled = false;
		enabled = false;
	}
}