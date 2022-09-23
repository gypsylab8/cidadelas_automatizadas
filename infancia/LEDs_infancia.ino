int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, A7, 3, 5, 6, 9, 10, 11
};

int ledsF[] = {
  A0, A1, A2, A3, A4, A5, A6, A7
};

int ledsM[] = {
  9, 10, 11
};

int ledsB[] = {
  3, 5, 6
};

int tempLED = 15;
int tempFase = 500;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void loop() {
//P_1 ### LED_1 Balanço ###
  for(int y = 0; y < 256; y++) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y/3);
    delay(tempLED);
  }
  for(int y = 0; y < 256; y++) {
    analogWrite(ledsB[2],y);
    delay(tempLED);
  }

delay(tempLED);
  
    for(int y = 256; y > 0; y--) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y/3);
    delay(tempLED);
  }

delay(tempLED);

    for(int y = 256; y > 0; y--) {
    analogWrite(ledsB[2],y);
    delay(tempLED);
  }
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);
delay(tempFase);

//P_2 ### LEDs Meio###
  for(int y = 0; y < 256; y++) {
    analogWrite(ledsM[1],y);
    delay(tempLED);
  }
  for(int y = 0; y < 256; y++) {
    analogWrite(ledsM[0],y);
    delay(tempLED);
  }
  for(int y = 256; y > 0; y--) {
    analogWrite(ledsM[1],y);
    delay(tempLED);
  }  
  for(int y = 0; y < 256; y++) {
    analogWrite(ledsM[2],y);
    delay(tempLED);
  } 
    analogWrite(ledsM[0],0);
    analogWrite(ledsM[1],0);
    analogWrite(ledsM[2],0);
delay(tempFase);     
  
//P_3  ### LEDs Fundo ###
  for(int x = 0; x < 400; x++){
    for(int y = 0; y < 256; y++) {
      analogWrite(ledsM[random(4)],y);
     delay(random(30));
    }
    for(int y = 256; y > 0; y--) {
      analogWrite(ledsM[random(4)],y);
     delay(random(15));
    }
    for(int y = 0; y < 256; y++) {
      analogWrite(ledsB[random(4)],y);
      delay(random(10));
    }
    for(int y = 256; y > 0; y--) {
      analogWrite(ledsB[random(4)],y);
      delay(random(30));
    }

  }
}
