// Super simple drive controls that receive signals from an Emotive EEG system for "thought controlled" drive
// take f forward b backward l left and r right to navigate - leds and inverse logic for pulling relay low for motor drives
// this version does not have damping  or buffering, so jittery - but will smooth things

int incomingByte = 0;   // for incoming serial data
const int wait = 1000;

void setup() {

        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
        pinMode(2, OUTPUT);
        pinMode(6, OUTPUT);
        pinMode(3, OUTPUT);
        pinMode(7, OUTPUT);
        pinMode(4, OUTPUT);
        pinMode(8, OUTPUT);
        pinMode(5, OUTPUT);
        pinMode(9, OUTPUT);  //# if you want it to pull relay fully low
                        
        digitalWrite(6, HIGH); // active low to drive chair - so we inverted signal
        digitalWrite(7, HIGH); // active low to drive chair - so we inverted signal
        digitalWrite(8, HIGH); // active low to drive chair - so we inverted signal
        digitalWrite(9, HIGH); // active low to drive chair - so we inverted signal


}

void loop() {

        // LEDS are 2345  f forward b backward  l left and r right
        // Pins 6 7 8 9  are fblr - inverse logic for active low relays

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte, DEC);

                 if (incomingByte == 102) // f to go forward =- green
                 {  digitalWrite(2, HIGH); // LED
                    digitalWrite(6, LOW);  // Pull the relay control low
                    delay(wait);              // wait for a second
                    digitalWrite(2, LOW); // and return to inactive
                    digitalWrite(6, HIGH);  // reset relay control
                 } 
              
                 else if (incomingByte == 98) // b to go back - red  
                 {   digitalWrite(3, HIGH); // 
                     digitalWrite(7, LOW);  // Pull the relay control low
                     delay(wait);              // wait for a second
                     digitalWrite(3, LOW); // and return to inactive
                     digitalWrite(7, HIGH);  // reset relay control
                 } 
              
                 else if (incomingByte == 108) //   l to turn left - yellow
                 {   digitalWrite(4, HIGH); // 
                     digitalWrite(8, LOW);  // Pull the relay control low
                     delay(wait);              // wait for a second
                     digitalWrite(4, LOW); // and return to inactive
                     digitalWrite(8, HIGH);  // reset relay control
                 }  
              
                 else if  (incomingByte == 114) //  >  r to turn right - blue
                  {   digitalWrite(5, HIGH); // 
                      digitalWrite(9, LOW);  // Pull the relay control low
                      delay(wait);              // wait for a second
                      digitalWrite(5, LOW); // and return to inactive
                      digitalWrite(9, HIGH);  // reset relay control
                 } 


                delay(wait);  // let's just chill
                delay(wait);  
        }
}
