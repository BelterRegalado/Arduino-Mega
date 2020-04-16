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
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 45;    // variable to store the servo position

void setup() {
  myservo.attach(2);
  myservo2.attach(3);
}
  // attaches the servo on pin 9 to the servo object
  void loop(){
    myservo.write(pos);
    myservo2.write(pos);
  }
