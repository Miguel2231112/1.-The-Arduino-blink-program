 /*
 Main Theme : 
     The goal of this circuit is to use the "if" statement with a built-in Pull up resistor
that "if" not pressed RGB is white / High and "if" pressed RGB is off.
*/
void setup()

{
Serial.begin(9600); //optional to print value
pinMode(2,INPUT_PULLUP); //builtin Pull Up for PB
//declare pins 7-9 as an output
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
}

void loop()
{
int input = digitalRead(2); //variable to optimize coding
 
if (input) { // if input is not pressed pin 7-9 is 1
digitalWrite(7, 1);
digitalWrite(8, 1);
digitalWrite(9, 1);
}
else { // but when pressed pin 7-9 is 0
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
  }
// to display value
Serial.print("PB Value is : ");
Serial.println(digitalRead(2));
delay(100);
}