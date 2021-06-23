float sensorValue = 0; 
int sensorPin = A0; 
int greenLedPin = 10;

void setup() { 
  Serial.begin(9600);
  
  pinMode(sensorPin, INPUT); 
  pinMode(greenLedPin, OUTPUT);
}
void loop() {
  sensorValue = analogRead(sensorPin); 
  // Read the value/current on the sensor pin and
// store that values in the variable sensorValue 
sensorValue = (sensorValue/1023)*255; 
// Rescale the sensor's value.
// variable for sensor value // variable for sensor pin // variable for green LED pin
// Start the Serial connection at a // speed of 9600 bps
// Input pin for potmeter or LDR // Output pin for LED

// Change the values 1023 and 255 to calibrate
//the sensor.
analogWrite(greenLedPin, sensorValue);// Send power to LED 
Serial.println(sensorValue); // Print the sensorValue to the serial
// connection 
delay(100); // Wait 0.1 seconds
}
