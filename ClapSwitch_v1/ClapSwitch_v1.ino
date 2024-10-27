void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D5, INPUT);
}

void loop() {
  if (digitalRead(D5)) {
    digitalWrite(D1, !digitalRead(D1));
    delay(250);
  }
}
