using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

namespace S3
{

	public class Player_Inventory : MonoBehaviour {

		public Transform inventoryPlayerParent;
		public Transform inventoryUIParent;
		public GameObject uiButton1;
		public GameObject uiButton2;
		public GameObject uiButton3;
		public GameObject uiButton4;
		public GameObject uiButton5;
		public GameObject uiButton6;
		public GameObject uiButton7;
		public GameObject uiButton8;
		public GameObject uiButton9;

		private Player_Master playerMaster;
		private GameManager_ToggleInventoryUI inventoryUIScript;
		private float timeToPlaceInHands = 0.1f;
		private Transform currentHeldItem;
		private int counter;
		private string buttonText;
		private List<Transform> listInventory = new List<Transform> ();

		void OnEnable()
		{
			SetInitialReferences ();
			DeactivateAllInventoryItems ();
			UpdateInventoryListAndUI ();
			CheckIfHandsEmpty ();

			playerMaster.EventInventoryChanged += UpdateInventoryListAndUI;
			playerMaster.EventInventoryChanged += CheckIfHandsEmpty;
			playerMaster.EventHandsEmpty += ClearHands;
		}

		void OnDisable()
		{
			playerMaster.EventInventoryChanged -= UpdateInventoryListAndUI;
			playerMaster.EventInventoryChanged -= CheckIfHandsEmpty;
			playerMaster.EventHandsEmpty -= ClearHands;
		}

		void SetInitialReferences()
		{
			inventoryUIScript = GameObject.Find ("GameManager").GetComponent<GameManager_ToggleInventoryUI> ();
			playerMaster = GetComponent<Player_Master> ();
		}

		void UpdateInventoryListAndUI()
		{
			counter = 0;
			listInventory.Clear ();
			listInventory.TrimExcess ();

			ClearInventoryUI ();

			foreach (Transform child in inventoryPlayerParent) {
				if (child.CompareTag ("Item1")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton1) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item2")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton2) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item3")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton3) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item4")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton4) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item5")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton5) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item6")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton6) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item7")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton7) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item8")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton8) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}

				if (child.CompareTag ("Item9")) {
					listInventory.Add (child);
					GameObject go = Instantiate (uiButton9) as GameObject;
					buttonText = child.name;
					go.GetComponentInChildren<Text> ().text = buttonText;
					go.GetComponent<Button> ().image.enabled = true;
					go.GetComponent<Button> ().enabled = true;
					int index = counter;
					go.GetComponent<Button> ().onClick.AddListener (delegate { ActivateInventoryItem (index); });
					go.GetComponent<Button> ().onClick.AddListener (inventoryUIScript.ToggleInventoryUI);
					go.transform.SetParent (inventoryUIParent, false);
					counter++;
				}
			}
		}

		void CheckIfHandsEmpty()
		{
			if (currentHeldItem == null && listInventory.Count > 0) {
				StartCoroutine (PlaceItemInHands (listInventory [listInventory.Count - 1]));
			}
		}

		void ClearHands()
		{
			currentHeldItem = null;
		}

		void ClearInventoryUI()
		{
			foreach (Transform child in inventoryUIParent) 
			{
				Destroy (child.gameObject);
			}
		}

		public void ActivateInventoryItem(int inventoryIndex)
		{
			DeactivateAllInventoryItems ();
			StartCoroutine (PlaceItemInHands (listInventory [inventoryIndex]));
		}

		void DeactivateAllInventoryItems()
		{
			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item1"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item2"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item3"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item4"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item5"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item6"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item7"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item8"))
				{
					child.gameObject.SetActive (false);
				}
			}

			foreach (Transform child in inventoryPlayerParent)
			{
				if(child.CompareTag("Item9"))
				{
					child.gameObject.SetActive (false);
				}
			}
		}

		IEnumerator PlaceItemInHands(Transform itemTransform)
		{
			yield return new WaitForSeconds (timeToPlaceInHands);
			currentHeldItem = itemTransform;
			currentHeldItem.gameObject.SetActive (true);
		}
	}
}