#define OUTPIN 12
#define INPIN 8

void setup() {
  pinMode(INPIN, INPUT_PULLUP);
  pinMode(OUTPIN, OUTPUT);
  digitalWrite(OUTPIN, LOW);
}

void loop() {
  if( digitalRead(INPIN) ) {digitalWrite(OUTPIN, HIGH);}
  else {digitalWrite(OUTPIN, LOW);}
}
