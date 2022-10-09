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


// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

Servo lado_direito;
Servo lado_esquerdo;


void setup() {

  //Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init

  // pinos do sensor de presenca
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  lado_direito.attach(2);
  lado_esquerdo.attach(3);

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
  
  
  if (distance <= 40){

    mp3.play();

    porta.step(stepsPerRevolution/4); // abre
    digitalWrite(relay, LOW);
    barco.step(stepsPerRevolution*11.62);  //*11.62); // move o barco por 50s
    digitalWrite(relay, HIGH);
    
    porta.step(-stepsPerRevolution/4); // fecha    
    mp3.stop();

  }
 */
   lado_esquerdo.write(0);


  lado_direito.write(0);
  delay(1000);
    lado_direito.write(50);
  delay(1000);

 //lado_esquerdo.write(0); 
  //delay(3000);
    //lado_direito.write(100);

}
