const uint8_t buttonPin = 8;
const uint8_t ledPin    = 12;

bool ledState = LOW;

void buttonPushed() {
  if (digitalRead(buttonPin) == LOW) {

    ledState = !ledState;

    digitalWrite(ledPin, ledState);

    delay(200);
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
