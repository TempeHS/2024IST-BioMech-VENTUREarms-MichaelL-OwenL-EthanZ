void openGate () {
for (int i = 0; i <= 255; i++){
  myServo.write(i);
  delay(20);
}

}


void closeGate () {
myServo.write(0);
delay(20);

}

void readUS () {
rangeInCM = myUSsensor.MeasureInCentimeters();
Serial.println(rangeInCM);
}