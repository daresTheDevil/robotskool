// file:    /src/devices.cpp
// author:  SEKay

#include "vex.h"

// build controllers
controller ControllerOne = controller(primary);

// build drive motors
motor LeftDriveSmart = motor(PORT1, ratio18_1, false);
motor RightDriveSmart = motor(PORT10, ratio18_1, true);
motor LeftDrive = motor(PORT1, ratio18_1, false);
motor RightDrive = motor(PORT10, ratio18_1, true);

// build gryos...yummmm
gyro TurnGyro = gyro(Brain.ThreeWirePort.D);

// collate motors into smart drive
smartdrive Drivetrain = smartdrive(LeftDrive, RightDrive, TurnGyro, 319.19, 320, 130, mm, 1);

// build auxillary motors
motor ClawMotor = motor(PORT3, ratio18_1, false);
motor ArmMotor = motor(PORT8, ratio18_1, false);

// initialize devices

void initDevices(void) {
  Brain.Screen.print("Don't panic...");
  Brain.Screen.setCursor(2, 1);
  // calibrate the drivetrain gyro
  wait(200, msec);
  TurnGyro.startCalibration(1);
  Brain.Screen.print("Calibrating Gyro...mmmmmm...");
  // wait for the gyro calibration process to finish
  while (TurnGyro.isCalibrating()) {
    wait(25, msec);
  }
  // reset the screen now that the calibration is complete
  Brain.Screen.print("Finished eati...calibrating gyro");
  Brain.Screen.clearScreen();
  Brain.Screen.setCursor(1,1);
  wait(50, msec);
  Brain.Screen.clearScreen();
}