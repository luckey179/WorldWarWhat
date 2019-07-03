using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace S3
{
	public class Player_Health : MonoBehaviour {

		private GameManager_Master gameManagerMaster;
		private Player_Master playerMaster;
		public int playerHealth;
		public Slider healthSlider;
		public Image damageImage;
		public AudioClip deathClip;
		public float flashSpeed = 5f;
		public Color flashColour = new Color(1f, 0f, 0f, 0.1f);

		Animator anim;                                              // Reference to the Animator component.
		AudioSource playerAudio;                                    // Reference to the AudioSource component.
		bool isDead;                                                // Whether the player is dead.
		bool damaged;                                               // True when the player gets damaged.


		void OnEnable()
		{
			SetInitialReferences ();
			playerMaster.EventPlayerHealthDeduction += DeductHealth;
			playerMaster.EventPlayerHealthIncrease += IncreaseHealth;
		}

		void OnDisable()
		{
			playerMaster.EventPlayerHealthDeduction -= DeductHealth;
			playerMaster.EventPlayerHealthIncrease -= IncreaseHealth;
		}

		void Awake ()
		{
			// Setting up the references.
			anim = GetComponent <Animator> ();
			playerAudio = GetComponent <AudioSource> ();

		}

		void SetInitialReferences()
		{
			gameManagerMaster = GameObject.Find ("GameManager").GetComponent<GameManager_Master> ();
			playerMaster = GetComponent<Player_Master> ();
		}

		void Update ()
		{
			// If the player has just been damaged...
			if(damaged)
			{
				// ... set the colour of the damageImage to the flash colour.
				damageImage.color = flashColour;
			}
			// Otherwise...
			else
			{
				// ... transition the colour back to clear.
				damageImage.color = Color.Lerp (damageImage.color, Color.clear, flashSpeed * Time.deltaTime);
			}

			// Reset the damaged flag.
			damaged = false;
		}

		void DeductHealth(int healthChange)
		{
			playerHealth -= healthChange;
			damaged = true;
			healthSlider.value = playerHealth;
			playerAudio.Play ();

			if (playerHealth <= 0 && !isDead) 
			{
				playerHealth = 0;
				Death ();
				gameManagerMaster.CallEventGameOver ();
			}

		}

		void IncreaseHealth(int healthChange)
		{
			playerHealth += healthChange;
			healthSlider.value = playerHealth;

			if (playerHealth > 100) {
				playerHealth = 100;
			}

		}

		void Death ()
		{
			// Set the death flag so this function won't be called again.
			isDead = true;

			// Tell the animator that the player is dead.
			anim.SetTrigger ("Die");

			// Set the audiosource to play the death clip and play it (this will stop the hurt sound from playing).
			playerAudio.clip = deathClip;
			playerAudio.Play ();
		}
	}
}