using UnityEngine;
using System.Collections;

namespace S3

{

	public class Destructible_Master2 : MonoBehaviour {

		public delegate void HealthEventHandler(int health);
		public event HealthEventHandler EventDeductHealth2;

		public delegate void GeneralEventHandler();
		public event GeneralEventHandler EventDestroyMe2;
		public event GeneralEventHandler EventHealthLow2;

		public void CallEventDeductHealth2(int healthToDeduct)
		{
			if (EventDeductHealth2 != null) {
				EventDeductHealth2 (healthToDeduct);
			}
		}

		public void CallEventDestroyMe2()
		{
			if (EventDestroyMe2 != null) {
				EventDestroyMe2 ();
			}
		}

		public void CallEventHealthLow2()
		{
			if (EventHealthLow2 != null) {
				EventHealthLow2 ();
			}
		}
	}
}