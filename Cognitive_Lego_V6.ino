/// COGNITIVE LEGO

#include <Servo.h> 
#include <Keyboard.h>

Servo eyes;  // create servo object to control a servo 
Servo neck;  // create servo object to control a servo 
Servo left_arm;  // create servo object to control a servo 
Servo right_arm;  // create servo object to control a servo 

int moveServo;           // raw user input  
 
void setup() {  
 Serial.begin(9600);  
 Serial.println("      Arduino Serial Servo Control");  
 Serial.println("Press < or > to move, spacebar to center");  
 Serial.println();  

eyes.attach(2);  // attaches the servo on pin 2
neck.attach(9);  // attaches the servo on pin 9
left_arm.attach(4);  // attaches the servo on pin 4
right_arm.attach(5);  // attaches the servo on pin 5

//pinMode(10, OUTPUT);  // on/off for motor control - RELAY
//pinMode(2, OUTPUT);  // on/off for LED - 1 on
//digitalWrite(10, HIGH); // active high is not closed
//digitalWrite(2, LOW); // active high is not closed

// Reset
     eyes.write(100);  
     left_arm.write(100); 
     right_arm.write(100);
     neck.write(90); 
}  


void loop() {  
 // wait for serial input  
 if (Serial.available() > 0) {  
   moveServo = Serial.read();     // read the incoming byte: 

//// RESET
   if (moveServo == 32) // ' ' is space for reset
   { 
     eyes.write(100);  
     left_arm.write(100); 
     right_arm.write(100);
     neck.write(90);  
   } 

///// EYES LEFT
   if (moveServo == 108) // 'l' is for left look
   { 
     eyes.write(160); 
   } 
   
///// EYES RIGHT
   if (moveServo == 114) // 'r' is for right look
   { 
     eyes.write(40); 
   } 

///// NECK - shake no and then reset
   if (moveServo == 115) { 
       neck.write(70); 
       delay(500);
       neck.write(120); 
       delay(500);
       neck.write(80); 
       delay(500);
       neck.write(120); 
       delay(500);
       neck.write(90);
       }



///// ARMS UP - 'u'
   if (moveServo == 117) { 
       left_arm.write(40); 
       right_arm.write(160); 
       }
   

///// ARMS DOWN - 'd' 
   if (moveServo == 100) { 
       left_arm.write(160); 
       right_arm.write(40); 
       }


/// CROSS EYES // wired together for now
//   if (moveServo == 99) // 'c' is for crosseyed ! :)
//   { 
//     left_eye1.write(60); 
//     right_eye1.write(130); 
//     left_eye2.write(60); 
//     right_eye2.write(130); 
//   } 


////// LEDS AND MOTORS
////// LEDS AND MOTORS

   if (moveServo == 97) // 'a' is for up relay! :)
   { digitalWrite(10, LOW); // I think active low to gate
   } 

      if (moveServo == 122) // 'z' is for down! relay :)
   { digitalWrite(10, HIGH); // active high is not closed
   } 

   if (moveServo == 50) // '2' is  'red' color on resistor 
   { 
    digitalWrite(2, HIGH); // active high is not closed
   } 

   if (moveServo == 48) // '0' is  'black' - so turn off
   { 
    digitalWrite(2, LOW); // active high is not closed
   } 
 
}  
 
// }  
}  
