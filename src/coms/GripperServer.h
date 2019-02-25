
#ifndef  GripperServer_H
#define GripperServer_H
#include <PacketEvent.h>
#include <Servo.h>
#include <mbed.h>
#include <main.h>
#define GRIPPERSERVERID 143

class GripperServer: public PacketEventAbstract{

public:
  // Packet ID needs to be set
   GripperServer ()
   : PacketEventAbstract(GRIPPERSERVERID){
  }
  void event(float * buffer);
};


#endif
