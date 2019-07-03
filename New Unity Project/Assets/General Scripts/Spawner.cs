using UnityEngine;
using System.Collections;

namespace Chapter1
{
	public class Spawner : MonoBehaviour
	{
		public GameObject objectToSpawn;
		public int numberOfEnemies;
		private float spawnRaidus = 5;
		private Vector3 spawnPosition;

		// Use this for initialization
		void Start () 
		{
			SpawnObject ();
		}

		void SpawnObject()
		{
			for(int i = 0; i < numberOfEnemies; i++)
			{
				spawnPosition = transform.position + Random.insideUnitSphere * spawnRaidus;
				Instantiate (objectToSpawn, spawnPosition, Quaternion.identity);
			}
		}
	}
}