
// essa casa recebe o sinal do arduino da luz

#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0

#define dirPin 15
#define stepPin 14

SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2048;  

Stepper bicicleta(stepsPerRevolution, 2,3,4,5);  
Stepper janela_esq(stepsPerRevolution, 6,7,8,9);  
Stepper janela_dir(stepsPerRevolution, 10,11,12,13);  
//Servo comporta; // pinos 14, 15, 16
Servo nuvens; // pino 17
int pos = 0;

void setup() {

  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init

  // pinos do motor da bicicleta
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // pinos do motor da porta direita
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  // pinos do motor da porta esquerda A2-A5
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(14, OUTPUT);  
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);

  // PINO DE COMUNICACAO
  pinMode(18, INPUT);

  bicicleta.setSpeed(14);
  janela_esq.setSpeed(14);
  janela_dir.setSpeed(14);
digitalWrite(stepPin, LOW);
digitalWrite(dirPin, LOW);
}

void loop() {
  
  
 // comunicacao com o outro arduino
 if (digitalRead(18) == HIGH){
 }
 
 // toca mp3
 
 //mp3.play();

 // abrir janelas
 
 //abre as janelas em 10s
/*int counter;
for (int counter = 0; counter >= 512; counter = counter + 1){
janela_dir.step(1);
janela_esq.step(-1);
delay(19);     
}*/    


// aguarda 12 s pra luz fazer sua magica

//delay(12000);
 
 // sobe o sotao em 8 seg:
 
  // Set the spinning direction clockwise:
  //digitalWrite(dirPin, LOW);


 //Spin the stepper motor 5 revolutions fast:
 /* for (int i = 0; i < 200; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(15000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(15000);
  }*/

  nuvens.attach(17);
  nuvens.write(182);
  
    
  for (int i = 0; i <= 7; i = i + 1){
    for (int j = 0; j <=2048; j = j + 1){
      bicicleta.step(1);
    }
  }
    nuvens.detach();
 
   
   // desce o sotao em 8 s
   
   // Set the spinning direction clockwise:
  //digitalWrite(dirPin, HIGH);


 //Spin the stepper motor 5 revolutions fast:
 /* for (int i = 0; i < 200; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(15000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(15000);
  }*/

 
 
    
    //fecha as janelas
    
    //fecha as janelas em 10s
/*for (counter = 0; counter >= 512; counter = counter + 1){
janela_dir.step(-1);
janela_esq.step(1);
delay(19);     
} */   
    
    // para a musica
    //mp3.stop();

}
