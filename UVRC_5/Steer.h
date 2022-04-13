/*
  Steer.h - Library for wraping the functions controling Steer
  Created Konstantinos Papageorgiou  
*/
#ifndef Steer_h
#define Steer_h

#include "Arduino.h"
#include <Servo.h>
#include "Remote.h"
#include "Context.h"

class Steer{
  public:
    Steer(int pin);
    void setup(Context &_context, Remote &_remote);
    void apply();
    void setSteer(int value);
    int getDegreeDiff();
    boolean hasNewDegree();

    int center = 94;  
    int steerValue = center;

    int target = 0; //vehicle target heading

  private:
    int _pin;
    Context *context;
    Remote *remote;
    Servo steer;
};

#endif