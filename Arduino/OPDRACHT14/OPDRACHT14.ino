#include <Servo.h> 
Servo myServo; 
int servoPin = 9; 
int pos = 0;

// Declare a servo object for us to control // Var for the pin the servo connects to
// Var to keep track of the servo's position
  
void setup() {
  myServo.attach(servoPin); // Tell the servo to what pin it's connected to
}

void loop() {
  for(pos = 0; pos < 160; pos += 1.5){ // Loop, pos is added to (from 0 to 160)
    myServo.write(pos); // Turn the servo to the position in pos
    delay(15); // Wait 15ms 
   }
    for(pos = 160; pos >= 1; pos -= 1.5){
      // Loop, pos is deducted from (from 160 to 1) 
      myServo.write(pos); // Turn the servo to the position in pos 
      delay(15); // Wait 15ms
  } 
   for(pos = 0; pos < 100; pos += 3){ // Loop, pos is added to (from 0 to 160)
    myServo.write(pos); // Turn the servo to the position in pos
    delay(5); // Wait 15ms 
   }
    for(pos = 100; pos >= 1; pos -= 3){
      // Loop, pos is deducted from (from 160 to 1) 
      myServo.write(pos); // Turn the servo to the position in pos 
      delay(5); // Wait 15ms
  } 
}
