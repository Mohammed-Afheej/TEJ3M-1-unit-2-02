 /*
Mohammed Afheej
Feb 18,2026
It make the Arduino blink and everytime it blinks it takes 1 seconed longer.
*/

// global variables
int blinkTime = 1000; // set variable to 1000

// initialize
void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(blinkTime);                  // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(blinkTime);                  // wait for a second
    blinkTime = blinkTime + 1000;      // adds 1 second to the variable blinkTIme
}
