using UnityEngine;
using System.Collections;

public class CataTriggerb : MonoBehaviour {

	public Animator catap;

	void OnTriggerEnter(Collider other)
	{
		catap.enabled = true;
	}
	void OnTriggerExit(Collider other)
	{
		catap.enabled = false;
	}
}