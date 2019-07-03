using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MissionTimer : MonoBehaviour {


	float timeLeft = 60.0f;

	public GameObject timeend;

	public Text text;



	void Update()
	{
		timeLeft -= Time.deltaTime;
		text.text = "" + Mathf.Round(timeLeft);
		if(timeLeft < 0)
		{
			timeend.SetActive (false);
		}
	}
}