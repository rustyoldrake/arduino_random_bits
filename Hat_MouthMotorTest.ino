#include <Servo.h> 

Servo leftbrow;  // create servo object to control a servo 
Servo rightbrow;  // create servo object to control a servo 

int RedEye = 1;
int WhiteEye = 2;
int GreenEye = 3;
int motorPin8 = 8;
int motorPin9 = 9;
int activePulse8 = 50;  // tends to creep down, so we spend a little longer on the 'upswing' 
int activePulse9 = 18;  // gravity :-)
int delayTime = 10000;

void setup() {
  pinMode(RedEye, OUTPUT);
  pinMode(WhiteEye, OUTPUT);
  pinMode(GreenEye, OUTPUT);

   digitalWrite(RedEye, LOW);
   digitalWrite(WhiteEye, LOW);
   digitalWrite(GreenEye, HIGH);
  
  pinMode(motorPin8, OUTPUT);
  pinMode(motorPin9, OUTPUT);

  // RESET TO TOP OF MOUTH
  digitalWrite(motorPin8, HIGH); // prime the pump - top of mouth
  delay(300);
  digitalWrite(motorPin8, LOW); // prime the pump - top of mouth - stop motor push
  
  // Open up a just a little - ahhh
  digitalWrite(motorPin9, HIGH); // prime the pump - top of mouth
  delay(50);
  digitalWrite(motorPin9, LOW); // prime the pump - top of mouth

   // eyebrows
    leftbrow.attach(4);  // attaches the servo on pin 4
    rightbrow.attach(5);  // attaches the servo on pin 5
    leftbrow.write(80);  
    rightbrow.write(120); 

  
}

void loop() {

  /// GREEN GOOD GRYFFINDOR
  leftbrow.write(80);  
  rightbrow.write(120); 
  digitalWrite(motorPin8, HIGH);
  delay(activePulse8);
  digitalWrite(GreenEye, HIGH);
  digitalWrite(motorPin8, LOW);
  delay(delayTime);
  digitalWrite(GreenEye, LOW);


  //// RED BAD SLYTHERIN

  leftbrow.write(140);  
  rightbrow.write(60); 
  
  digitalWrite(motorPin9, HIGH);
  delay(activePulse9);
  digitalWrite(RedEye, HIGH);
  digitalWrite(motorPin9, LOW);
  delay(delayTime);
  digitalWrite(RedEye, LOW);  // end of wait, end of eye color
}

