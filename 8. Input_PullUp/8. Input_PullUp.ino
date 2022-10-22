/*
 Main Theme : 
     The goal of this circuit is to use the built-in input pull up resistor (pressed = 0/0v not pressed = 1/5v) 
of the arduino and show its value in the serial monitor.
*/
int input = (digitalRead(2)); //Reads the value from a specified digital pin, either HIGH or LOW.
void setup(){
Serial.begin(9600); 
pinMode(2,INPUT_PULLUP); //sets pin 2 as a built in pull up
}

void loop(){
Serial.println(); 
Serial.print("The push button value is : "); //labels the value of input
Serial.print(input); //prints the value of input
}