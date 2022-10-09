
#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0
// pinos do sensor de presenca
#define trigPin 15
#define echoPin 14

// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2038;  

Stepper estacas(stepsPerRevolution, 2,3,4,5);  
Stepper porta(stepsPerRevolution, 6,7,8,9);  
Stepper lua(stepsPerRevolution, 10,11,12,13);  
Servo balanca;

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
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(16, OUTPUT);

  estacas.setSpeed(14);
  porta.setSpeed(14);
  lua.setSpeed(14);
  balanca.attach(16);
  //balanca.detach();
  //balanca.write(0);

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
  Serial.print("Distance: ");
  Serial.println(distance);
  */


    mp3.play();
    
    
    estacas.step(stepsPerRevolution/2);
    
    
      for(int pos = 160; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    balanca.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  
  lua.step(1000);
  
  lua.step(-1000);
  
    //balanca.write(10);
    //delay(50);
    //balanca.write(9);

    mp3.stop();


  delay(3000);
}
