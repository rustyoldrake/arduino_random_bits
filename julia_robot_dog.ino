/* Sweep with LED alerts

*/

#include <Servo.h>


Servo myservo6;  // create servo object to control a servo
Servo myservo7;  // create servo object to control a servo
Servo myservo8;  // create servo object to control a servo
Servo myservo9;  // create servo object to control a servo

// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo6.attach(6);  // attaches the servo on pin 6 LEG
  myservo7.attach(7);  // attaches the servo on pin 7 LEG
  myservo8.attach(8);  // attaches the servo on pin 8 LEG
  myservo9.attach(9);  // attaches the servo on pin 9 LEG

  pinMode(12, OUTPUT); // red 
  pinMode(13, OUTPUT); // white
}

void loop() {
  
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    
    myservo6.write(180-pos);              // tell servo to go to position in variable 'pos'
    myservo7.write(pos);              // tell servo to go to position in variable 'pos'
    myservo8.write(180-pos);              // tell servo to go to position in variable 'pos'
    myservo9.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
  
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo6.write(180-pos);              // tell servo to go to position in variable 'pos'
    myservo7.write(pos);              // tell servo to go to position in variable 'pos'
    myservo8.write(180-pos);              // tell servo to go to position in variable 'pos'
    myservo9.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
    
  }
}



