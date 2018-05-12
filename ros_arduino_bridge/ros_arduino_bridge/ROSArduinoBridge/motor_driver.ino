#include "DualL298PMotorShield.h"

/* Create the motor driver object */
DualL298PMotorShield drive;
/* Wrap the motor driver initialization */
void initMotorController() {
  drive.init();
}

/* Wrap the drive motor set speed function */
void setMotorSpeed(int i, int spd) {
  if (i == LEFT) drive.setM1Speed(spd);
  else drive.setM2Speed(spd);
}

// A convenience function for setting both motor speeds
void setMotorSpeeds(int leftSpeed, int rightSpeed) {
  setMotorSpeed(LEFT, leftSpeed);
  setMotorSpeed(RIGHT, rightSpeed);
//  Serial.println("setMotorSpeeds.output");
//  Serial.println(leftSpeed);
//  Serial.println("setMotorSpeeds.output");
//  Serial.println(rightSpeed);
}