#include "RF24.h"
#include <SPI.h>
#include "RF24V.h"

RF24 radio(7,8);
RF24V Sound(radio,0);

void setup() {
radio.begin();
radio.setPALevel(RF24_PA_MAX);
radio.setChannel(125);
radio.setDataRate(RF24_250KBPS);
Sound.begin();
Sound.transfer();

}

void loop() {
  // put your main code here, to run repeatedly:

}
