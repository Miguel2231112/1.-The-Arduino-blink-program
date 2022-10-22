/*
Main Theme : 
     The goal of this circuit is to show how the "analogWrite(AX)" 
writes different values from 0-255 that can change depending on the voltage
*/
void setup() {
Serial.begin(9600); //Sets the data rate in bits per second (9600) for serial data transmission.
// sets pin 7-9 as an output
pinMode (9, OUTPUT);
pinMode (8, OUTPUT);
pinMode (7, OUTPUT);
}

int v_to_b = 204.6; //makes 1023/5 into a variable named "v_to_b"
void loop() {
int sensorValue = analogRead(A0); //sets "analogRead(A0)" as a variable names "sensorValue"
float voltage = sensorValue / (v_to_b);
Serial.print("Voltage value is : "); //label
Serial.println(voltage); //prints out value
delay(100);//optimize

if (voltage >= 0){ // if voltage is 0 rgb is black/Low
analogWrite(9,0);
analogWrite(8,0);
analogWrite(7,0);
}
  
if (voltage >= 1){ // if voltage is 1 bit value is 23
analogWrite(9,23);
analogWrite(8,23);
analogWrite(7,23);
}
if (voltage >= 2){ // if voltage is 2 bit value is 63
analogWrite(9,63);
analogWrite(8,63);
analogWrite(7,63);
}
if (voltage >= 3){ // if voltage is 3 bit value is 127
analogWrite(9,127);
analogWrite(8,127);
analogWrite(7,127);
}
if (voltage >= 4){ // if voltage is 4 bit value is 191
analogWrite(9,191);
analogWrite(8,191);
analogWrite(7,191);
}
if (voltage >= 5){ // if voltage is 5 bit value is 255/High
analogWrite(9,255);
analogWrite(8,255);
analogWrite(7,255);
}

}


