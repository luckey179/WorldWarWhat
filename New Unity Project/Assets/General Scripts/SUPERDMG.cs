using UnityEngine;
using System.Collections;

namespace S3
{
	
	public class SUPERDMG : MonoBehaviour {

		public int damageToApply;
		public bool isFirePressed = false;
		public bool isReleasePressed = false;
		private GameObject alienEnemies;

		void Start ()
		{
			alienEnemies = GameObject.FindGameObjectWithTag ("Enemy");
		}

		void Update()
		{
			ExplodeDamage ();
		}


		public void OnSuperPressDown()
		{
			isFirePressed = true;
		}

		public void OnSuperPressUp()
		{
			isFirePressed = false;
		}
			
		void ExplodeDamage ()
		{
			if (isFirePressed) {
					
				if(gameObject.CompareTag("Enemy"))
				{
						
					alienEnemies.SendMessage ("ProcessDamage", damageToApply, SendMessageOptions.DontRequireReceiver);
				}
			}
		}
	}
}