/*
Main Theme : 
     The goal of this circuit is to use blink without INPUT_PULLUP interfering with the circuit.
*/
int ledState = LOW;  
unsigned long previousMillis = 0; // "unsigned long" makes their range from 0 to 4,294,967,295        
const long interval = 5000; //extended size variables for number storage, and store 32 bits (4 bytes)         
void setup() {
Serial.begin(9600); // Sets the data rate in bits per second (9600 bauds) for serial data transmission.
pinMode(2,INPUT_PULLUP); //built in arduino pull up resistor
pinMode(LED_BUILTIN, OUTPUT); //sets d13 as output for LED
}
void loop() {
Serial.print("The  PB Value is : "); // to label the value
Serial.println(digitalRead(2)); // prints the state of pin no. 2
delay(100); //to optimize data flow
unsigned long currentMillis = millis(); // store 32 bits (4 bytes) ,and making their range from 0 to 4,294,967,295
if (currentMillis - previousMillis >= interval) {//uses "if" statement to make a condition that if current millis is subtracted by the previous one is more than or equal to interval(5000) 
previousMillis = currentMillis; // previousmillis will equal the current one
if (ledState == LOW) {
ledState = HIGH;
} else {
ledState = LOW;
}
digitalWrite(13, ledState);
  }
}

