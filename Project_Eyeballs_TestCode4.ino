
// constants won't change. Used here to set a pin number :
const int ledPin0 =  0;      // the number of the LED pin
const int ledPin1 =  1;      // the number of the LED pin
const int ledPin2 =  2;      // the number of the LED pin
const int ledPin3 =  3;      // the number of the LED pin
const int ledPin4 =  4;      // the number of the LED pin
const int ledPin5 =  5;      // the number of the LED pin
const int ledPin6 =  6;      // the number of the LED pin
const int ledPin7 =  7;      // the number of the LED pin
const int ledPin8 =  8;      // the number of the LED pin
const int ledPin9 =  9;      // the number of the LED pin
const int ledPin10 =  10;      // the number of the LED pin

// Variables will change:
int ON = HIGH;         
int OFF = LOW;       
float TimeON = 20;  // .5 ON and 10 off creates dimness //   1000 on and 1000 off is full intensity blunking
float TimeOFF = 20;
float wait = 100;
    
void setup() {
  pinMode(0, OUTPUT);
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
  
  digitalWrite(9, ON);
}

void blink(int led) {
  digitalWrite(led, ON);
  delay(wait);
  digitalWrite(led, OFF);
}

void loop() 
{
  blink(ledPin1);
  blink(ledPin2);
  blink(ledPin3);
  blink(ledPin4);
  blink(ledPin5);
  blink(ledPin6);
  blink(ledPin7);
  blink(ledPin8);
   
  /*digitalWrite(ledPin1, ON);
  delay(wait);
  digitalWrite(ledPin1, OFF);
  digitalWrite(ledPin2, ON);
  delay(wait);
  digitalWrite(ledPin2, OFF);
  digitalWrite(ledPin3, ON);
  delay(wait);
  digitalWrite(ledPin3, OFF);
  digitalWrite(ledPin4, ON);
  delay(wait);
  digitalWrite(ledPin4, OFF);
  digitalWrite(ledPin5, ON);
  delay(wait);
  digitalWrite(ledPin5, OFF);
  digitalWrite(ledPin6, ON);
  delay(wait);
  digitalWrite(ledPin6, OFF);
  digitalWrite(ledPin7, ON);
  delay(wait);
  digitalWrite(ledPin7, OFF);
  digitalWrite(ledPin8, ON);
  delay(wait);
  digitalWrite(ledPin8, OFF);
  //digitalWrite(ledPin9, ON);
  //delay(wait);
  //digitalWrite(ledPin9, OFF);
  //digitalWrite(ledPin10, ON);
  //delay(TimeON);
8?
  /*digitalWrite(ledPin1, OFF);
  digitalWrite(ledPin2, OFF);
  digitalWrite(ledPin3, OFF);
  digitalWrite(ledPin4, OFF);
  digitalWrite(ledPin5, OFF);
  digitalWrite(ledPin6, OFF);
  digitalWrite(ledPin7, OFF);
  digitalWrite(ledPin8, OFF);
  digitalWrite(ledPin9, ON);
  digitalWrite(ledPin10, OFF);*/
  //delay(TimeOFF);
}

