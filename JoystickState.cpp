#include "JoystickState.h"
#include "math.h"


JoystickState::JoystickState(double rightX, double rightY, 
    double leftX, double leftY):
  rightTheta(atan( rightY / rightX )),
  rightMag(sqrt(pow(rightX, 2)+pow(rightY, 2))),
  leftTheta(atan( leftY / leftX )),
  leftMag(sqrt( pow(leftX, 2)+pow(leftY, 2) )){}
