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

int tempLED = 3;
int tempFase = 90;

void setup() {
  pinMode(com, INPUT);
  for (int x = 0; x < 11; x++) {
    pinMode(leds[x], OUTPUT);
  }
}

void play() {

  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 250; y++) {
      analogWrite(ledsL[0], y);
      //analogWrite(ledsL[1],y);
      delay(tempLED * 2);
    }
    for (int y = 250; y > 0; y--) {
      analogWrite(ledsL[0], y);
      // analogWrite(ledsL[1],y);
      delay(tempLED * 2);
    }
  }
  for (int x = 0; x < 12; x++) {
    for (int y = 0; y < 250; y++) {
      analogWrite(ledsL[0], y);
      analogWrite(ledsL[1], y);
      delay(tempLED / 3);
    }
    for (int y = 250; y > 0; y--) {
      analogWrite(ledsL[0], y);
      analogWrite(ledsL[1], y);
      delay(tempLED / 3);
    }
  }

  for (int x = 0; x < 60; x++) {

    analogWrite(ledsL[0], 250);
    analogWrite(ledsL[1], 250);
    delay(tempLED * 20);
    analogWrite(ledsL[0], 0);
    analogWrite(ledsL[1], 0);
    delay(tempLED * 20);
  }
  for (int x = 0; x < 12; x++) {
    for (int y = 0; y < 250; y++) {
      analogWrite(ledsL[0], y);
      analogWrite(ledsL[1], y);
      delay(tempLED);
    }
    for (int y = 250; y > 0; y--) {
      analogWrite(ledsL[0], y);
      analogWrite(ledsL[1], y);
      delay(tempLED);
    }
  }
  delay(6000);
}


void loop() {
  int val = analogRead(com);
  if (val == HIGH) {
    play();
  }
}