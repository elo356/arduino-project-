#include "Stepper.h"

int stepsPerRevolution = 2048;
int motorSpeed = 10;
Stepper s(stepsPerRevolution, 34, 35, 32, 33);

void setup()
{
 s.setSpeed(motorSpeed);
}

void loop() {
s.step(stepsPerRevolution);
}
