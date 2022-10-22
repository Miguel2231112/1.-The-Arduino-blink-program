/*
 Main Theme : 
     The goal of this circuit is to use the "if" statement with a built-in Pull up resistor
that "if" not pressed Red and Green is on and "if" pressed Red and Blue is on.
*/
void setup()

{
Serial.begin(9600); //optional to print value
pinMode(2,INPUT_PULLUP); //built-in Pull Up for PB
//declare pins 7-9 as an output
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
}

void loop()
{
int input = digitalRead(2); //variable to optimize coding
 
if (input) { // if input is not pressed RGB is yellow
digitalWrite(7, 1); //green
digitalWrite(8, 0); //red
digitalWrite(9, 1); //blue
}
else { // but when pressed RGB is purple
digitalWrite(7,0); //green
digitalWrite(8,1); //red
digitalWrite(9,1); //blue
  }
// to display value
Serial.print("PB Value is : ");
Serial.println(digitalRead(2));
delay(100);
}