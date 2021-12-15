// file:    /include/hardware-definitions.h
// author:  SEKay

using namespace vex;

extern brain Brain;

// define global controller
extern controller Controller1;

// define global smart drive
extern smartdrive Drivetrain;

// define global auxillary motors
extern motor ClawMotor;
extern motor ArmMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void initDevices( void );