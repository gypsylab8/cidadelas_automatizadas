
#include <Stepper.h>
 
const int stepsPerRevolution = 2048;  
Stepper roda(stepsPerRevolution, 8,9,10,11);            

void setup() 
{ 
  roda.setSpeed(14);

} 
 
 
void loop() 
{ 
    roda.step(stepsPerRevolution*3);
    delay(2000);
    
} 
