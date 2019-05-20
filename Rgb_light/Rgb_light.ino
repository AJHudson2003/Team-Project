
/*
4.30.19
AJ Hudson
Joe Hill


the object will get closer and then will show the lights

*/

int distanceThreshold = 0;
int cm = 0;
int inches = 0
  
  long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

<<<<<<< HEAD
void loop() {
    for (counter = 0, counter < 20;  ++counter;)  {
    analogWrite(11, 255);
    analogWrite(10, 0);
    analogWrite(9, 0);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 255);
    analogWrite(10, 255);
    analogWrite(9, 255);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 255);
    analogWrite(10, 128);
    analogWrite(9, 0);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 51);
    analogWrite(10, 204);
    analogWrite(9, 255);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 1);
    analogWrite(10, 2);
    analogWrite(9, 199);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 220);
    analogWrite(10, 140);
    analogWrite(9, 120);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 35);
    analogWrite(10, 255);
    analogWrite(9, 46);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 19);
    analogWrite(10, 54);
    analogWrite(9, 255);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 1);
    analogWrite(10, 5);
    analogWrite(9, 20);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 230);
    analogWrite(10, 115);
    analogWrite(9, 176);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 66);
    analogWrite(10, 99);
    analogWrite(9, 102);
=======
void loop()
{
  // set threshold distance to activate LEDs
  distanceThreshold = 350;
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7, 6);
  if (cm > distanceThreshold) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
>>>>>>> 83ee68605ce64687d05c40f4bf0687757654a73f
  }
  if (cm <= distanceThreshold && cm > distanceThreshold - 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  if (cm <= distanceThreshold - 100 && cm > distanceThreshold - 250) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  if (cm <= distanceThreshold - 250 && cm > distanceThreshold - 350) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  if (cm <= distanceThreshold - 350) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(100); // Wait for 100 millisecond(s)
}

