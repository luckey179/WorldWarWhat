using UnityEngine;
using System.Collections;

namespace S3
{
	public class Enemy_Master : MonoBehaviour {


		public Transform myTarget;
		public bool isOnRoute;
		public bool isNavPaused;

		public delegate void EventHandler();

		public event EventHandler EventEnemyDie;
		public event EventHandler EventEnemyWalking;
		public event EventHandler EventEnemyReachedNavTarget;
		public event EventHandler EventEnemyAttack;
		public event EventHandler EventStartSinking;
		public event EventHandler EventEnemyLostTarget;


		public delegate void HealthEventHandler(int health);
		public event HealthEventHandler EventEnemyDeductHealth;

		public delegate void NavTargetEventHandler(Transform targetTransform);
		public event NavTargetEventHandler EventEnemySetNavTarget;

		public void CallEventEnemyDeductHealth(int health)
		{
			if(EventEnemyDeductHealth !=null)
			{
				EventEnemyDeductHealth(health);
			}
		}

		public void CallEventEnemySetNavTarget(Transform targTransform)
		{
			if(EventEnemySetNavTarget !=null)
			{
				EventEnemySetNavTarget(targTransform);
			}

			myTarget = targTransform;
		}

		public void CallEventEnemyDie()
		{
			if (EventEnemyDie != null) 
			{
				EventEnemyDie ();
			}
		}

		public void CallEventEnemyWalking()
		{
			if(EventEnemyWalking !=null)
			{
				EventEnemyWalking ();
			}
		}

		public void CallEventEnemyReachedNavTarget()
		{
			if(EventEnemyReachedNavTarget !=null)
			{
				EventEnemyReachedNavTarget ();
			}
		}

		public void CallEventEnemyAttack()
		{
			if(EventEnemyAttack !=null)
			{
				EventEnemyAttack();
			}
		}

		public void CallEventStartSinking()
		{
			if(EventStartSinking !=null)
			{
				EventStartSinking ();
			}
		}

		public void CallEventEnemyLostTarget()
		{
			if (EventEnemyLostTarget != null) {
				EventEnemyLostTarget ();
			}

			myTarget = null;
		}
	}
}