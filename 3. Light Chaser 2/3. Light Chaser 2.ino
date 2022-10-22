/*
  Main Theme : 
    The purpose o fthe 2nd light chaser is for the signal to go back and forth instead of only going one way
*/
void setup() {
//declares pinmode 7-11 as an input for data transmission
pinMode(7,INPUT); 
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
}
int t = 250; //used variable "t" for time which is 250 ms
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
// at this point LED will comeback to from 11 to 7 vice-versa
digitalWrite(10,1); //turns on pin 10
delay(t);
digitalWrite(10,0); //turns off pin 10
digitalWrite(9,1); //turns on pin 9
delay(t);
digitalWrite(9,0); //turns off pin 9
digitalWrite(8,1); //turns on pin 8
delay(t);
digitalWrite(8,0); //turns off pin 8
digitalWrite(7,1); //turns on pin 7
delay(t);
digitalWrite(7,0); //turns off pin 7
}
