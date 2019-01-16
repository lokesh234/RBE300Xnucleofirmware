#ifndef StatusServer_H
#define StatusServer_H
#include "../drivers/MyPid.h"
#include <PID_Bowler.h>
#include <PacketEvent.h>
#include <cmath> // std::abs
#define STATUSSERVERID 99

class StatusServer : public PacketEventAbstract {

public:
  // Packet ID needs to be set
  StatusServer() : PacketEventAbstract(STATUSSERVERID) {}
  // User function to be called when a packet comes in
  // Buffer contains data from the packet coming in at the start of the function
  // User data is written into the buffer to send it back
  void event(float *buffer);
};

#endif /* end of include guard: Pid_server */
