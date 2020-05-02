
#include "IRremote.h"
int receiver = 11; 

// Codigo de programacion para la arduino mega hecho por el grupo #03 de Ingenieria en Sistemas, de la Universidad Mariano Galvez de Guatemala. 
// Curso: Arquitectura I
#include <Servo.h>
IRrecv irrecv(receiver);     
decode_results results;   

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;
Servo myservo8;


//int pos =45; // nos da la poscision del servo    
//int det = 90; // variable asignada a la posicion 90 del servo
//int par = 30; // variable asignada a la posicion 30 del servo

void setup() {
Serial.begin(9600);
irrecv.enableIRIn(); 

  myservo.attach(2);  // pines para la arduino
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  myservo7.attach(8);
  myservo8.attach(9);
  
}


void loop()  
{
  //Parte del codigo que hace las posiciones de las patas segun los grados.
  if (irrecv.decode(&results)) 
 
  {
    switch(results.value)

    // nota siempre poner el correlativo 0x00 luego del codigo de tecla.
    {

      case 0x002FD9868: Serial.println("Tecla: Encendido"); 
   
     void pararse();
    break;
      case 0x002FD9867: Serial.println("Tecla: Arriba"); 
    

    for (int i=0;i<10;i=i+1){
    myservo.write(110);
    myservo2.write(110);
    myservo3.write(110);
    myservo4.write(110);
    myservo5.write(110);
    myservo6.write(110);
    myservo7.write(110);
    myservo8.write(110);

    delay(50);
    }
     for (int i=0;i<10;i=i+1){
     myservo.write(50);
    myservo2.write(50);
    myservo3.write(50);
    myservo4.write(50);
    myservo5.write(50);
    myservo6.write(50);
    myservo7.write(50);
    myservo8.write(50);
        delay(50);
     }

  
                       break;
      case 0x002FD7887: Serial.println("Tecla: Izquierda");    
      myservo.write(45);
      myservo2.write(130);
      myservo3.write(45);
      myservo4.write(130);
       myservo5.write(45);
      myservo6.write(130);
      myservo7.write(45);
      myservo8.write(130);
                       break;
      case 0x002FDDA25: Serial.println("Tecla: OK");  
      myservo.write(90);  
      myservo2.write(90);
        myservo3.write(90);  
      myservo4.write(90);
       myservo5.write(90);  
      myservo6.write(90);
       myservo7.write(90);  
      myservo8.write(90);
      
      
                       break;
      case 0x002FD58A7: Serial.println("Tecla: Derecha"); 
     /*
      myservo.write(45);
      myservo2.write(150);
      myservo3.write(45);
      myservo4.write(150); 
      myservo5.write(45);
      myservo6.write(150); 
      myservo7.write(45);
      myservo8.write(150);
      */
      for (int i=0;i<10;i=i+1){
        /* Movimiento hacia afuera
      myservo.write(45);
      myservo2.write(150);
      myservo3.write(45);
      myservo4.write(150);  
*/

      myservo.write(110);
      myservo2.write(45);
      myservo3.write(110);
      myservo4.write(45); 


      
      delay(50);
      }

      
      for (int i=0;i<10;i=i+1){
      /*
      myservo5.write(45);
      myservo6.write(150); 
      myservo7.write(45);
      myservo8.write(150);
      */

      myservo5.write(45);
      myservo6.write(180); 
      myservo7.write(45);
      myservo8.write(180);
      }
      
      
                       break;
      case 0x002FDB847: Serial.println("Tecla: Abajo"); 
      myservo.write(50);
      myservo2.write(50);
       myservo3.write(50);
      myservo4.write(50);
       myservo5.write(50);
      myservo6.write(50);
      myservo7.write(50);
      myservo8.write(50);
                       break;
    }
    irrecv.resume();
  }  
  delay(300);
}
/*
// codigo para agacharse
void Agacha()  {
    myservo.write(par); 
     myservo2.write(par);
     myservo3.write(par);
     myservo4.write(par);
     myservo5.write(par);
    myservo6.write(par);
     myservo7.write(par);
    myservo8.write(par);
    delay(100);                       
  }


*/
