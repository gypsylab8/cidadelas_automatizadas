
// tempo de duracao da casa por volta de 50s
#include "SerialMP3Player.h"
#include <Stepper.h>
#include <SoftwareSerial.h>

// pinos do shield mp3
#define TX 1
#define RX 0
// pinos do sensor de presenca
#define trigPin A5
#define echoPin A6

// declaracoes do sensor de presenca
long duration;
int distance;
SerialMP3Player mp3(RX,TX);

const int stepsPerRevolution = 2038;  

Stepper janela_dir(stepsPerRevolution, 2,3,4,5);  
Stepper janela_esq(stepsPerRevolution, 10,11,12,13);  
Stepper folhas(stepsPerRevolution, 6,7,8,9);  
Stepper fundo(stepsPerRevolution, 14,15,16,17);  

void setup() {

  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //select sd-card
  delay(500);             // wait for init

  // pinos do sensor de presenca
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

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


  janela_dir.setSpeed(14);
  janela_esq.setSpeed(14);
  folhas.setSpeed(14);
  fundo.setSpeed(14);

}

void loop() {
 

  // ################ ATENCAO ##################

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
  
    
  */
 
  // COMUNICA PRO OUTRO ARDUINO QUE TEM QUE OCMECAR:
  
  //digitalWrite(11, HIGH);
 
  
  // TOCA MUSICA
  
  //mp3.play();

  
  // ABRIR janelas EM 10 SEG:
  
//abre as janelas em 10s
/*int counter;
for (int counter = 0; counter >= 512; counter = counter + 1){
janela_dir.step(1);
janela_esq.step(-1);
delay(19);     
}*/    

    
  // ESPERAR 9 SEG:
  
  delay(9000);

  // durante 20 segundos gira so o fundo
 
 folhas.step(stepsPerRevolution*4.76);
 
 //durante 19 segundos gira a roda de folhas 
 fundo.step(stepsPerRevolution*2.38);
    
  // PARA A MUSICA
  
  //mp3.stop();

  // fecha a porta
  
//fecha as janelas em 10s
/*for (counter = 0; counter >= 512; counter = counter + 1){
janela_dir.step(-1);
janela_esq.step(1);
fundo.step(10);
delay(19);     
} */   
  
  // baixa o pino de comunicacao
  //digitalWrite(11, LOW);

  //}
  
  //delay(200);
  
  
  
}
