 
void setup() {  
    pinMode(2, OUTPUT);  // on/off for LED - 1 on
    pinMode(3, OUTPUT);  // on/off for LED - 1 on
    pinMode(4, OUTPUT);  // on/off for LED - 1 on
    pinMode(5, OUTPUT);  // on/off for LED - 1 on
    pinMode(6, OUTPUT);  // on/off for LED - 1 on
    
    digitalWrite(2, LOW); // active high is not closed
    digitalWrite(3, LOW); // active high is not closed
    digitalWrite(4, LOW); // active high is not closed
    digitalWrite(5, LOW); // active high is not closed
    digitalWrite(6, LOW); // active high is not closed

  }  

int d = 500;
 
void loop() {  
   delay(d); 
   digitalWrite(2, HIGH);   // r RED
   delay(d);
   digitalWrite(3, HIGH);   // g GREEN
   delay(d);
   digitalWrite(4, HIGH);  // b BLUE
   delay(d);
   digitalWrite(5, HIGH);  // w WHITE
   delay(d);
   digitalWrite(6, HIGH);   // y YELLOW 
   delay(d);

   digitalWrite(2, LOW);   // r RED
   digitalWrite(3, LOW);   // g GREEN
   digitalWrite(4, LOW);   // b BLUE
   digitalWrite(5, LOW);   // w WHITE
   digitalWrite(6, LOW);   // y YELLOW 



 
}  

