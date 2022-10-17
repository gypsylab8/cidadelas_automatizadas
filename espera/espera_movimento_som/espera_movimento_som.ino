#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0
// pinos do sensor de presenca
#define trigPin 14
#define echoPin 15

#define commPin 10

// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2048;  

Stepper porta(stepsPerRevolution, 2,3,4,5);  
Servo livro_1;
Servo livro_2;
Servo livro_3;
Servo arvore;

void setup() {

  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init

  // pinos do sensor de presenca
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);;

  porta.setSpeed(14);
  livro_1.attach(6);
  livro_2.attach(7);
  livro_3.attach(8);
  arvore.attach(9);
  //comporta.detach();

}

void loop() {
 
 /* 
  
  // partes do sensor de presenca
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  //Serial.print("Distance: ");
  //Serial.println(distance);
  
  if (distance <= 40) {

   // avise o outro arduino
  digitalWrite(commPin, HIGH);

 //toca mp3
 
 mp3.play();

   //abre a porta em 10s
  for (int counter = 0; counter >= 512; counter = counter + 1){
    porta.step(1);
    delay(19);     
  }   
   
   
  // para mp3
  mp3.stop();
  
  //fecha a porta em 10s
  for (int counter = 0; counter >= 512; counter = counter + 1){
    porta.step(-1);
    delay(19);     
  }    
  
  // avisa o outro arduino que acabou
  digitalWrite(commPin, LOW);
 
  delay(1000);
}
*/

//movimento da arvore
/*int pos;
 for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    arvore.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(30);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    arvore.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(30);                       // waits 15ms for the servo to reach the position 
  } 
*/



// espera 3s
delay(3000);

// abre livro 1:
livro_1.write(90);
delay(5000);
//fecha livro 1:
livro_1.write(180);
delay(2000);

// abre livro 2:
livro_2.write(90);
delay(3000);
livro_2.write(180);
delay(2000);

// abre livro 3:
livro_3.write(90);
delay(4000);
livro_3.write(180);
delay(2000);

delay(9000);

// nasce a arvore em 15s
int pos;
 for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    arvore.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(80);                       // waits 15ms for the servo to reach the position 
  } 
 
 
 //fecha a porta em 10s
for (int counter = 0; counter >= 512; counter = counter + 1){
porta.step(-1);
delay(19);     
}    
 
 // fecha a arvore
 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    arvore.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(80);                       // waits 15ms for the servo to reach the position 
  } 

   // avise o outro arduino que acabou
  digitalWrite(commPin, LOW);




}
