// tempo de duracao da casa por volta de 50s

#include <Servo.h>
#include <Stepper.h>
#include "SerialMP3Player.h"
#include <SoftwareSerial.h>

Stepper passos_girar_esquerda(stepsPerRevolution, 2, 3, 4, 5);
Stepper passos_girar_direita(stepsPerRevolution, 6, 7, 8, 9);
Stepper passos_gira_e_volta(stepsPerRevolution, 10, 11, 12, 13);
Servo colheres_parede;

const int stepsPerRevolution = 2038;


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
  // MOVIMENTOS ARMARIO

  //MOVIMENTO ABRIR PORTA DO ARMARIO
  porta_armario.step(-stepsPerRevolution * 0.30);
  delay(2000);

  //MOVIMENTO FECHAR PORTA DO ARMARIO
  porta_armario.step(stepsPerRevolution * 0.30);
  delay(2000);




  /* MOVIMENTO TRAVESSEIRO
  
    travesseiro.write(40);              
    delay(1500);                    
    travesseiro.write(60);               
    delay(1500);                     
    for(pos = 60; pos >= 40; pos -= 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      travesseiro.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(100);                       // waits 15ms for the servo to reach the position 
    }
  
    */
}
