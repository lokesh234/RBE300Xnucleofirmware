#include "GripperServer.h"

void GripperServer::event(float * buffer){
	Servo myservo(GRIPPER_SERVO, 5);
	if(buffer[3] == 1){
	myservo = 0.8;
	wait(2);
	}
	if(buffer[3] == 0){
	myservo = 0;
	}
}