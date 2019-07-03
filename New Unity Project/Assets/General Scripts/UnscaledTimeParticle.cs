using UnityEngine;
using System.Collections;

namespace S3
{

	public class UnscaledTimeParticle : MonoBehaviour {

		public ParticleSystem psys;

		// Update is called once per frame
		void Update () 
		{

			if (Time.timeScale < 0.50f) 
			{
				psys.Simulate(Time.unscaledDeltaTime, true, false);
			}
		}
	}
}