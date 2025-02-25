/*
created on Feb 24
by Brennan Lee
The blink program, with breadboard
 */

 const int PIN_5 = 5;

 void setup() {
  //initialize digital pin pin5 as an output.
  pinMode(PIN_5, OUTPUT);
 }

void loop() {
  digitalWrite(PIN_5, HIGH);  //turn the LED on (HIGH is the voltage level)
  delay(1000); //wait for length of variable PIN_5
  digitalWrite(PIN_5, LOW);   //turn the LED off by making the voltage LOW
  delay(1000); //wait for a second

  PIN_5 = PIN_5 + 1000;  // add 1 second (or 1000) to variable PIN_5
}

