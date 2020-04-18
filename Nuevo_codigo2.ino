

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;
Servo myservo8;


int pos = 45; // nos da la poscision del servo    
int det = 45;  
void setup() {
  myservo.attach(2);  // pines para la arduino
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  myservo7.attach(8);
  myservo8.attach(9);
}

// codigo para agacharse y levantarse
void loop()  {
  for (pos = 0;pos <= 45; pos += 1) { 
    myservo.write(pos); 
     myservo2.write(pos);
     myservo3.write(pos);
     myservo4.write(pos);
     myservo5.write(pos);
     myservo6.write(pos);
     myservo7.write(pos);
     myservo8.write(pos);
    delay(50);                       // tiempo
  }
  for (pos = 45; pos >= 0; pos -= 1) { // bucles de movimiento de patas
    myservo.write(pos);   
    myservo2.write(pos);
    myservo3.write(pos); 
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    myservo7.write(pos);
    myservo8.write(pos);
    delay(50);                       
  }
}

void Inmovil (){ // Mantiene en una sola posicion el robot sin que este se mueva.
     myservo.write(det); 
     myservo2.write(det);
     myservo3.write(det);
     myservo4.write(det);
     myservo5.write(pos);
     myservo6.write(pos);
     myservo7.write(pos);
     myservo8.write(pos);
     //estado detendio
}
