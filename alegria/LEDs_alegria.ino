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

int tempLED = 5 ;
int tempFase = 3000;

void setup() {
  
  for (int x = 0; x < 11; x++) { 
    pinMode(leds[x], OUTPUT);
  }
  pinMode(com,INPUT);
}

void play() {

//P_2 ### LED ambiente1 ###
  for(int x = 0; x <3; x++){
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       analogWrite(ledsL[2],y);
       delay(tempLED/2);
    }
    for(int y = 250; y > 0; y--) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       analogWrite(ledsL[2],y);
        delay(tempLED);    
    }
  }  
      
      
//P_1.2 ### LED ambiente2 ###
  for(int x = 0; x <4; x++){
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED/2);
    }
    for(int y = 250; y > 0; y--) {
        analogWrite(ledsL[1],y);
        delay(tempLED/2);    
    }
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[0],y);
       delay(tempLED/2);
    }
    for(int y = 250; y > 0; y--) {
        analogWrite(ledsL[0],y);
        delay(tempLED/2);    
    }    
  }  

      for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsL[1],y);
       analogWrite(ledsL[2],y);
       delay(tempLED);
      }

//P_1 ### LED fundo ###
  for(int x = 0; x <6; x++){
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       delay(tempLED);
    }
    for(int y = 250; y > 0; y--) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
        delay(tempLED);    
    }
  }  
      for(int y = 0; y < 250; y++) {
       analogWrite(ledsB[0],y);
       analogWrite(ledsB[1],y);
       delay(tempLED);
      }
      

//P_1.2 ### LED ambiente2 ###
  for(int x = 0; x <3; x++){
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[1],y);
       delay(tempLED/2);
    }
    for(int y = 250; y > 0; y--) {
        analogWrite(ledsL[1],y);
        delay(tempLED);    
    }
  }            
  

//P_1 ### LED fundo ###
  for(int x = 0; x <3; x++){
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsB[0],y);
    //   analogWrite(ledsB[1],y);
       delay(tempLED);
    }
    for(int y = 250; y > 0; y--) {
       analogWrite(ledsB[0],y);
      // analogWrite(ledsB[1],y);
        delay(tempLED/2);    
    }
  }  
      for(int y = 0; y < 250; y++) {
       analogWrite(ledsB[0],y);
   //    analogWrite(ledsB[1],y);
       delay(tempLED/2);
      }

//P_4 ### LED ambiente+sol ###
  for(int x = 0; x <5; x++){
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[1],y);
       analogWrite(ledsB[1],y);
       delay(tempLED/2);
    }
    for(int y = 250; y > 0; y--) {
        analogWrite(ledsL[1],y);
        analogWrite(ledsB[1],y);
        delay(tempLED/2);    
    }
    for(int y = 0; y < 250; y++) {
       analogWrite(ledsL[0],y);
       analogWrite(ledsB[0],y);
       delay(tempLED/2);
    }
    for(int y = 250; y > 0; y--) {
        analogWrite(ledsL[0],y);
        analogWrite(ledsB[0],y);
        delay(tempLED/2);    
    }    
  }  
  

  
//### Fim ###  
delay(tempFase);  
for(int y = 250; y > 0; y--) {
    analogWrite(ledsL[0],y);
    analogWrite(ledsL[1],y);
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

void loop(){
  int val = analogRead(com);
  if(val==HIGH){
    play();
  }
}
