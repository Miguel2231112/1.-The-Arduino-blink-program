/*
  Main Theme : 
     The goal of this circuit is to show the function of a pull down resistor (0V when PB is not pressed and 5V when PB is pressed)
*/
void setup()

{
Serial.begin(9600); //Sets the data rate in bits per second (9600) for serial data transmission.
pinMode(2,INPUT); //Sets pin no. 2 as an input
}

void loop()
{
Serial.print("PB Value is : "); //label
Serial.println(digitalRead(2)); //digitalRead reads the value of pin 2 (0 or 1) Serial.print orints the value of digitaread
delay(100); //delay to optimize
}