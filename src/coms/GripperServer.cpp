#include "GripperServer.h"

void GripperServer::event(float * buffer){
	Servo myservo(GRIPPER_SERVO, 5);
	if (buffer[0] == 4){
	    myservo = 0.0;
	}
	if (buffer[0] == 5){
		myservo = 0.9;
	}
}
