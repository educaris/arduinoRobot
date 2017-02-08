#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *links = AFMS.getMotor(1);
Adafruit_DCMotor *rechts = AFMS.getMotor(2);

void setup() {
  // put your setup code here, to run once:
AFMS.begin();
rechts->setSpeed(100);
links->setSpeed(100);
}

void loop() {
links->run(FORWARD);
rechts->run(FORWARD);  
delay(1000);
links->run(BACKWARD);
rechts->run(BACKWARD);  
delay(1000);
}
