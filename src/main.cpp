// file:    /src/main.cpp
// author:  SEKay

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

// all functions here run ONLY AFTER POWER CYCLE, but not after disabling
// the robot. If you don't return from this function, you die here

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  initDevices();
  
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

// anything that you want to run in the autonomous period goes here
void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}

// FIGHT CODE GOES HERE
void usercontrol(void) {
  while (1) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
