
/*
4.30.19
AJ Hudson
Joe Hill


this will allouw the light to chnage with how much light is over the sensor

we gotton the code from this youtuber 
Autodesk Tinkercad and they also used blockes

*/



int sensorValue = 0;

void setup()
{
    pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
   // read the value from the sensor
  sensorValue = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorValue);
    // map the sensor reading to a range for the LED
  analogWrite(9, map(sensorValue, 0, 1023, 0, 255));


}
