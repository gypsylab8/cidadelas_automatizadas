

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{
  //volta de 2s sentido horario 180 graus
  myservo.writeMicroseconds(1800);
  delay(2000);  

  // para o servo
  myservo.writeMicroseconds(1900);
  delay(2000);  
  
  //volta de 4s sentido anti horario 360 graus
  myservo.writeMicroseconds(2040);
  delay(2000);  
  delay(1300);  
  
    // para o servo
  myservo.writeMicroseconds(1900);
  delay(2000);  
  
  
  //volta de 2s sentido horario 180 graus
  myservo.writeMicroseconds(1800);
  delay(2100);
 
  
} 
