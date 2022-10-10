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

int tempLED = 10;
int tempFase = 100;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
    pinMode(com, INPUT);
  
}

void play() {
//P_1 ### LED_1 Lilas ###
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    delay(tempLED);
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(tempLED);    
  }
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    delay(tempLED);
  }  
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(tempLED);  
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    delay(tempLED);
  }  
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }  
  
delay(tempLED);
  
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    delay(tempLED);
  }

delay(tempLED);

    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
    analogWrite(ledsB[0],0);
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
delay(3000);
}


void loop() {
  int val = analogRead(com);
  if (val == HIGH) {
    play();
  }
}