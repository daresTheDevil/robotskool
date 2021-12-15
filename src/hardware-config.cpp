// file:    /src/hardware-config.cpp
// author:  SEKay

#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// create global brain instance to pring to brain screen
brain Brain;

// ports...change the numbers to match the ports where the
// motors are connected
const int FRONT_LEFT_MOTOR_PORT = 1;
const int FRONT_RIGHT_MOTOR_PORT = 2;
const int BACK_LEFT_MOTOR_PORT = 3;
const int BACK_RIGHT_MOTOR_PORT = 4;

// states
const bool LIFTED = false;


