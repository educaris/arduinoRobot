#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);

void setup() {
  // put your setup code here, to run once:
AFMS.begin();
myMotor->setSpeed(100);
}

void loop() {
myMotor->run(FORWARD);
delay(1000);
myMotor->run(BACKWARD);
delay(1000);
}
