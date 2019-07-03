using UnityEngine;
using System.Collections;

public class PortalSoundSc1 : MonoBehaviour {

	public AudioSource portSound;

	void OnTriggerEnter(Collider other)
	{
		portSound.enabled = true;
	}

	void OnTriggerExit(Collider other)
	{
		portSound.enabled = false;
	}
}