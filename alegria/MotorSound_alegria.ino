#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>

// pinos do shield mp3
#define TX 0
#define RX 1
// pinos do sensor de presenca
#define trigPin A0
#define echoPin A1


// declaracoes do sensor de presenca
long duration;
int distance;
int com = A7;
SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 100;  
Stepper janela_dir(stepsPerRevolution, 2,3,4,5);  
Stepper janela_esq(stepsPerRevolution, 6,7,8,9);  
Stepper fundo(stepsPerRevolution, 10,11,12,13);  


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

  pinMode(com, OUTPUT);
  
  janela_dir.setSpeed(14);
  janela_esq.setSpeed(14);
  fundo.setSpeed(200);
}

void play() {
  mp3.play();
  for(int x=0; x<200;x++){
    fundo.step(200);  //*11.62); // move o barco por 50s
    delay(2);
  }
  mp3.stop();  
  delay(3);
}

void loop(){
  fundo.step(200);
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
    
  if (distance <= 40){
    play();
    digitalWrite(com, HIGH);
    delay(1000);
    digitalWrite(com, LOW);
  }
}
