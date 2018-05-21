#include <Servo.h> 
//#include <Keyboard.h>

int keystrokes;           // raw user input  
 
void setup() {  
 Serial.begin(9600);  
 Serial.println("      Arduino Serial Servo Control");  
 Serial.println("Press < or > to move, spacebar to center"); 
Serial.println();  

pinMode(2, OUTPUT);  // on/off for LED - 1 on
digitalWrite(2, HIGH); // active high is not closed
}  


void loop() {  
 // wait for serial input  
 if (Serial.available() > 0) {  
   keystrokes = Serial.read();     // read the incoming byte: 



//// RESET
   if (keystrokes == 32) // ' ' is space for reset
   { 
    digitalWrite(2, HIGH); // active high is not closed
   } 

//   if (keystrokes == 108) // 'l' is for left look
//   if (keystrokes == 114) // 'r' is for right look
//   if (keystrokes == 117) // u


///// CANDY DOWN  = d
   if (keystrokes == 100) { 
       digitalWrite(2, LOW); // active high is not closed
       delay(500);
       digitalWrite(2, HIGH); // active high is not closed
       delay(1000);
       }


///// CANDY DOWN  = l
   if (keystrokes == 108) { 
       digitalWrite(2, LOW); // active high is not closed
       delay(1000); // more candy if you are nice
       digitalWrite(2, HIGH); // active high is not closed
       delay(1000);
       }


//   if (keystrokes == 97) // 'a' is for up relay! :)
//     if (keystrokes == 122) // 'z' is for down! relay :)
// if (keystrokes == 50) // '2' is  'red' color on resistor 
//  if (keystrokes == 48) // '0' is  'black' - so turn off
 
}  
}  
