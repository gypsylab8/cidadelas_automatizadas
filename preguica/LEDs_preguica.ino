int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, A7, 3, 5, 6, 9, 10, 11
};

int ledsF[] = {
  A0, A1, A2, A3, A4, A5, A6, A7
};

int ledsB[] = {
  9, 10, 11
};

int ledsL[] = {
  3, 5, 6
};

int tempLED = 100;
int tempFase = 1000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void loop() {
//P_1 ### LED_1 Lilas ###
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    analogWrite(ledsL[2],y);
    delay(30);
  }
  
//P_1 ### LED_1 Lilas ###
  for(int y = 0; y < 80; y++) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    analogWrite(ledsL[2],y);
    delay(10);
  }
    for(int y = 80; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    analogWrite(ledsL[2],y);
    delay(30);
  }

    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);

delay(tempFase);


//### Part 2 ### 

  for(int y = 0; y < 80; y++) {

    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
delay(tempFase);

    for(int y = 80; y > 0; y--) {

    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
delay(tempFase);

//### fundo ###  
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[2],y);
    delay(30);
  }  
delay(1000);
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[2],y);
    delay(30);
  }
//### fundo ###  
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[2],y);
    delay(30);
  }  
delay(1000);

    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[2],y);
    delay(30);
  }

//### Part 2 ### 

  for(int y = 0; y < 80; y++) {

    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
delay(tempFase);

    for(int y = 80; y > 0; y--) {

    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }



    analogWrite(ledsB[0],0);
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
delay(3000);
}
