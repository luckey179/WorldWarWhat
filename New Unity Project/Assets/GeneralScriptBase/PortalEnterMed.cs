using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PortalEnterMed : MonoBehaviour 
{

	void OnTriggerEnter(Collider other)
	{
		SceneManager.LoadScene (3);
	}
}