// tempo de duracao da casa por volta de 56s
//foco no fogao, ai na chaleira, ai na casa, e ai no fogao tremulando
// e a luz por fim varia um pouco no ambiente

#include <Servo.h>
#include <Stepper.h>
#include "SerialMP3Player.h"
#include <SoftwareSerial.h>

// pinos do shield mp3
#define TX 1
#define RX 0

const int stepsPerRevolution = 2038;
SerialMP3Player mp3(RX,TX);

Stepper passos_girar_esquerda(stepsPerRevolution, 2, 3, 4, 5);
Stepper passos_girar_direita(stepsPerRevolution, 6, 7, 8, 9);
Stepper passos_gira_e_volta(stepsPerRevolution, 10, 11, 12, 13);
Servo colheres_parede;


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

  colheres_parede.attach(14);
  passos_girar_esquerda.setSpeed(14);
  passos_girar_direita.setSpeed(14);
  passos_gira_e_volta.setSpeed(14);
}


void loop() {
 
  
  /*
  int counter = 0; 
  //for de 10s delay(10000)
  
 //passos_girar_esquerda.step(3000);
 
 
  //for de 1s
  for (counter = 0; counter == 1000; counter = counter + 1){
    passos_girar_esquerda.step(-1);
    passos_girar_direita.step(1);
    delay(100);
  }
  */
  delay(3000);
  
  //for de 15s delay(15000)
  
  //for de 15s delay(15000)
  
}
