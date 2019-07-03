using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PortalEnter : MonoBehaviour 
{

	void OnTriggerEnter(Collider other)
	{
		SceneManager.LoadScene (2);
	}
}