using UnityEngine;

namespace S3

{

	public class EnemyManagerMed : MonoBehaviour
	{
		public GameObject[] enemy;                // The enemy prefab to be spawned.
		public float spawnTime = 3f;            // How long between each spawn.
		public Transform[] spawnPoints;         // An array of the spawn points this enemy can spawn from.
		public DayNightController currentTimeOfDay;


		void Start ()
		{
			// Call the Spawn function after a delay of the spawnTime and then continue to call after the same amount of time.
			InvokeRepeating ("Spawn", spawnTime, spawnTime);
		}


		void Spawn ()
		{
				
			if (currentTimeOfDay.currentTimeOfDay >= 0.47f)
			{
				// ... exit the function.
				return;
			}

			// Find a random index between zero and one less than the number of spawn points.
			int spawnPointIndex = Random.Range (0, spawnPoints.Length);
			int enemySpawnIndex = Random.Range (0, enemy.Length);

			// Create an instance of the enemy prefab at the randomly selected spawn point's position and rotation.
			Instantiate (enemy[enemySpawnIndex], spawnPoints[spawnPointIndex].position, spawnPoints[spawnPointIndex].rotation);
		}
	}
}