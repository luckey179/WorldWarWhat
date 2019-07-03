using UnityEngine;
using System.Collections;
using CnControls;

namespace CnControls
{

	public class MoveCharSc : MonoBehaviour {

		Vector3 movement;
		public float moveForce = 5;
		Rigidbody myBody;

		// Use this for initialization
		void Start () {
		
			myBody = this.GetComponent<Rigidbody> ();
		}
		
		// Update is called once per frame
		void FixedUpdate () 
		{
			Vector3 moveVec = new Vector3 (CnInputManager.GetAxis ("Horizontal"), CnInputManager.GetAxis ("Vertical")) * moveForce;
			transform.Translate (Vector3.forward);
			myBody.AddForce (moveVec);
		
		}
	}
}