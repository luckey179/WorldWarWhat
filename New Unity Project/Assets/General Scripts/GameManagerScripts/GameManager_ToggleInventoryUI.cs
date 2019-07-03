﻿using UnityEngine;
using System.Collections;

namespace S3
{

	public class GameManager_ToggleInventoryUI : MonoBehaviour 
	{

		[Tooltip("Does this game mode have an inventory? Set to true if that is the case")]
		public bool hasInventory;
		public GameObject inventoryUI;
		public string toggleInventory;
		private GameManager_Master gameManagerMaster;

		public void Click() {
			Debug.Log ("clicked");
		}

		public void Click2 (string text) {
			Debug.Log (text);

		}

		// Use this for initialization
		void Start () 
		{
			SetInitialReferences ();
		}

		// Update is called once per frame
		void Update () 
		{
			CheckForInventoryUIToggleRequest ();
		}

		void SetInitialReferences()
		{
			gameManagerMaster = GetComponent<GameManager_Master> ();

			if (toggleInventory == "Offense") {
				Debug.LogWarning ("Please type in the name of the button used to toggle the inventory");
				this.enabled = false;
			}
		}

		void CheckForInventoryUIToggleRequest()
		{
			if (Input.GetButtonDown (toggleInventory) && !gameManagerMaster.isMenuOn &&
			    !gameManagerMaster.isGameOver && hasInventory) 
			{
				ToggleInventoryUI ();
			}

		}

		public void ToggleInventoryUI ()
		{
			if (inventoryUI != null) {
				inventoryUI.SetActive (!inventoryUI.activeSelf);
				gameManagerMaster.isInventoryUIOn = !gameManagerMaster.isInventoryUIOn;
				gameManagerMaster.CallEventInventoryUIToggle ();
			}
		}
	}
}