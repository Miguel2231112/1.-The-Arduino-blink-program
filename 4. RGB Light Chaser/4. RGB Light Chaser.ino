/*
  Main Theme : 
    The purpose of using an RGB is to only use one electrical component while applying the codes for a light chaser using three pins in a loop.
*/
void setup() {
  //Sets pins 7-9 as an output for RGB
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}
int t = 250; // sets delay to 1/4th of a second for every interval
void loop() { 
digitalWrite(7,1); //turns pin 7 on
delay(t); // sets delay from variable t
digitalWrite(7,0); //turns pin 7 off
delay(t); // sets delay from variable t
digitalWrite(8,1); //turns pin 8 on
delay(t); // sets delay from variable t
digitalWrite(8,0); //turns pin 8 off
delay(t); // sets delay from variable t
digitalWrite(9,1); //turns pin 9 on
delay(t); // sets delay from variable t
digitalWrite(9,0); //turns pin 9 off
delay(t); // sets delay from variable t
}
