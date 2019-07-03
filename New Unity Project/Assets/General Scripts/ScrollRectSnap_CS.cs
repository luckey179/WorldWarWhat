﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScrollRectSnap_CS : MonoBehaviour {


	public RectTransform panel;
	public Button[] bttn;
	public RectTransform center;

	private float[] distance;
	private bool dragging = false;
	private int bttnDistance;
	private int minButtonNum;

	void Start()
	{
		int bttnLengtht = bttn.Length;
		distance = new float[bttnLengtht];

		bttnDistance = (int)Mathf.Abs (bttn [1].GetComponent<RectTransform> ().anchoredPosition.x - bttn [0].GetComponent<RectTransform> ().anchoredPosition.x);
	}

	void Update()
	{
		for (int i = 0; i < bttn.Length; i++) {
			distance[i] = Mathf.Abs(center.transform.position.x - bttn[i].transform.position.x);
		}

		float minDistance = Mathf.Min (distance);

		for (int a = 0; a < bttn.Length; a++) {
			if (minDistance == distance [a]) {
				minButtonNum = a;
			}
		}

		if (!dragging) {
			LerpToBttn (minButtonNum * -bttnDistance);
		}
	}

	void LerpToBttn(int position)
	{
		float newX = Mathf.Lerp (panel.anchoredPosition.x, position, Time.fixedDeltaTime * 10f);
		Vector2 newPosition = new Vector2 (newX, panel.anchoredPosition.y);

		panel.anchoredPosition = newPosition;
	}

	public void StartDrag()
	{
		dragging = true;
	}

	public void EndDrag()
	{
		dragging = false;
	}
}