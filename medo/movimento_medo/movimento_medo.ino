

#include <Servo.h> 
 
Servo servo_direito;  // create servo object to control a servo 
Servo servo_esquerdo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
void setup() 
{ 
  servo_direito.attach(14);  // attaches the servo on pin 9 to the servo object 
  servo_esquerdo.attach(15);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{     
    servo_direito.write(0);              // tell servo to go to position in variable 'pos' 
    servo_esquerdo.write(0);
    delay(2000);

    servo_direito.write(60);              // tell servo to go to position in variable 'pos' 
    delay(500);
    servo_direito.write(0); 
    delay(500);
    // tell servo to go to position in variable 'pos' 
    servo_esquerdo.write(60);
    delay(500);
    servo_esquerdo.write(0);
        delay(2000);

} 
