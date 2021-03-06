#include <Servo.h>
#include "IRremote.h"
int receiver = 11; 

// Codigo de programacion para la arduino mega hecho por el grupo #03 de Ingenieria en Sistemas, de la Universidad Mariano Galvez de Guatemala. 
// Curso: Arquitectura I
#include <Servo.h>
IRrecv irrecv(receiver);     
decode_results results;   

Servo myservo;
Servo myservo2;
/*
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;
Servo myservo8;
*/
/*
//int pos = 45; // nos da la poscision del servo    
int det = 45; // variable asignada a la posicion 45 del servo
int par = 0; // variable asignada a la posicion 45 del servo
*/
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  myservo.attach(6);  // pines para la arduino
  

  
  myservo.attach(3);  // pines para la arduino
  myservo2.attach(2);
  /*
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  myservo7.attach(8);
  myservo8.attach(9);
  */
}


void loop()  
{
  //Parte del codigo que hace las posiciones de las patas segun los grados.
  if (irrecv.decode(&results)) 
 
  {
    switch(results.value)

    // nota siempre poner el correlativo 0x00 luego del codigo de tecla.
    {
      case 0x002FD9867: Serial.println("Tecla: Arriba"); 
    myservo.write(110);
    myservo2.write(110);
    
  
                       break;
      case 0x002FD7887: Serial.println("Tecla: Izquierda");    
      myservo.write(45);
      myservo2.write(130);
                       break;
      case 0x002FDDA25: Serial.println("Tecla: OK");  
      myservo.write(90);  
      myservo2.write(90);
                       break;
      case 0x002FD58A7: Serial.println("Tecla: Derecha"); 
      myservo.write(45);
      myservo2.write(150); 
                       break;
      case 0x002FDB847: Serial.println("Tecla: Abajo"); 
      myservo.write(50);
      myservo2.write(50);
                       break;
    }
    irrecv.resume();
  }  
  delay(300);
}



/*
// codigo para agacharse y levantarse 
void pararse()  {
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


/*
void parado (){ // Mantiene en una sola posicion el robot sin que este se mueva.
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
void Agacharse(){ // pone a cero los servos y en consecuencia agacha el robot
  myservo.write(par);
  myservo2.write(par);
  myservo3.write(par);
  myservo4.write(par);
  myservo5.write(par);
  myservo6.write(par);
  myservo7.write(par);
  myservo8.write(par);
  
}

*/

/*void loop()  {
  for (pos = 0;pos <= 45; pos += 1) {  // bucle que sube y baja la variable pos
     // Aqui se definen los servos que se poscionaran en este caso son los que estan en los pines,  (2,3 y 6,7) 
     myservo.write(pos); 
     myservo2.write(pos);
     myservo5.write(pos);
     myservo6.write(pos);
    
    delay(50);                       // tiempo
  }
  for (pos = 45; pos >= 0; pos -= 1) { // bucle que sube y baja la variable pos

   // Aqui se definen los servos que se poscionaran en este caso son los que estan en los pines,  (4,5 y 8,9) 
    myservo3.write(pos); 
    myservo4.write(pos);
    myservo7.write(pos);
    myservo8.write(pos);
    delay(50);  
                         
  }
}
*/
