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

int tempLED = 7 ;
int tempFase = 3000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
    pinMode(com, INPUT); 
 
}

void play() {
//P_1 ### LED efeito entrada ###
  for(int x = 0; x <20; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       delay(tempLED/7);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
        delay(tempLED/7);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       delay(tempLED);
      }
      
 delay(tempFase/2);  
 
 //P_1 ### LED efeito2 ###
  for(int x = 0; x <130; x++){
   digitalWrite(ledsL[0],250);
    delay(20);    
   digitalWrite(ledsL[0],0);
    delay(20);    

  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
   //    analogWrite(ledsB[1],y);
       delay(tempLED/6);
      }
      
 delay(tempFase); 
  
//P_2 ### LED efeito3 ###
  for(int x = 0; x <18; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/6);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
        delay(tempLED/6);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/6);
      }
      
 delay(tempFase);     
      
 //P_1 ### LED efeito4 ###
  for(int x = 0; x <180; x++){
   digitalWrite(ledsL[0],250);
    delay(20);    
   digitalWrite(ledsL[0],0);
    delay(30);    

  }  
 
//P_2 ### LED efeito5 ###
  for(int x = 0; x <18; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/6);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
        delay(tempLED/6);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/6);
      }
      
 delay(tempFase);   

  //P_1 ### LED efeito6 ###
  for(int x = 0; x <180; x++){
   digitalWrite(ledsL[0],250);
    delay(20);    
   digitalWrite(ledsL[0],0);
    delay(30);    

  }   
//P_2 ### LED efeito3 ###
  for(int x = 0; x <18; x++){
    for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/4);
    }
    for(int y = 255; y > 0; y--) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
        delay(tempLED/4);    
    }
  }  
      for(int y = 0; y < 255; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y/2);
       analogWrite(ledsL[2],y/3);
       delay(tempLED/4);
      }
      
 delay(tempFase);       
//### Fim ###  
  
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

void loop() {
  int val = analogRead(com);
  if (val == HIGH) {
    play();
  }
}
