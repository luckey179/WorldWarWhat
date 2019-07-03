#pragma strict

private var camTime : GameObject;
camTime = GameObject.Find("PlayerMain");
private var heading : float = 0;
 
// mouse/touch input
public var touchRotatesHeading : boolean = true;
private var screenSize : Vector2;
private var mouseStartPoint: Vector2;
private var headingAtTouchStart : float = 0;

function Start () {

	screenSize.x = Screen.width;
    screenSize.y = Screen.height;

}

function Update () {
    #if (UNITY_IPHONE || UNITY_ANDROID)  !UNITY_EDITOR
        if (touchRotatesHeading) {
            GetTouchMouseInput();
        }
        camTime.transform.localEulerAngles.y = heading;
    #endif
}
 
function GetTouchMouseInput() {
    if(Input.GetMouseButtonDown(0)) {
        mouseStartPoint = Input.mousePosition;
        headingAtTouchStart = heading;
    } else if (Input.GetMouseButton(0)) {
        var delta : Vector2;
        var mousePos = Input.mousePosition;
        delta.x = (mousePos.x - mouseStartPoint.x)/screenSize.x;
        delta.y = (mousePos.y - mouseStartPoint.y)/screenSize.y;
        heading = (headingAtTouchStart+delta.x*100);
        heading = heading%360;
    }
}