/*
Main Theme : 
     The goal of this circuit is to showcase the "if" statement that is used with
a range of voltage numbers that is converted from reading an "analog" output 0-1023 to 0V-5V
by turning on 1 LED with 1 volt and 2 with 2 volts and so on.
*/
void setup() {
Serial.begin(9600); //Sets the data rate in bits per second (9600) for serial data transmission.
//sets pin 2-6 as an output
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);
}

int v_to_b = 204.6;
void loop() {
int sensorValue = analogRead(A0); //declares "analogRead(A0)" to be named as sensorValue
float voltage = sensorValue / (v_to_b); // to mnake a number have a decimal point for specifc values
/*
sets pin 2-6 as low when voltage isnt going through
*/
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,0);
Serial.print("Voltage value is : "); //label
Serial.println(voltage); //displays voltage value
delay(100);

if (voltage >= 1){ //if voltage is more than or equal to 1 
digitalWrite(2,1); //pin 2 must turn on
}
if (voltage >= 2){ //if voltage is more than or equal to 2 
digitalWrite(3,1); //pin 3 must turn on
}
if (voltage >= 3){ //if voltage is more than or equal to 3 
digitalWrite(4,1); //pin 4 must turn on
}
if (voltage >= 4){ //if voltage is more than or equal to 4 
digitalWrite(5,1); //pin 5 must turn on
}
if (voltage >= 5){ //if voltage is more than or equal to 5 
digitalWrite(6,1); //pin 6 must turn on
}

}


