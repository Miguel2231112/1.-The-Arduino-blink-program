/*
  Main Theme : 
     The goal of this circuit is to show the function of a pull up resistor (5V when PB is not pressed and 0V when PB is pressed)
*/
void setup()

{
Serial.begin(9600); //Sets the data rate in bits per second (9600) for serial data transmission.
pinMode(2,INPUT); //sets pin 2 as input
}

void loop()
{
Serial.print("PB Value is : "); //label
Serial.println(digitalRead(2)); //displays value of pin 2 in the serial monitor
delay(100); //to optimize serial monitor reading
}