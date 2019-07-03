using UnityEngine;
using UnityEngine.SceneManagement;

namespace S3
{

    public class DontDestPls : MonoBehaviour
    {

        public static DontDestPls Instance;
        private SceneManager scene;
        public GameObject aliendaytex;

        void Awake()
        {
            if (Instance == null)
            {
                DontDestroyOnLoad(gameObject);
                Instance = this;
            }
            else if (Instance != this)
            {
                Destroy(gameObject);
            }

            aliendaytex = GameObject.Find("AlienDayTime");
        }
        /*
		void Update()
		{

            if (SceneManager.GetActiveScene().name == "AlienWar") 
			{
				aliendaytex.SetActive (true);
			}

			if (SceneManager.GetActiveScene ().name == "BaseGame") 
			{
				aliendaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "StartMenu") 
			{
				aliendaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "Medevil") 
			{
				aliendaytex.SetActive (false);
			}

			if (SceneManager.GetActiveScene ().name == "ZombieWar") 
			{
				aliendaytex.SetActive (false);
			}

		}
		*/
    }
}