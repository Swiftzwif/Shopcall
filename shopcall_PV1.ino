 void setup() {
  Serial.begin(115200);
  pinMode(32, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  
 }

 void loop() {
   if (digitalRead(32) == LOW) {
     Serial.println("I love tiff!");
     digitalWrite(2, HIGH);
     delay(200);
     digitalWrite(2, LOW);
  }
  delay(50);
 }
