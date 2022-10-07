
// tempo de duracao da casa por volta de 50s
#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0

// rele
#define relay 19

SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2038;  

Stepper chapeu_teto(stepsPerRevolution, 2,3,4,5);  
Stepper chapeu_janela(stepsPerRevolution, 6,7,8,9);  
Stepper chapeu_cadeira_cima(stepsPerRevolution, 10,11,12,13);
Stepper chapeu_cadeira_baixo(stepsPerRevolution, 14,15,16,17);

Servo lareira;

void setup() {

  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init
  
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
  pinMode(14, OUTPUT);  
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(relay, OUTPUT);  

  chapeu_teto.setSpeed(14);
  chapeu_janela.setSpeed(14);
  chapeu_cadeira_cima.setSpeed(14);
  chapeu_cadeira_baixo.setSpeed(14);
  lareira.attach(18);
  //lareira.detach();

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

digitalWrite(relay, HIGH);


  int counter;
  for (counter = 0; counter <= 10; counter = counter + 1){
    comporta.attach(11);
    comporta.write(181);
    delay(54);
    comporta.detach();
  }

  delay(1000);

  for (counter = 0; counter <= 10; counter = counter + 1){
    comporta.attach(11);
    comporta.write(18);
    delay(50);
    comporta.detach();
  }
/*
  if (distance <= 40){

    mp3.play();


    //abre as janelas
    int counter;
    for (counter = 0; counter >= 5000; counter = counter + 10){
    porta_dir.step(1);
    porta_esq.step(-1);
    delay(10);     
    }    

    //espera 15s com a luz funcionando
    delay(15000);
    //10s com a luz apagada
    delay(10000);

    // sobe a comporta em 10s
    for (counter = 0; counter >= 3; counter = counter + 1){
    comporta.write(-400);
    delay(10);     
    }    


    
    //fecha as janelas
    for (counter = 0; counter >= 5000; counter = counter + 10){
    porta_dir.step(-1);
    porta_esq.step(1);
    delay(10);     
    }    
    mp3.stop();

  }
 */ 
  //delay(100);
}
