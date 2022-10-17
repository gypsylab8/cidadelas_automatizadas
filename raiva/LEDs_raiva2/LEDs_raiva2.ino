int com = A7;

int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, 3, 5, 6, 9, 10, 11
};

int ledsA[] = {
  A0, A1, A2, A3, A4, A5, A6
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
   pinMode(com, INPUT); 
}

void play() {
  delay(14000); 
//P_1 ### LEDs porta 1 ###
  for(int y =0; y<80; y++){
      analogWrite(ledsB[0],200);
      analogWrite(ledsB[1],10);
      analogWrite(ledsB[2],30);
  }    
  
//P_1 ### LEDs porta 1 ###
  for(int y =0; y<100; y++){
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
  for(int y =0; y<80; y++){
      analogWrite(ledsC[0],200);
      analogWrite(ledsC[1],30);
      analogWrite(ledsC[2],10);
  }  
delay(tempFase); 
//P_2 ### LEDs porta 2 ###
  for(int y =0; y<100; y++){
      analogWrite(ledsC[0],255);
      analogWrite(ledsC[1],30);
      analogWrite(ledsC[2],10);
      delay(tempLED/2);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      delay(tempLED*2);
      analogWrite(ledsC[0],255);
      analogWrite(ledsC[1],30);
      analogWrite(ledsC[2],10);
          
  }


//P_3 ### LEDs Treme ###
  for(int y =0; y<70; y++){
      analogWrite(ledsC[0],random(255));
      analogWrite(ledsC[1],random(105));
      analogWrite(ledsC[2],random(10));
      analogWrite(ledsB[0],random(255));
      analogWrite(ledsB[1],random(15));
      analogWrite(ledsB[2],random(40));      
      delay(tempLED/2);
      analogWrite(ledsC[0],0);
      analogWrite(ledsC[1],0);
      analogWrite(ledsC[2],0);
      analogWrite(ledsB[0],0);
      analogWrite(ledsB[1],0);
      analogWrite(ledsB[2],0);      
      delay(tempLED*3);  
  }
  
//P_4 ### LEDs efeito  ###
  for(int y =0; y<20; y++){
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
  for(int y =0; y<130; y++){
      analogWrite(ledsC[0],random(255));
      analogWrite(ledsC[1],random(95));
      analogWrite(ledsC[2],random(50));
      analogWrite(ledsB[0],random(255));
      analogWrite(ledsB[1],random(50));
      analogWrite(ledsB[2],random(90));      
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

void loop() {
  int val = analogRead(com);
  if (val == HIGH) {
    play();
  }
}

