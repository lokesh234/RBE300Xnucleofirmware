#include "GripperServer.h"

void GripperServer::event(float * buffer){
	Servo myservo(GRIPPER_SERVO, 5);
	if (buffer[3] == 4){
		for(int i=0; i<100; i++) {
		             myservo = i/100.0;
		             wait(0.01);
		         }
	}
	if (buffer[3] == 5){
		for(int i=0; i<100; i--) {
		             myservo = i/100.0;
		             wait(0.01);
		         }
	}
}
