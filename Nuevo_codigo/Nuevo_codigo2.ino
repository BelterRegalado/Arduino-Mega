

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;


int pos = 45; // nos da la poscision del servo    
int det = 45;  
void setup() {
  myservo.attach(2);  // pines para la arduino
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
}

void loop()  {
  for (pos = 0;pos <= 45; pos += 1) { 
    myservo.write(pos); 
     myservo2.write(pos);
     myservo3.write(pos);
     myservo4.write(pos);
    delay(50);                       // tiempo
  }
  for (pos = 45; pos >= 0; pos -= 1) { // bucles de movimiento de patas
    myservo.write(pos);   
    myservo2.write(pos);
    myservo3.write(pos); 
    myservo4.write(pos);
    delay(50);                       
  }
}

void Inmovil (){
     myservo.write(det); 
     myservo2.write(det);
     myservo3.write(det);
     myservo4.write(det);
     //estado detendio
}
