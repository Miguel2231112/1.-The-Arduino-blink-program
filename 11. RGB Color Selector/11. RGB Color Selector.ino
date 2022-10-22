/*
Main Theme : 
     The goal of this circuit is to use the command "analogWrite" to use a range of colors
using an RGB from 0-255  Red, Green, and Blue.
*/
void setup() {
//sets pin 8-10 as an output
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
//choose any color in an RGB from 0-255 to match color e.g 255,255,255 as white.
//analogWrite uses PWM to perform the same function as an analog power source
analogWrite(10, 48); //Red 
analogWrite(9, 181); //Green
analogWrite(8, 208); //Blue
}
