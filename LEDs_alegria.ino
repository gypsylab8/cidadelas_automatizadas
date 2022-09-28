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

int tempLED = 7 ;
int tempFase = 3000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  
}

void loop() {
//P_1 ### LED janela ###
  for(int x = 0; x <2; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       delay(tempLED);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
        delay(tempLED);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       delay(tempLED);
      }
      
 delay(tempFase/2);  
 
 //P_1 ### LED janela ###
  for(int x = 0; x <3; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsB[0],y);
    //   analogWrite(ledsB[1],y);
       delay(tempLED);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsB[0],y);
      // analogWrite(ledsB[1],y);
        delay(tempLED/2);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsB[0],y);
   //    analogWrite(ledsB[1],y);
       delay(tempLED/2);
      }
      
 delay(tempFase); 
  
//P_2 ### LED ambiente1 ###
  for(int x = 0; x <3; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/2);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
        delay(tempLED);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED);
      }
      
 delay(tempFase);     
      
//P_1.2 ### LED ambiente2 ###
  for(int x = 0; x <3; x++){
    for(int y = 0; y < 31; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED/2);
    }
    for(int y = 31; y > 0; y--) {
        analogWrite(ledsL[1],y);
        delay(tempLED);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED);
      }      
delay(tempFase);   


 //P_2 ### LED Amebiente3 ###
    for(int y = 0; y < 50; y++) {
       analogWrite(ledsL[2],y);
       delay(tempLED);
    }
  for(int x = 0; x <2 ; x++){
    for(int y = 50; y < 255; y++) {
       analogWrite(ledsL[2],y);
       delay(tempLED);
    }
    for(int y = 255; y > 50; y--) {
        analogWrite(ledsL[2],y);
        delay(tempLED);    
    }
  }
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[2],y);
       delay(tempLED);
    }  


  
//### Fim ###  
delay(tempFase*6);  
for(int y = 255; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y/3);
    analogWrite(ledsL[2],y);
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    analogWrite(ledsB[2],y);        
    delay(tempLED);    
 }
    analogWrite(ledsL[0],0);
    analogWrite(ledsL[1],0);
    analogWrite(ledsL[2],0);
    analogWrite(ledsB[0],0);
    analogWrite(ledsB[1],0);
    analogWrite(ledsB[2],0);    
    
    delay(6000);

}
