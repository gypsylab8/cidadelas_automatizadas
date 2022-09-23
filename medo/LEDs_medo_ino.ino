int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, A7, 3, 5, 6, 9, 10, 11
};

int ledsA[] = {
  A0, A1, A2, A3, A4, A5, A6, A7
};

int ledsB[] = {
  3, 5, 6
};

int ledsC[] = {
  9, 10, 11
};

int tempLED = 10;
int tempFase = 3000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void loop() {
//P_1 ### LED Azul Branco ###
  for(int y = 0; y < 100; y++) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    delay(tempLED);
  }
  
delay(tempFase);
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    delay(1);
  }  

  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    delay(1);
  }  
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(1);
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(2);
  }  
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(1);
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(2);
  }  

    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    delay(1);
  }  

  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    delay(1);
  }  
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(1);
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(2);
  }  
    for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    delay(1);
  }
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    delay(2);
  }  
  
//### OFF ###  
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsC[2],0);
delay(200);

// P2 ### LED Azul Treme ### 

    analogWrite(ledsB[0],255);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(100);
    analogWrite(ledsB[0],50);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(200);
    analogWrite(ledsB[0],20);
    delay(300);
    analogWrite(ledsB[0],250);
    delay(200);
    analogWrite(ledsB[0],33);
    delay(300);
    analogWrite(ledsB[0],81);
    delay(100);
    analogWrite(ledsB[0],255);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(100);
    analogWrite(ledsB[0],50);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(200);
    analogWrite(ledsB[0],40);
    delay(300);
    analogWrite(ledsB[0],250);
    delay(200);
    analogWrite(ledsB[0],33);
    delay(300);
    analogWrite(ledsB[0],8);
    delay(100);
    analogWrite(ledsB[0],255);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(200);
    analogWrite(ledsB[0],33);
    delay(300);
    analogWrite(ledsB[0],8);
    delay(100);
    analogWrite(ledsB[0],255);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(100);
    analogWrite(ledsB[0],50);
    delay(300);
    analogWrite(ledsB[0],200);
    delay(100);
    analogWrite(ledsB[0],50);
    delay(300);
    analogWrite(ledsB[0],200);
    delay(200);
    analogWrite(ledsB[0],20);
    delay(300);
    analogWrite(ledsB[0],250);
    delay(200);
    analogWrite(ledsB[0],33);
    delay(300);
    analogWrite(ledsB[0],81);
    delay(100);
    analogWrite(ledsB[0],255);
    delay(300);
    analogWrite(ledsB[0],30);
    delay(100);
    analogWrite(ledsB[0],50);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(200);
    analogWrite(ledsB[0],80);
    delay(300);
    analogWrite(ledsB[0],250);
    delay(200);
    analogWrite(ledsB[0],33);
    delay(300);
    analogWrite(ledsB[0],81);
    delay(200);
    analogWrite(ledsB[0],33);
    delay(300);
    analogWrite(ledsB[0],8);
    delay(100);
    analogWrite(ledsB[0],255);
    delay(300);
    analogWrite(ledsB[0],0);
    delay(100);
    analogWrite(ledsB[0],50);
    delay(300);
    analogWrite(ledsB[0],10);
    delay(100);     
 

// P2 ### LED Azul Treme ### 

    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(200);
    analogWrite(ledsB[2],20);
    delay(300);
    analogWrite(ledsB[2],250);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],81);
    delay(100);
    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(200);
    analogWrite(ledsB[2],40);
    delay(300);
    analogWrite(ledsB[2],250);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],8);
    delay(100);
    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],8);
    delay(100);
    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],200);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],200);
    delay(200);
    analogWrite(ledsB[2],20);
    delay(300);
    analogWrite(ledsB[2],250);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],81);
    delay(100);
    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],30);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(200);
    analogWrite(ledsB[2],80);
    delay(300);
    analogWrite(ledsB[2],250);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],81);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],8);
    delay(100);
    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],200);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],81);
    delay(200);
    analogWrite(ledsB[2],33);
    delay(300);
    analogWrite(ledsB[2],8);
    delay(100);
    analogWrite(ledsB[2],255);
    delay(300);
    analogWrite(ledsB[2],0);
    delay(100);
    analogWrite(ledsB[2],50);
    delay(300);
    analogWrite(ledsB[2],200);
    delay(100); 
 
//### OFF ###  
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);
delay(3000);
}
