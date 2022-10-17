#include <Servo.h>


// tempo de duracao da casa por volta de 50s
#include "SerialMP3Player.h"
#include <SoftwareSerial.h>


// pinos do shield mp3
#define TX 1
#define RX 0
// pinos do sensor de presenca
#define trigPin 14
#define echoPin 15

#define commPin 16


// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

Servo tombador;


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

  tombador.attach(2);

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
  Serial.print("Distance: ");
  Serial.println(distance);
  
  
  if (distance <= 40){

    // avisa o outro arduino
    digitalWrite(commPin, HIGH);
    digitalWrite(13, HIGH);


    mp3.play();

    delay(17000);
    
    

      
  tombador.write(0);
  delay(1000);
    tombador.write(50);
  delay(1000);

  delay(8000);

delay(11000);

tombador.write(0);
  delay(5000);
  
  delay(7000);
  
    tombador.write(50);
  delay(1000);
  tombador.write(0);
  delay(1000);
  
  delay(5000);

  mp3.stop();
  
  digitalWrite(commPin, LOW);
  digitalWrite(c13, LOW);

  
  }
  
  delay(1000);
}
