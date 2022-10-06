
#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0

// PRESTAR ATENÇAO NISSO AQUI
// PRESTAR ATENÇAO NISSO AQUI
// PRESTAR ATENÇAO NISSO AQUI
// PRESTAR ATENÇAO NISSO AQUI
// PRESTAR ATENÇAO NISSO AQUI
// PRESTAR ATENÇAO NISSO AQUI
// PRESTAR ATENÇAO NISSO AQUI
#define initPin A5
#define endPin A6



SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2038;  

Stepper comporta_fundo(stepsPerRevolution, 2,3,4,5);  
Stepper comporta_meio(stepsPerRevolution, 6,7,8,9);  
Stepper comporta_frente(stepsPerRevolution, 10,11,12,13);
Stepper bochechas(stepsPerRevolution, 14,15,16,17);
Servo lingua;

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
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(initPin, INPUT); 
  pinMode(endPin, OUTPUT);  
  
  comporta_fundo.setSpeed(14);
  comporta_meio.setSpeed(14);
  comporta_frente.setSpeed(14);
  bochechas.setSpeed(14);
  
  lingua.attach(18);
  //lingua.detach();

}

void loop() {

  /*
  if (digitalRead(initPin)== HIGH){
  
    
    
    // termina e manda o sinal pro outro arduino
    analogWrite(endPin, 255);
  }
  */
  
  mp3.play();
  
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


  mp3.stop();

}
