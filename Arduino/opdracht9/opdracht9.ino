int speakerPin = 8;

void setup() { 
  pinMode(speakerPin, OUTPUT);
}

//void loop() { 
//tone(speakerPin, 277, 200); 
//delay(250);
//tone(speakerPin, 294, 200); 
//delay(250);
//tone(speakerPin, 440, 200); 
//delay(250);
//tone(speakerPin, 277, 200); 
//delay(500);
//}
void loop() { 
  tone(speakerPin, 1800, 20000); 
  delay(250);
  tone(speakerPin, 200, 20000); 
  delay(350);
  tone(speakerPin, 1800, 20000); 
  delay(250);
}
