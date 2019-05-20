
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
  }

}
