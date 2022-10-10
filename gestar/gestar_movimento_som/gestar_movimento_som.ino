
// tempo de duracao da casa por volta de 50s
#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>

// pinos do shield mp3
#define TX 1
#define RX 0
// pinos do sensor de presenca
#define trigPin 14
#define echoPin 15
// pino rele bomba de agua
#define relay 10
#define commPin 11


// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2048;  
Stepper porta(stepsPerRevolution, 2,3,4,5);  
Stepper barco(stepsPerRevolution, 6,7,8,9);  


void setup() {

  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init

  // pinos do sensor de presenca
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  // pinos do motor da porta
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // pinos do motor do barco
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  // pino do relay
  pinMode(10, OUTPUT);

  // pino de comunicacao
  pinMode(commPin, OUTPUT);


  porta.setSpeed(14);
  barco.setSpeed(8);
  digitalWrite(relay, HIGH);
}

void loop() {

  // sensor de presenca
  
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
    
    // avisa o outro arduino
    digitalWrite(commPin, HIGH);
    
    // toca mp3    
    mp3.play();

    //abre a porta em 10s
    for (int counter = 0; counter >= 512; counter = counter + 1){
      porta.step(1);
      delay(19);     
    }    
    
    // move o barco por 30s;
    
    barco.step(stepsPerRevolution*4);
    
    // liga a agua e o barco vai devagar e rapido por 18 s:
    
    // liga o rele (setando LOW)
    digitalWrite(relay, LOW);
    
    // 6s
    barco.setSpeed(10);
    barco.step(stepsPerRevolution);
    
    // 4.28s
    barco.setSpeed(14);
    barco.step(stepsPerRevolution);
    
    // 3s
    barco.setSpeed(10);
    barco.step(stepsPerRevolution/2);

    // 2s
    barco.setSpeed(6);
    barco.step(stepsPerRevolution/5);

    // 4.28s
    barco.setSpeed(14);
    barco.step(stepsPerRevolution);    
    
    // desliga o rele (setando HIGH)
    digitalWrite(relay, HIGH);
    
    //fecha a porta em 10s
    for (int counter = 0; counter >= 512; counter = counter + 1){
      porta.step(-1);
      delay(19);     
    }    
    
    // avisa o outro arduino
    digitalWrite(commPin, LOW);

    // para a musica
    mp3.stop();

  }
  
}
