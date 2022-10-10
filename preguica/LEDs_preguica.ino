int com = A7;

int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, 3, 5, 6, 9, 10, 11
};


int ledsF[] = {
  A0, A1, A2, A3, A4, A5, A6
};

int ledsB[] = {
  9, 10, 11
};

int ledsL[] = {
  3, 5, 6
};

int tempLED = 7;
int tempFase = 1000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
    pinMode(com, INPUT);

}

void play() {
//P_1 ### LED_1 Lilas ###
for(int x=0; x<7; x++){
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    analogWrite(ledsL[2],y);
    delay(tempLED);
  }
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    analogWrite(ledsL[2],y);
    delay(tempLED);
  }  
}  
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);

delay(tempFase);

//### fundo armario ###  
for(int x=0; x <3; x++){

  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[2],y);
    delay(tempLED);
  }  
delay(tempLED);
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[2],y);
    delay(tempLED);
  }
}
//### Part 3 ### 
for(int x=0; x<5; x++){
  for(int y = 0; y < 80; y++) {

    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED*4);
  }
    for(int y = 80; y > 0; y--) {

    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED*4);
  }
}
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);
delay(3000);
}

void loop() {
  int val = analogRead(com);
  if (val == HIGH) {
    play();
  }
}
