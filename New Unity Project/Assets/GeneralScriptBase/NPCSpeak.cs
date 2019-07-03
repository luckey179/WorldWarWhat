using UnityEngine;
using System.Collections;

public class NPCSpeak : MonoBehaviour {

	private AudioSource audioSource;
	public AudioClip[] npcTalky;
	private AudioClip talkClip;
	public GameObject textalk;
	public GameObject textalk2;
	public Animator animby;

	void Start()
	{
		audioSource = gameObject.GetComponent<AudioSource> ();
	}

	void OnTriggerEnter(Collider other)
	{
		int index = Random.Range (0, npcTalky.Length);
		talkClip = npcTalky [index];
        animby.SetTrigger("UIAppear");
		audioSource.clip = talkClip;
		audioSource.Play ();
		textalk.SetActive (true);
		textalk2.SetActive (true);
	}

	void OnTriggerExit(Collider other)
	{
        animby.SetTrigger("UIGone");
		textalk.SetActive (false);
		textalk2.SetActive (true);
	}
}