using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PortalEnterZombie : MonoBehaviour 
{

	void OnTriggerEnter(Collider other)
	{
		SceneManager.LoadScene (4);
	}
}