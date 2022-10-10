
int com = A7;
int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, , 3, 5, 6, 9, 10, 11
};

int ledsF[] = {
  A0, A1, A2, A3, A4, A5, A6,
};

int ledsB[] = {
  9, 10, 11
};

int ledsM[] = {
  3, 5, 6
};

int tempLED = 15;
int tempFase = 500;

void setup() {
  pinMode(com, INPUT);  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
}

void play() {
//P_1 ### LED_1 Balanço ###
for(int y = 0; y<3; y++){
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }  
   for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(tempLED);
  }
}
delay(tempLED);

    for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[1],y);
    analogWrite(ledsB[0],y);
    delay(tempLED*3);
  }
   for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  }  
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);
delay(tempFase);

//P_2 ### LEDs Meio###
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[2],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  }
  for(int y = 256; y > 0; y--) {
    analogWrite(ledsB[2],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  }   
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[2],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  }
  for(int y = 256; y > 0; y--) {
    analogWrite(ledsB[2],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  }  
  for(int y = 0; y < 256; y++) {
    analogWrite(ledsB[2],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  } 
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);
delay(tempFase);     
  
//P_3  ### LEDs Fundo ###
  for(int x = 0; x < 400; x++){
    for(int y = 0; y < 256; y++) {
      analogWrite(ledsM[0],y);
     delay(random(3));
    }
    for(int y = 256; y > 0; y--) {
      analogWrite(ledsM[0],y);
     delay(random(5));
    }
    for(int y = 0; y < 256; y++) {
      analogWrite(ledsB[0],y); 
      delay(random(10));
    }
    for(int y = 256; y > 0; y--) {
      analogWrite(ledsB[0],y);
      delay(random(3));
    }

  }
    digitalWrite(com, LOW);  
}

void loop() {
int val = analogRead(com);
//Start
  if (val>255){
    Serial.println("play");
    digitalWrite(com, HIGH);
    play();
    
  }
}

