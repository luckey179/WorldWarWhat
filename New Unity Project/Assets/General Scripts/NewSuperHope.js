#pragma strict

var radius = 500.0;
var power = 10.0;
public var damage : float = 1000;
function Start () {
    // Applies an explosion force to all nearby rigidbodies
    var explosionPos : Vector3 = transform.position;
    // get all colliders touching or inside the imaginary sphere:
    var colliders : Collider[] = Physics.OverlapSphere (explosionPos, radius);
    for(var evilColliders : Collider in colliders)
    {

    	if(evilColliders.gameObject.tag == "Enemy")
    	{
             evilColliders.transform.SendMessage("ProcessDamage", damage, SendMessageOptions.DontRequireReceiver);
        }
     }
}