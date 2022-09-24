#include <Stepper.h>
#include <Servo.h> 


const int stepsPerRevolution = 2048;  

Stepper bicicleta(stepsPerRevolution, 8,9,10,11);  
Servo comporta; 
Servo nuvens; 

void setup() {
  // velocidade maxima do motor byj48 eh 14 rpm
  bicicleta.setSpeed(14);
  nuvens.attach(6);
  comporta.attach(7);
}

void loop() {
  

  //desce tudo
  comporta.writeMicroseconds(2170);
  //delay(5000);  
  
  
  
  //volta de 2s sentido horario 180 graus
  comporta.writeMicroseconds(1800);
  delay(3500);  

  // para o servo
  //comporta.writeMicroseconds(1900);
  //delay(5000);  
  
  //volta de 4s sentido anti horario 360 graus
  comporta.writeMicroseconds(2150);
  delay(4400);  
  
  
}

