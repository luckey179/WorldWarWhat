using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

namespace S3

{

	public class Super : MonoBehaviour 
	{

		public bool isSewpPressed = false;
		public bool isSoopPressed = false;
		public bool isReleasePressed = false;
		public float timeBetweenSupers = 5.0f;
		public int attackDamage = 1000;

		public Animator playrota;

		float timer;
		public Animator anim;
		public Animator anim2;
		bool Soop;
		bool Sewp;

		void Awake (){

			//anim = GetComponent <Animator> ();

		}
			
		public void onPointerDownSuperButton()
		{
			SuperAttack ();
		}

		public void onPointerDownSewperButton()
		{
			SewperAttack ();
		}

		void OnTriggerEnter (Collider other)
		{
			
			if(other.gameObject.tag == "Enemy")
			{
				other.GetComponent<Enemy_TakeDamage> ().ProcessDamage (attackDamage);
			}
		}

		public void SuperAttack ()
		{
			
			anim.enabled = true;
			anim.SetTrigger ("Sooper");
			playrota.SetTrigger ("Suppertime");
		}

		public void SewperAttack ()
		{
			anim2.enabled = true;
			anim2.SetTrigger ("Sewperrr");
		}
	}
}