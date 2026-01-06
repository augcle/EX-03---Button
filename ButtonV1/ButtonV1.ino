// We set the pins we use in
const uint8_t buttonPin = 8;
const uint8_t ledPin    = 12;

void setup() {
  pinMode(INPIN, INPUT_PULLUP);
  pinMode(OUTPIN, OUTPUT);
  digitalWrite(OUTPIN, LOW);
}

void loop() {
  if( digitalRead(INPIN) ) { // If the button is pushed
    digitalWrite(OUTPIN, HIGH); // Turn the LED on
  }
  else {
    digitalWrite(OUTPIN, LOW); // Else keep it off.
  }
}
