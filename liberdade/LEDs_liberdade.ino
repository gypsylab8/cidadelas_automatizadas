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

int tempLED = 5;
int tempFase = 100;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void play() {
//P_1 ### LED Baixo ###
  for(int x = 0; x <4; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED*2);
    }
    for(int y = 255; y > 0; y--) {
        analogWrite(ledsL[0],y);
        delay(tempLED);    
    }
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED*3);
    }    
  }  
  
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);
    delay(10000);
  
    
//### LED Meio Ceu  ###  
  for(int x = 0; x <4; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED*2);
    }
    for(int y = 255; y > 0; y--) {
        analogWrite(ledsL[1],y);
        delay(tempLED);    
    }
    for(int y = 0; y < 150; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED*3);
    }    
  }    
analogWrite(ledsL[1],250);
delay(tempFase);


    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);
    delay(20000);

}

void loop() {
  int val = analogRead(com);
  if (val == HIGH) {
    play();
  }
}