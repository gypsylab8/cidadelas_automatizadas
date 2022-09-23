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

int tempLED = 5;
int tempFase = 1000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void loop() {
//P_1 ### LED Farol ###
  for(int x = 0; x <5; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED/2);
    }
    for(int y = 255; y > 0; y--) {
        analogWrite(ledsL[0],y);
        delay(tempLED);    
    }
  }  
      for(int y = 0; y < 150; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED*3);
      }
      
      
 //P_1.2 ### LED Meio ###
    for(int y = 0; y < 50; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED*2);
    }
  for(int x = 0; x <3 ; x++){
    for(int y = 50; y < 255; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED);
    }
    for(int y = 255; y > 50; y--) {
        analogWrite(ledsL[1],y);
        delay(tempLED);    
    }
  }
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED*2);
    }  
//### LED Ambiente  ### 

      for(int y = 0; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);       
       delay(tempLED/2);
      }     

    for(int y = 150; y < 255; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED*2);
    }
  for(int x = 0; x <2; x++){
    for(int y = 150; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);
       delay(tempLED/2);
    }
    for(int y = 255; y > 155; y--) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);
        delay(tempLED);    
    }   
  }    
    for(int y = 155; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);
       delay(tempLED/2);
    }
delay(tempFase);
    
  
//P_1 ### LED Farol ###
    for(int y = 0; y < 50; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       delay(tempLED/2);
    }
  for(int x = 0; x <2; x++){
    for(int y = 50; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       delay(tempLED/2);
    }
    for(int y = 255; y > 50; y--) {
        analogWrite(ledsL[0],y);
        analogWrite(ledsL[1],y);
        delay(tempLED*2);    
    }
  }  
      for(int y = 0; y < 150; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       delay(tempLED/3);
      }
     
//### LED Ambiente  ### 

      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[1],y); 
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);       
       delay(tempLED);
      }     

    for(int y = 150; y < 255; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED/2);
    }
  for(int x = 0; x <2; x++){
    for(int y = 150; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);
       delay(tempLED/2);
    }
    for(int y = 255; y > 155; y--) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);
        delay(tempLED);    
    }   
  }    
    for(int y = 155; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       analogWrite(ledsB[2],y);
       delay(tempLED/2);
    }
delay(tempFase);

//P_1 ### LED Farol ###

  for(int x = 0; x <5; x++){
    for(int y = 50; y < 255; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED/2);
    }
    for(int y = 255; y > 50; y--) {
       analogWrite(ledsL[0],y);
       delay(tempLED);
    }  
  }
    for(int y = 50; y < 255; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED/2);
    }  
  
//### Fim ###  
delay(tempFase*6);  
for(int y = 255; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
    analogWrite(ledsL[2],y);
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y/3);
    analogWrite(ledsB[2],y);        
    delay(tempLED*5);    
 }
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);    
    
    delay(6000);

}
