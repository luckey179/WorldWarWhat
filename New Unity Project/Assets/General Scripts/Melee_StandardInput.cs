using UnityEngine;
using System.Collections;

namespace S3

{

	public class Melee_StandardInput : MonoBehaviour {

		public Animator animthyme;



		// Use this for initialization
		void Start () 
		{
			
		}

		public void onPointerDownFireButton()
		{
			animthyme.SetTrigger ("AttackMelee");
		}

		public void onPointerUpFireButton ()
		{
			animthyme.SetTrigger ("MeleeRelease");
		}
	}
}