using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace S3

{
    public class Doorscripty : MonoBehaviour
    {

        public int cost = 500;

        public AudioClip impact;

        public GameObject prompt;
        public GameObject olddoor;
        public GameObject newdoor;
        //public GameObject activgamopl;

        private AudioSource source;
        public GameObject clip;

        // Use this for initialization

        void Start()
        {
            source = GetComponent<AudioSource>();
        }

        public void OnClick()
        {
            if (DayManager.credits >= cost)
            {

                DayManager.credits -= cost;
                clip.SetActive(true);
                prompt.SetActive(false);
                olddoor.SetActive(false);
                newdoor.SetActive(true);
            }
            else
            {
                source.PlayOneShot(impact);
                olddoor.SetActive(true);
                newdoor.SetActive(false);
            }
        }

    }

}