import processing.serial.*;
Serial myPort;
int val;
//String sensorReading="";
void setup() {
  size(200, 200);
String portName = Serial.list()[4];
myPort = new Serial(this, portName, 9600); // instead of 5, choose what ever
}
  
void draw() {
  background(255);
  if (mouseOverRect() == true) {
  noStroke();  
  fill(195,223,165);
  myPort.write('H');
  }
  else{
  fill(92,154,255);
  noStroke(); 
  myPort.write('L');
  }
  rect(50, 50, 100, 100);
}
boolean mouseOverRect(){
  return((mouseX >= 50) && (mouseX <= 150) && (mouseY >=50) && (mouseY<=150));
}
//void serialEvent (Serial myPort) { 
//  sensorReading = myPort.readStringUntil('\n');
//}
