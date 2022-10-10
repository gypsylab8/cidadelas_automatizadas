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

int tempLED = 15;
int tempFase = 3000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void loop() {
delay(tempFase*6);
//P_1 ### LEDs porta 1 ###
  for(int y =0; y<10; y++){
      analogWrite(ledsB[0],200);
      analogWrite(ledsB[1],10);
      analogWrite(ledsB[2],30);
  }    
  
//P_1 ### LEDs porta 1 ###
  for(int y =0; y<200; y++){
      analogWrite(ledsB[0],255);
      analogWrite(ledsB[1],10);
      analogWrite(ledsB[2],30);
      delay(tempLED/2);
      analogWrite(ledsB[0],0);
      analogWrite(ledsB[1],0);
      analogWrite(ledsB[2],0);
      delay(tempLED*2);
      analogWrite(ledsB[0],255);
      analogWrite(ledsB[1],10);
      analogWrite(ledsB[2],30);   
  }
  
delay(tempLED); 
//P_2 ### LEDs porta 2 ###
  for(int y =0; y<120; y++){
      analogWrite(ledsC[0],250);
      analogWrite(ledsC[1],80);
      analogWrite(ledsC[2],10);
  }  
delay(tempFase); 
//P_2 ### LEDs porta 2 ###
  for(int y =0; y<200; y++){
      analogWrite(ledsC[0],255);
      analogWrite(ledsC[1],100);
      analogWrite(ledsC[2],10);
      delay(tempLED*2);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      delay(tempLED*2);
      analogWrite(ledsC[0],255);
      analogWrite(ledsC[1],80);
      analogWrite(ledsC[2],30);
          
  }

//delay(tempFase*7);
//P_3 ### LEDs Treme ###
  for(int y =0; y<220; y++){
     analogWrite(ledsC[0],random(255));
      analogWrite(ledsC[1],random(255));
      analogWrite(ledsC[2],random(50));
      analogWrite(ledsB[0],random(255));
      analogWrite(ledsB[1],random(50));
      analogWrite(ledsB[2],random(230));      
      delay(tempLED);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      analogWrite(ledsB[0],0);
      analogWrite(ledsB[1],0);
      analogWrite(ledsB[2],0);      
      delay(tempLED);    
  }
  
//P_4 ### LEDs efeito  ###
  for(int y =0; y<30; y++){
      analogWrite(ledsB[0],255);
      analogWrite(ledsB[1],10);
      analogWrite(ledsB[2],30);
      delay(80);
      analogWrite(ledsB[0],0);
      analogWrite(ledsB[1],0);
      analogWrite(ledsB[2],0);
      delay(15);
      analogWrite(ledsC[0],255);
      analogWrite(ledsC[1],30);
      analogWrite(ledsC[2],10);
      delay(80);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      delay(240);      
  }  
//P_3 ### LEDs Treme ###
  for(int y =0; y<140; y++){
      analogWrite(ledsC[0],random(255));
      analogWrite(ledsC[1],random(255));
      analogWrite(ledsC[2],random(50));
      analogWrite(ledsB[0],random(255));
      analogWrite(ledsB[1],random(50));
      analogWrite(ledsB[2],random(230));      
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
