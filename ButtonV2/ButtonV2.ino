#define OUTPIN 12
#define INPIN 8

bool state = LOW;

void setup() {
  pinMode(INPIN, INPUT_PULLUP);
  pinMode(OUTPIN, OUTPUT);
  digitalWrite(OUTPIN, LOW);
}

void loop() {
  if( digitalRead(INPIN) && state == LOW) {
    digitalWrite(OUTPIN, HIGH);
    state = HIGH;
    delay(500);
    }
  if( digitalRead(INPIN) && state == HIGH) {
    digitalWrite(OUTPIN, LOW);
    state = LOW;
    delay(500);
  }
}
