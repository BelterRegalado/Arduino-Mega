/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;


int pos = 45;    // variable to store the servo position

void setup() {
  myservo.attach(2);  // pines para la arduino
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
}

void loop() {
  for (pos = 0; pos <= 45; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos); 
     myservo2.write(pos);
     myservo3.write(pos);
     myservo4.write(pos);
    delay(50);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 45; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);   
    myservo2.write(pos);
    myservo3.write(pos); 
    myservo4.write(pos);
    delay(50);                       // waits 15ms for the servo to reach the position
  }
}
