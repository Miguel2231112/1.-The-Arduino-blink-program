/*
  Main Theme : 
    The purpose of using a relay is because the arduino could only handle up to 5V but the motor needs a
batter power supply that is why we used a 9V Battery.
*/

int time_wait = 5000; // Creates the variable: "time_wait" in a value of 5000 ms.

void setup() {
  pinMode(13, OUTPUT); // This sets the pin 13 as output.
}

void loop() {
  digitalWrite(13, 1); // This turns on the relay (The voltage is 1).
  delay(time_wait); // Waits for time_wait milliseconds (5000 milliseconds).
  digitalWrite(13, 0); // This turns off the relay (The voltage is 0). 
  delay(time_wait);
}