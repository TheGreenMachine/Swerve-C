#ifndef JOYSTICK_STATE_H
#define JOYSTICK_STATE_H

struct JoystickState{
  JoystickState(double, double, double, double);
  //Polar
  double rightTheta;
  double rightMag;
  double leftTheta;
  double leftMag;
};

#endif
