/*
 * ShopCall Prototype v0.1
 * Basic button input with LED feedback
 * 
 * Hardware:
 * - ESP32 WROOM-32 Dev Board
 * - Push button connected to GPIO 32 (with internal pull-up)
 * - LED connected to GPIO 2 (built-in LED)
 * 
 * Function: 
 * - Button press (LOW signal) triggers LED flash
 * - Prints message to serial monitor
 * - 200ms LED on time, 50ms debounce delay
 * 
 * Next Version Goals:
 * - Add ESP-NOW wireless communication
 * - Multiple button inputs (4 colors)
 * - Unique message IDs for each button type
 * 
 * Author: J - SwiftNet Solutions
 * Date: December 2024
 */

// Pin definitions
const int buttonPin = 32;  // Button input with internal pull-up
const int ledPin = 2;      // Built-in LED

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP);  // Internal pull-up resistor enabled
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Check if button is pressed (LOW = pressed due to pull-up)
  if (digitalRead(buttonPin) == LOW) {
    Serial.println("Button pressed - ShopCall notification sent");
    
    // LED feedback
    digitalWrite(ledPin, HIGH);
    delay(200);  // LED on for 200ms
    digitalWrite(ledPin, LOW);
  }
  
  delay(50);  // Debounce delay
}
