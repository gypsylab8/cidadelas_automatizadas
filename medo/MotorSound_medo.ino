#include <Servo.h>


// tempo de duracao da casa por volta de 50s
#include "SerialMP3Player.h"
#include <SoftwareSerial.h>


// pinos do shield mp3
#define TX 12
#define RX 11
// pinos do sensor de presenca
#define trigPin A0
#define echoPin A1

#define commPin A3


// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

Servo tombador;
Servo tombador1;


void setup() {

  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init

  // pinos do sensor de presenca
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(commPin, OUTPUT); // Sets the echoPin as an Input
  pinMode(13, OUTPUT); // Sets the echoPin as an Input

  digitalWrite(commPin, LOW);

  tombador.attach(9);
  tombador1.attach(10);

}

void loop() {

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
  Serial.println(distance);
  
  
  if (distance <= 30){
    // avisa o outro arduino
    analogWrite(commPin, 1024);
    digitalWrite(13, HIGH);

    mp3.play();
    
    delay(5000);
    analogWrite(commPin, 0);
    digitalWrite(13, LOW);
    
  for(int x=0; x<8;x++){    
    tombador.write(0);
    delay(random(1000,2000));
    tombador1.write(50);
    delay(random(1000,3000));
    tombador1.write(0);
    delay(random(1000,2000));    
    tombador.write(50);
    delay(random(1000,3000));
  }
    tombador.detach();
    tombador1.detach();
    mp3.stop();  
  } else {
  analogWrite(commPin, 0);
  digitalWrite(13, LOW);
  }
  delay(10);
}
