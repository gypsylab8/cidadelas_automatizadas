#define echoPin A0 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin A1 //attach pin D3 Arduino to pin Trig of HC-SR04
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int com = A7;
int com1 = A6;


int leds[] = {
  A0, A1, A2, A3, A4, A5, 3, 5, 6, 9, 10, 11
};

int ledsA[] = {
  A0, A1, A2, A3, A4, A5
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
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(com, OUTPUT);
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino Nano 2022");   
}

void play() {
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
    digitalWrite(com, LOW);
    digitalWrite(com1, LOW);
}

void loop() {
 // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

//Start
  if(distance <30){
    Serial.println("play");
    digitalWrite(com, HIGH);
    digitalWrite(com1, HIGH);
    play();
    
  }
}