using UnityEngine;
using System.Collections;

public class PlayerLook : MonoBehaviour {

	private Vector2 touchOrigin = -Vector2.one;

	void update ()
	{

		int horizontal = 0;
		int vertical = 0;
		
		if (Input.touchCount > 0) {
			Touch myTouch = Input.touches [0];

			if (myTouch.phase == TouchPhase.Began) {

				touchOrigin = myTouch.position;
			} else if (myTouch.phase == TouchPhase.Ended && touchOrigin.x >= 0) {
				Vector2 touchEnd = myTouch.position;
				float x = touchEnd.x - touchOrigin.x;
				float y = touchEnd.y - touchOrigin.y;
				touchOrigin.x = -1;
				if (Mathf.Abs (x) > Mathf.Abs (y))
					horizontal = x > 0 ? 1 : -1;
				else
					vertical = y > 0 ? 1 : -1;
			}
		}
	}
}