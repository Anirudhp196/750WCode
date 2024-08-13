#pragma once

#include "EZ-Template/drive/drive.hpp"

#define DRIVE_SPEED 110 // This is 110/127 (around 87% of max speed).  We don't suggest making this 127.
                             // If this is 127 and the robot tries to heading correct, it's only correcting by
                             // making one side slower.  When this is 87%, it's correcting by making one side
                             // faster and one side slower, giving better heading correction.
#define TURN_SPEED  90 // Turn speed...for consistency
#define SWING_SPEED  90 // Swing speed...for consistency



extern Drive chassis;
extern Drive chassis;
extern pros::Motor cata;
extern pros::Motor intake;
extern pros::ADIDigitalOut wings;

void auton_period();
void close_to_home_goal();
void five_ball();
void away_from_goal();
void prog_skills();
void drive_example();
void turn_example();
void drive_and_turn();
void wait_until_change_speed();
void swing_example();
void combining_movements();
void interfered_example();

void default_constants();
void one_mogo_constants();
void two_mogo_constants();
void exit_condition_defaults();
void modified_exit_condition();