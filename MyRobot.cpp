#include "WPILib.h"
#include "JoystickState.h"
#include "MotorState.h"

class RobotDemo : public SimpleRobot
{
        Jaguar upperLeftJag;
        Jaguar upperRightJag;
        Jaguar lowerLeftJag;
        Jaguar lowerRightJag;
	Joystick stickLeft; 
	Joystick stickRight;

public:
	RobotDemo(void):
          upperLeftJag(1),
          upperRightJag(2),
          lowerLeftJag(3),
          lowerRightJag(4),
          stickLeft(1),
          stickRight(2)
	{}

	/**
	 * Do nothing
	 */
	void Autonomous(void)
	{
          //DO NOTHING
	}

	/**
	 * Swerve Drive
	 */
	void OperatorControl(void)
	{
		while (IsOperatorControl())
		{
                  //Magic
                  Wait(0.005);				// wait for a motor update time
		}
	}
};

START_ROBOT_CLASS(RobotDemo);

