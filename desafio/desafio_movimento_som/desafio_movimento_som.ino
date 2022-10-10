
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

const int stepsPerRevolution = 2048;  

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
  //lareira.attach(18);
  //lareira.detach();

}

void loop() {

// recebe o sinal do outro arduino

 if (digitalRead(18) == HIGH){
 }


 
  // toca mp3

    mp3.play();

  
  // movimento dos chapeus e do fogo 
  
  //chapeu_teto.step(2048);
  //chapeu_janela.step(2048);
  //chapeu_teto.step(2048);
  //chapeu_cadeira_cima.step(2048);
  //chapeu_cadeira_baixo.step(2048);
  //chapeu_janela.setSpeed(14);
  //chapeu_cadeira_cima.setSpeed(14);
  //chapeu_cadeira_baixo.setSpeed(14);
  
  
  //digitalWrite(relay, LOW);
  lareira.attach(18);
  lareira.write(0);
  delay(500);
    lareira.write(70);
delay(800);
  lareira.detach();
  delay(1000);
  
  


  
  
  // 

 
 // para a musica
 
    mp3.stop();

  
  //delay(100);
}
