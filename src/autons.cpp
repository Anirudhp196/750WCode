#include "main.h"

// CF stands for Conversion Factor (Between Pathy and VEX irl field distances)
double cf = 1;

/////
// Made with Pathy:
// https://750w.github.io/pathy
/////

void away_from_goal()
{

  chassis.set_drive_pid(50, DRIVE_SPEED);
  chassis.wait_drive();

  intake = -INTAKE_SPEED;
  pros::delay(500);
  intake = 0;

  //chassis.set_turn_pid(35, TURN_SPEED);
  //chassis.wait_drive();

  wings.set_value(true);
  pros::delay(700);

  chassis.set_drive_pid(-40, DRIVE_SPEED);
  chassis.wait_drive();

  //chassis.set_turn_pid(-6, TURN_SPEED);
  //chassis.wait_drive();

  //chassis.set_drive_pid(-55, DRIVE_SPEED);
  //chassis.wait_drive();

  chassis.set_turn_pid(-46, 45);
  chassis.wait_drive();

  wings.set_value(false);

  chassis.set_turn_pid(-30, TURN_SPEED);
  pros::delay(1000);

  /*chassis.set_drive_pid(-168, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-10, TURN_SPEED);
  chassis.wait_drive();

  wings.set_value(true);

  chassis.set_drive_pid(-50, DRIVE_SPEED);
  chassis.wait_drive();

  // chassis.reset_gyro();

  // chassis.set_drive_pid(10,DRIVE_SPEED);
  // chassis.wait_drive();

  chassis.set_turn_pid(-65, TURN_SPEED);
  chassis.wait_drive();

  wings.set_value(false);*/

  chassis.set_drive_pid(-107, DRIVE_SPEED);
  chassis.wait_drive();

  /*chassis.set_turn_pid(160, TURN_SPEED);
  chassis.wait_drive();
  chassis.set_drive_pid(-84, DRIVE_SPEED);
  chassis.wait_drive();
  chassis.set_turn_pid(200, TURN_SPEED);
  chassis.wait_drive();
  chassis.set_drive_pid(-35, DRIVE_SPEED+10);
  chassis.wait_drive();
  chassis.set_drive_pid(35,DRIVE_SPEED);
  chassis.wait_drive();
  chassis.set_turn_pid(160,TURN_SPEED);
  chassis.wait_drive();
  wings.set_value(true);
  chassis.set_drive_pid(45,DRIVE_SPEED);
  chassis.wait_drive();
  pros::delay(500);
  chassis.reset_gyro();
  chassis.set_turn_pid(-40, TURN_SPEED);
  chassis.wait_drive();
  wings.set_value(false);
  chassis.reset_gyro();
  chassis.set_turn_pid(90, TURN_SPEED);
  chassis.wait_drive();
  chassis.set_drive_pid(-90, DRIVE_SPEED);
  chassis.wait_drive();*/
}

