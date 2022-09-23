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
//P_1 ### LEDs ###
  for(int y =0; y<200; y++){
      analogWrite(ledsB[0],255);
      analogWrite(ledsB[0],10);
      analogWrite(ledsB[0],30);
  }    
  
delay(tempFase); 

//P_1 ### LEDs ###
  for(int y =0; y<200; y++){
      analogWrite(ledsB[0],255);
      analogWrite(ledsB[1],10);
      analogWrite(ledsB[2],30);
      delay(tempLED);
      analogWrite(ledsB[0],0);
      analogWrite(ledsB[1],0);
      analogWrite(ledsB[2],0);
      delay(tempLED);
  }
  
delay(tempFase); 

//P_2 ### LEDs ###
  for(int y =0; y<200; y++){
      analogWrite(ledsC[0],255);
      analogWrite(ledsC[1],10);
      analogWrite(ledsC[2],30);
      delay(tempLED);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      delay(tempLED);  
  }
delay(tempFase*2); 

//P_3 ### LEDs Treme ###
  for(int y =0; y<350; y++){
      analogWrite(ledsC[0],random(255));
      analogWrite(ledsC[1],random(155));
      analogWrite(ledsC[2],random(55));
      analogWrite(ledsB[0],random(55));
      analogWrite(ledsB[1],random(155));
      analogWrite(ledsB[2],random(255));      
      delay(tempLED);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      analogWrite(ledsB[0],0);
      analogWrite(ledsB[1],0);
      analogWrite(ledsB[2],0);      
      delay(tempLED);  
  }

//### OFF ###  
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);
    analogWrite(ledsC[0],0);
    analogWrite(ledsC[1],0);
    analogWrite(ledsC[2],0);    
delay(3000);
}
