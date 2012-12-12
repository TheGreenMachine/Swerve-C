#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H
struct MotorState;
struct JoystickState;
MotorState getMotorState(const JoystickState&);
MotorState parseLeftJoystick(const JoystickState&);
MotorState parseRightJoystick(const JoystickState&);
MotorState mergeStates(MotorState, const MotorState&);
#endif