void five_ball()
{

  chassis.set_drive_pid(12, DRIVE_SPEED);
  chassis.wait_drive();

  intake = INTAKE_SPEED;

  chassis.set_drive_pid(-90, 127);
  chassis.wait_drive();

  chassis.set_turn_pid(-20, TURN_SPEED);
  chassis.wait_drive();

  wings.set_value(true);
  pros::delay(500);

  chassis.set_drive_pid(-60, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-70, DRIVE_SPEED);
  chassis.wait_drive();

  wings.set_value(false);

  chassis.set_drive_pid(-55, 127);
  chassis.wait_drive();

  chassis.set_drive_pid(20, 127);
  chassis.wait_drive();

  chassis.set_turn_pid(105, TURN_SPEED);
  chassis.wait_drive();

  intake = -INTAKE_SPEED;

  chassis.set_drive_pid(40, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-60, DRIVE_SPEED);
  chassis.wait_drive();

  intake = 0;

  chassis.set_turn_pid(50, TURN_SPEED);
  chassis.wait_drive();

  intake = INTAKE_SPEED;

  chassis.set_drive_pid(180, DRIVE_SPEED);
  chassis.wait_drive();

  /*

  chassis.set_turn_pid(135, TURN_SPEED);
  chassis.wait_drive();

  intake = -INTAKE_SPEED;
  pros::delay(200);

  intake = INTAKE_SPEED;

  chassis.set_turn_pid(80, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(80, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(45, TURN_SPEED);
  chassis.wait_drive();

  intake = INTAKE_SPEED;

  chassis.set_drive_pid(180, DRIVE_SPEED);
  chassis.wait_drive();*/

  pros::delay(200);

  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();

  wings.set_value(true);

  chassis.set_drive_pid(-90, DRIVE_SPEED);
  chassis.wait_drive();

  wings.set_value(false);

  chassis.set_drive_pid(30, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(180, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(30, DRIVE_SPEED);
  chassis.wait_drive();
}

void close_to_home_goal()
{

  chassis.set_drive_pid(105, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(40, TURN_SPEED);
  chassis.wait_drive();

  intake = -INTAKE_SPEED;
  pros::delay(500);

  chassis.set_turn_pid(-52, TURN_SPEED);
  chassis.wait_drive();

  intake = INTAKE_SPEED;

  chassis.set_drive_pid(92, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-95, TURN_SPEED);
  chassis.wait_drive();

  wings.set_value(true);

  chassis.set_drive_pid(-90, DRIVE_SPEED);
  chassis.wait_drive();

  wings.set_value(false);

  chassis.set_drive_pid(25, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(90, TURN_SPEED);
  chassis.wait_drive();

  intake = -INTAKE_SPEED;
  pros::delay(300);

  chassis.reset_gyro();

  intake = 0;

  chassis.set_turn_pid(140, TURN_SPEED);
  chassis.wait_drive();

  intake = INTAKE_SPEED;

  chassis.set_drive_pid(100, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-30, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(120, DRIVE_SPEED);
  chassis.wait_drive();

  intake = 0;
  pros::delay(500);
  intake = -INTAKE_SPEED;

  chassis.set_drive_pid(-30, DRIVE_SPEED);
  chassis.wait_drive();
}

void prog_skills()
{

  // Turn on Catapult (30 sec)
  cata = CATA_SPEED;
  pros::delay(34 * 1000);
  cata = 0;
  // Turn Right & Move to opponents side
  chassis.set_turn_pid(216, TURN_SPEED);
  chassis.wait_drive();
  chassis.set_drive_pid(-260, 127);
  chassis.wait_drive();

  chassis.reset_gyro();

  chassis.set_turn_pid(-45, TURN_SPEED);
  chassis.wait_drive();
  chassis.set_drive_pid(-75, DRIVE_SPEED);
  chassis.wait_drive();
  chassis.set_turn_pid(-90, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-60, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(40, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-50, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.reset_gyro();

  chassis.set_turn_pid(20, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(60, DRIVE_SPEED);
  chassis.wait_drive();

  // Turn Left & Move Forward
  chassis.set_turn_pid(135, TURN_SPEED);
  chassis.wait_drive();
  chassis.set_drive_pid(160, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.reset_gyro();

  // Turn towards Goal
  chassis.set_turn_pid(-45, TURN_SPEED);
  chassis.wait_drive();

  // Open Wings
  wings.set_value(true);

  // Drive into Goal
  chassis.set_drive_pid(-100, 127);
  chassis.wait_drive();

  chassis.set_drive_pid(80, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-65, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-90, 127);
  chassis.wait_drive();

  chassis.set_drive_pid(80, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-25, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-90, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(80, DRIVE_SPEED);
  chassis.wait_drive();

  wings.set_value(false);
}

void auton_period()
{
  // Get off the wall
  chassis.set_drive_pid(24, DRIVE_SPEED);
  chassis.wait_drive();
  // Turn to face match loading zone
  chassis.set_turn_pid(-125, TURN_SPEED);
  chassis.wait_drive();
  // Go to match loading zone
  chassis.set_drive_pid(18, DRIVE_SPEED);
  chassis.wait_drive();
  // Turn on the cata
  cata = CATA_SPEED;
  pros::delay(30 * 1000);
  // Turn to face field center
  chassis.set_turn_pid(164, TURN_SPEED);
  chassis.wait_drive();
  // Go to field center
  chassis.set_drive_pid(64, DRIVE_SPEED);
  chassis.wait_drive();
  // Turn to face goal
  chassis.set_turn_pid(50, TURN_SPEED);
  chassis.wait_drive();
  // Extend wings
  wings.set_value(true);
  // Push triballs into goal
  chassis.set_drive_pid(63, DRIVE_SPEED);
  chassis.wait_drive();
  // Rotate
  chassis.set_turn_pid(16, TURN_SPEED);
  chassis.wait_drive();
  // Back up
  chassis.set_drive_pid(-63, DRIVE_SPEED);
  chassis.wait_drive();
  // Go forward
  chassis.set_drive_pid(63, DRIVE_SPEED);
  chassis.wait_drive();
  // Rotate counterclockwise.
  chassis.set_turn_pid(-32, TURN_SPEED);
  chassis.wait_drive();
  // Back up
  chassis.set_drive_pid(-63, DRIVE_SPEED);
  chassis.wait_drive();
  // Go forward
  chassis.set_drive_pid(63, DRIVE_SPEED);
  chassis.wait_drive();
}

///
// Constants
///

// It's best practice to tune constants when the robot is empty and with heavier game objects, or with lifts up vs down.
// If the objects are light or the cog doesn't change much, then there isn't a concern here.

void default_constants()
{
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void one_mogo_constants()
{
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void two_mogo_constants()
{
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void exit_condition_defaults()
{
  chassis.set_exit_condition(chassis.turn_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.swing_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.drive_exit, 80, 50, 300, 150, 500, 500);
}

void modified_exit_condition()
{
  chassis.set_exit_condition(chassis.turn_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.swing_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.drive_exit, 80, 50, 300, 150, 500, 500);
}

///
// Drive Example
///
void drive_example()
{
  // The first parameter is target inches
  // The second parameter is max speed the robot will drive at
  // The third parameter is a boolean (true or false) for enabling/disabling a slew at the start of drive motions
  // for slew, only enable it when the drive distance is greater then the slew distance + a few inches

  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_drive();

  chassis.set_drive_pid(-12, DRIVE_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-12, DRIVE_SPEED);
  chassis.wait_drive();
}

///
// Turn Example
///
void turn_example()
{
  // The first parameter is target degrees
  // The second parameter is max speed the robot will drive at

  chassis.set_turn_pid(90, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();
}

///
// Combining Turn + Drive
///
void drive_and_turn()
{
  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_drive();

  chassis.set_turn_pid(45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-24, DRIVE_SPEED, true);
  chassis.wait_drive();
}

///
// Wait Until and Changing Max Speed
///
void wait_until_change_speed()
{
  // wait_until will wait until the robot gets to a desired position

  // When the robot gets to 6 inches, the robot will travel the remaining distance at a max speed of 40
  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_until(6);
  chassis.set_max_speed(40); // After driving 6 inches at DRIVE_SPEED, the robot will go the remaining distance at 40 speed
  chassis.wait_drive();

  chassis.set_turn_pid(45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(-45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();

  // When the robot gets to -6 inches, the robot will travel the remaining distance at a max speed of 40
  chassis.set_drive_pid(-24, DRIVE_SPEED, true);
  chassis.wait_until(-6);
  chassis.set_max_speed(40); // After driving 6 inches at DRIVE_SPEED, the robot will go the remaining distance at 40 speed
  chassis.wait_drive();
}

///
// Swing Example
///
void swing_example()
{
  // The first parameter is ez::LEFT_SWING or ez::RIGHT_SWING
  // The second parameter is target degrees
  // The third parameter is speed of the moving side of the drive

  chassis.set_swing_pid(ez::LEFT_SWING, 45, SWING_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_until(12);

  chassis.set_swing_pid(ez::RIGHT_SWING, 0, SWING_SPEED);
  chassis.wait_drive();
}

///
// Auto that tests everything
///
void combining_movements()
{
  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_drive();

  chassis.set_turn_pid(45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_swing_pid(ez::RIGHT_SWING, -45, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();

  chassis.set_drive_pid(-24, DRIVE_SPEED, true);
  chassis.wait_drive();
}

///
// Interference example
///
void tug(int attempts)
{
  for (int i = 0; i < attempts - 1; i++)
  {
    // Attempt to drive backwards
    printf("i - %i", i);
    chassis.set_drive_pid(-12, 127);
    chassis.wait_drive();

    // If failsafed...
    if (chassis.interfered)
    {
      chassis.reset_drive_sensor();
      chassis.set_drive_pid(-2, 20);
      pros::delay(1000);
    }
    // If robot successfully drove back, return
    else
    {
      return;
    }
  }
}

// If there is no interference, robot will drive forward and turn 90 degrees.
// If interfered, robot will drive forward and then attempt to drive backwards.
void interfered_example()
{
  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_drive();

  if (chassis.interfered)
  {
    tug(3);
    return;
  }

  chassis.set_turn_pid(90, TURN_SPEED);
  chassis.wait_drive();
}

// . . .
// Make your own autonomous functions here!
// . . .