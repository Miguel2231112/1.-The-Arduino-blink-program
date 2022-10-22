/*
  Main Theme : 
    The purpose of light chaser is for the signal to go one way from pin 7-11.
*/
int t = 250;
void setup() {                

}
 
void loop() {
digitalWrite(7,1); //turns on pin 7
delay(t);
digitalWrite(7,0); //turns off pin 7
digitalWrite(8,1); //turns on pin 8
delay(t);
digitalWrite(8,0); //turns off pin 8
digitalWrite(9,1); //turns on pin 9
delay(t);
digitalWrite(9,0); //turns off pin 9
digitalWrite(10,1); //turns on pin 10
delay(t);
digitalWrite(10,0); //turns off pin 10
digitalWrite(11,1); //turns on pin 11
delay(t);
digitalWrite(11,0); //turns off pin 11
}