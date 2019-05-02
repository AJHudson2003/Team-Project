
/*
4.30.19
AJ Hudson
Joe Hill


This program is going to make an RGB light change into four different 
colors in different patterns

we gotton the code from this youtuber 
Autodesk Tinkercad and they also used blockes

*/

int counter;

void setup() {
  pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
}

void loop() {
  for (counter = 0, counter < 10;  ++counter;)  {
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
    analogWrite(10, 105);
    analogWrite(9, 166);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 5);
    analogWrite(10, 255);
    analogWrite(9, 40);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 10);
    analogWrite(10, 50);
    analogWrite(9, 255);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 0);
    analogWrite(10, 0);
    analogWrite(9, 0);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 1);
    analogWrite(10, 5);
    analogWrite(9, 20);
    delay(1000); // wait 1000 milliseconds
    analogWrite(11, 230);
    analogWrite(10, 115);
    analogWrite(9, 176);
  }

}
