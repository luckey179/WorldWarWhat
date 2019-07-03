using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

namespace S3

{

	public class ContDay1 : MonoBehaviour {

		public DayNightController currentTimeOfDay;
		public float conttime = 12f;
		private int addDay = 1;

		void Start ()
		{
			// Call the Spawn function after a delay of the spawnTime and then continue to call after the same amount of time.
			InvokeRepeating ("Contdaypls", conttime, conttime);
		}

		// Update is called once per frame
		void Contdaypls () {

			if (currentTimeOfDay.currentTimeOfDay >= 0.47f)
			{
				StartCoroutine(backtoa());
				StartCoroutine (backtoatoo ());
			}
		}

		public IEnumerator backtoa()
		{
			yield return new WaitForSeconds (14);
			{
				HordeDay1.Day += addDay;
			}
		}

		public IEnumerator backtoatoo()
		{
			yield return new WaitForSeconds (15);
			{
				SceneManager.LoadScene (1);
			}
		}
	}
}