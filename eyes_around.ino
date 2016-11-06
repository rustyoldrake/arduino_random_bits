/*

*/

int d = 50;
float on = .10;
float off = 10;

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);


}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  digitalWrite(1, HIGH);    // turn the LED off by making the voltage LOW
  delay(d); 
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d); 
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(9, HIGH);  
  delay(on);              // wait for period - LONGER RATIO ON MEANS BRIGHTER 0.016 is 60 hz (1:17) starts to flicker - if you need simmer, us FLOAT, not INT and have "on" time less than 1 ms
  
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(d);
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(d);
  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(off);              // wait for period - LONGER RATIO OFF ON MEANS DIMMER

}
