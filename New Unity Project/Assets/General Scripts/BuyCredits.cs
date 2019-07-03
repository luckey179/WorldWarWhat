using UnityEngine;
using System.Collections;

namespace S3
{

	public class BuyCredits : MonoBehaviour {

		public int addCred = 500, i=0;
		public int addCredd = 5000000;

		public float duration = 0.5f, timer=0;



		public void OnClick()
		{
			if (DayManager.credits <= addCredd) 
			{

				DayManager.credits += addCred;

				return;
			}
				
		}
			
	}
}