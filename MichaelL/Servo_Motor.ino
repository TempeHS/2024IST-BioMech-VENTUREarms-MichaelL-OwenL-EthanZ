#include <Servo.h>
#include "Ultrasonic.h"

Servo myServo; 

static unsigned int DegreeOfMovement = 180;   
static unsigned int myServoPin = 7;
static unsigned int myUSPin = 6;

Ultrasonic myUSsensor(myUSPin);

void setup() {
  myServo.attach(myServoPin);
  Serial.begin(9600);
  Serial.write(DegreeOfMovement);
  
}

void loop() {

   unsigned long rangeInCM = myUSsensor.MeasureInCentimeters();
  Serial.println(rangeInCM);

  if (rangeInCM <= 3) {
   myServo.write(0);
   delay(2500);
   myServo.write(180);
   delay(1500);
  } else {
   myServo.write(180);
 }

}
