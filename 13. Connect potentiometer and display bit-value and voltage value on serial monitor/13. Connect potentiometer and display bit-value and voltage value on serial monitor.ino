/*
Main Theme : 
     The goal of this circuit is to show how PWM works in a digital circuit that 
sends the same function as an analog output from 0-1023 or 8 bits that is converted 
to the voltage value of the arduino. 0V-5V
*/
void setup() {
  Serial.begin(9600); //Sets the data rate in bits per second (9600) for serial data transmission.
}

void loop() {
  int sensorValue = analogRead(A0); // declared "analogRead(A0)" as a variable named sensorValue
  float voltage = sensorValue * (5.0 / 1023.0);  // converts 0 - 1023 to a voltage (0 - 5V) with decimals using float
  Serial.println(voltage); // prints out the value from equation above which is voltage
} 
