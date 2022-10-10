#define echoPin A0 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin A1 //attach pin D3 Arduino to pin Trig of HC-SR04
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int com = A7;
int com1 = A6;
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

void play(){
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
    analogWrite(ledsB[2],0);
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
    analogWrite(ledsB[2],0);
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
