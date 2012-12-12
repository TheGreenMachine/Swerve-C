#include "JoystickState.h"
#include "math.h"

const double PI=atan(1)*4;

bool sgn(double);

JoystickState::JoystickState(double rightX, double leftX, double leftY):
  right(rightX), 
  leftMag(sqrt(pow(leftX, 2)+pow(leftY, 2)))
{
	  leftTheta  = atan( leftY / leftX )*(180/PI);
	  bool signX  = sgn(leftX);
	  bool signY  = sgn(leftY);
	  
	  if(signX && signY){
		  //Do nothing
	  }
	  else if(signX && !signY){
		  leftTheta += 270;
	  }
	  else if(!signX && signY){
		  leftTheta += 90;
	  }
	  else{
		  leftTheta += 180;
	  }
}


bool sgn(double num){
	return num>=0;
}
