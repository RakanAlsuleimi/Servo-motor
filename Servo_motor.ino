#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  myservo1.attach(8);  // attaches the servo on pin 8 to the servo object
  myservo2.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    
    myservo1.write(pos);
    myservo2.write(pos);             // tell servo to go to position in variable 'pos'
    
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              
    myservo2.write(pos);
    delay(15);                       
  }
}
