#include "Transformers.h"
#include "MotorState.h"
#include "JoystickState.h"

MotorState getMotorState(const JoystickState& stick){
	MotorState left = parseLeftJoystick(stick);
	MotorState right = parseRightJoystick(stick);
	return mergeStates(left, right);
}
MotorState parseLeftJoystick(const JoystickState& state){
	MotorState motor;
	motor.lowerDirection = motor.topDirection = state.leftTheta;
	motor.lowerLeftPower = state.leftMag;
	motor.lowerRightPower = state.leftMag;
	motor.topRightPower = state.leftMag;
	motor.topLeftPower = state.leftMag;
	return motor;
}

MotorState parseRightJoystick(const JoystickState& state){
	MotorState motor;
	motor.topDirection   = state.right * 90.0;
	motor.lowerDirection = state.right * -90.0;
	return motor;
}
MotorState mergeStates(MotorState leftState, const MotorState& rightState){
	leftState.lowerDirection += rightState.lowerDirection;
	leftState.topDirection   += rightState.topDirection;
	return leftState;
}
