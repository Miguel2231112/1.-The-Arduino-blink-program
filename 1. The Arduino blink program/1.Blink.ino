/*
Main theme : is to make a circuit that blinks on and off every 5000 ms
*/
void setup() {
 
  pinMode(13, OUTPUT); //sets pin 13 as an output
}
//makes function go over and over again
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (1=True=HIGH is the voltage level)
  delay(5000);                      // wait for 5 seconds
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW=False=0
  delay(5000);                      // wait for 5 seconds
}
