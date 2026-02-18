/*
Mohammed Afheej
Feb 18,2026
it make the Arduino blink and everytime it blinks it takes 1 seconed longer
*/
int blinkTime = 1000; // set variable to 1000
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  blinkTime = blinkTime + 1000; // adds 1 second to the variable blinkTIme
}
