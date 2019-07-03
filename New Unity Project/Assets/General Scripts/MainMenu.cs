using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

namespace S3
{
	public class MainMenu:MonoBehaviour
	{
		
		public void MainMenuGame()
		{
			SceneManager.LoadScene (0);
		}

		public void BaseGame()
		{
			SceneManager.LoadScene (1);
		}

		public void BeginGame()
		{
			GameObject MainMenu = GameObject.Find ("MyUnitySingleton");
			if (MainMenu != null) {
				MainMenu.SendMessage ("Stop", SendMessageOptions.DontRequireReceiver);
			}
			SceneManager.LoadScene (1);
		}

			public void ExitGame()
		{

			Application.Quit ();
		}
	}
}

