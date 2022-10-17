
// tempo de duracao da casa por volta de 50s
#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <Servo.h> 

// pinos do shield mp3
#define TX 1
#define RX 0
#define commPin 14

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
  lareira.attach(18);
  //lareira.detach();
   digitalWrite(relay, LOW);

}

void loop() {

// recebe o sinal do outro arduino

 if (digitalRead(commPin) == HIGH){
 }

  
  // espera a porta abrir no outro arduino
  
  delay(10000);
 
  // toca mp3

    mp3.play();


   // for para fazer 30s de movimento
   for (int k = 0; k < 4; k = k + 1){
  
  // 10.5 s de movimento:

   for(int pos = 0; pos < 80; pos += 1)  // goes from 0 degrees to 180 degrees 
  {     
    // in steps of 1 degree 
    chapeu_cadeira_cima.step(10);
    chapeu_teto.step(10);

    chapeu_janela.step(10);
    lareira.write(pos); 
       // tell servo to go to position in variable 'pos' 
    delay(15);        
  } 
  for(int pos = 80; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  { 
    chapeu_cadeira_cima.step(10);
    chapeu_teto.step(-10);
    chapeu_janela.step(10);
    lareira.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15); 
    // waits 15ms for the servo to reach the position 
  }
  
  // 
   
 }
 
 // liga o rele e faz 15 s de movimentos
 
 digitalWrite(relay, HIGH);
 
  for(int pos = 0; pos < 80; pos += 1)  // goes from 0 degrees to 180 degrees 
  {     
    // in steps of 1 degree 
    chapeu_cadeira_cima.step(10);
    chapeu_teto.step(10);

    chapeu_janela.step(10);
    lareira.write(pos); 
       // tell servo to go to position in variable 'pos' 
    delay(15);        
  } 
  for(int pos = 80; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  { 
    chapeu_cadeira_cima.step(10);
    chapeu_teto.step(-10);
    chapeu_janela.step(10);
    lareira.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15); 
    // waits 15ms for the servo to reach the position 
  }
  
  
   for(int pos = 0; pos < 40; pos += 1)  // goes from 0 degrees to 180 degrees 
  {     
    // in steps of 1 degree 
    chapeu_cadeira_cima.step(-10);
    chapeu_teto.step(-10);

    chapeu_janela.step(-10);
    lareira.write(pos); 
       // tell servo to go to position in variable 'pos' 
    delay(15);        
  } 
  for(int pos = 40; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  { 
    chapeu_cadeira_cima.step(-10);
    chapeu_teto.step(10);
    chapeu_janela.step(-10);
    lareira.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15); 
    // waits 15ms for the servo to reach the position 
  }
  
 // desliga o rele 
 
 digitalWrite(relay, LOW);
 
 
 // para a musica
 
    mp3.stop();

  
  delay(1000);
}
