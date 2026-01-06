// We set the pins we use in
const uint8_t buttonPin = 8;
const uint8_t ledPin    = 12;

// Used to record the state
bool ledState = LOW;
 
// Function that inverts the LED state
void buttonPushed() {
  if (digitalRead(buttonPin) == LOW) { // Whenever the button is pressed

    ledState = !ledState; // Invert the state

    digitalWrite(ledPin, ledState); // Write the new state to the LED

    delay(200); // Small delay, avoids some jittering
  }
}

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() {
  buttonPushed(); 
}
