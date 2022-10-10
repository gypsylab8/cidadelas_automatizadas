#define echoPin A0 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin A1 //attach pin D3 Arduino to pin Trig of HC-SR04
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int com = A7;

int leds[] = {
  A0, A1, A2, A3, A4, A5, A6, A7, 3, 5, 6, 9, 10, 11
};

int ledsF[] = {
  A0, A1, A2, A3, A4, A5, A6, A7
};

int ledsB[] = {
  9, 10, 11
};

int ledsM[] = {
  3, 5, 6
};

int tempLED = 3;
int tempFase = 3500;

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
  
//P_1 ### LED_1 Balanço ###
for(int x=0; x<8; x++){
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

//P_2 ### LEDs Meio###
for(int x=0; x<12; x++){
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsM[0],y);
    analogWrite(ledsM[1],y);
    analogWrite(ledsM[2],y);
    delay(tempLED);
  }

  for(int y = 250; y > 0; y--) {
    analogWrite(ledsM[0],y);
    analogWrite(ledsM[1],y);
    analogWrite(ledsM[2],y);
    delay(tempLED);
  }  
}
  for(int y = 0; y < 250; y++) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    analogWrite(ledsB[2],y);
    analogWrite(ledsM[0],y);
    analogWrite(ledsM[1],y);
    analogWrite(ledsM[2],y); 
  } 
delay(tempFase*2);  

   for(int y = 250; y > 0; y--) {
    analogWrite(ledsB[0],y);
    analogWrite(ledsB[1],y);
    analogWrite(ledsB[2],y);
    analogWrite(ledsM[0],y);
    analogWrite(ledsM[1],y);
    analogWrite(ledsM[2],y);    
    delay(tempLED);
  }   



delay(tempFase*2);     
for(int x=0; x<6; x++){  
  for(int y = 0; y < 250; y++) {

    analogWrite(ledsM[0],y);
    analogWrite(ledsM[1],y);
    analogWrite(ledsM[2],y); 
  } 
delay(tempFase);  
   for(int y = 250; y > 0; y--) {

    analogWrite(ledsM[0],y);
    analogWrite(ledsM[1],y);
    analogWrite(ledsM[2],y);    
    delay(tempLED);
  }   
}
delay(tempFase);
digitalWrite(com, LOW);
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
    play();
    
  }
}
