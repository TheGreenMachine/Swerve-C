#ifndef JOYSTICK_STATE_H
#define JOYSTICK_STATE_H

struct JoystickState{
  JoystickState(double, double, double);
  //Polar
  double right;
  double leftTheta;
  double leftMag;
};

#endif
