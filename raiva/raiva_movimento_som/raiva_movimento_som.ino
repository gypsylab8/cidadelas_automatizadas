//precisa programar a sincronia entre os arduinos

#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0

#define commPin 19

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

  pinMode(commPin, INPUT);
  //pinMode(initPin, INPUT); 
  //pinMode(endPin, OUTPUT);  
  
  comporta_fundo.setSpeed(14);
  comporta_meio.setSpeed(14);
  comporta_frente.setSpeed(14);
  bochechas.setSpeed(14);
  
  lingua.attach(18);
  //lingua.detach();

}

void loop() {
  
  if (commPin == HIGH){

  mp3.play();
  
  // ADICIONAR FUNCAO DE ABRIR PORTA AQUI  
  delay(5000);
  
  
  comporta_frente.setSpeed(5);
  comporta_frente.step(2038);
  
  comporta_meio.setSpeed(5);
  comporta_meio.step(2038);

  comporta_fundo.setSpeed(5);
  comporta_fundo.step(2038);  
  
  delay(300);  
  
  for (int i = 0; i <= 12; i = i + 1){
    
  lingua.write(0);
  bochechas.step(20);
  delay(10);
  lingua.write(20); 
  bochechas.step(20);
  delay(10);
  lingua.write(40);
  bochechas.step(20);
  delay(10);
  lingua.write(60); 
  bochechas.step(20);
  delay(10);
  lingua.write(80);
  bochechas.step(20);
  delay(10);
  lingua.write(100); 
  bochechas.step(20);
  delay(10); 
  lingua.write(120);
  bochechas.step(20);
  delay(10);
  lingua.write(140); 
  bochechas.step(20);
  delay(10);
  lingua.write(160);
  bochechas.step(20);
  delay(10);
  lingua.write(180); 
  bochechas.step(20);
  delay(10);
 
  lingua.write(180);
  bochechas.step(20);
  delay(10);
  lingua.write(160); 
  bochechas.step(20);
  delay(10);
  lingua.write(140);
  bochechas.step(20);
  delay(10);
  lingua.write(120); 
  bochechas.step(20);
  delay(10);
  lingua.write(100);
  bochechas.step(20);
  delay(10);
  lingua.write(80); 
  bochechas.step(20);
  delay(10); 
  lingua.write(60);
  bochechas.step(20);
  delay(10);
  lingua.write(40); 
  bochechas.step(20);
  delay(10);
  lingua.write(20);
  bochechas.step(20);
  delay(10);
  lingua.write(0); 
  bochechas.step(20);
  delay(10);
 
  }
  
  
  for (int j = 0; j <= 2038; j = j + 1){
  comporta_fundo.step(-1);
  comporta_meio.step(-1);
  comporta_frente.step(-1);
  }

  mp3.stop();  
  delay(3000);
  }
}
