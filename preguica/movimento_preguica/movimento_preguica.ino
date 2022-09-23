
#include <Servo.h> 
#include <Stepper.h>
 
Servo travesseiro;  
int pos = 60;
const int stepsPerRevolution = 2048;  
Stepper porta_armario(stepsPerRevolution, 14,15,16,17);            

void setup() 
{ 
  travesseiro.attach(8); 
  porta_armario.setSpeed(14);

} 
 
 
void loop() 
{ 
    // MOVIMENTOS ARMARIO
    
    //MOVIMENTO ABRIR PORTA DO ARMARIO
    porta_armario.step(-stepsPerRevolution*0.30);
    delay(2000);
    
    //MOVIMENTO FECHAR PORTA DO ARMARIO
    porta_armario.step(stepsPerRevolution*0.30);
    delay(2000);
    
   
    
 
    /* MOVIMENTO TRAVESSEIRO
  
    travesseiro.write(40);              
    delay(1500);                    
    travesseiro.write(60);               
    delay(1500);                     
    for(pos = 60; pos >= 40; pos -= 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      travesseiro.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(100);                       // waits 15ms for the servo to reach the position 
    }
  
    */
    
    
} 
