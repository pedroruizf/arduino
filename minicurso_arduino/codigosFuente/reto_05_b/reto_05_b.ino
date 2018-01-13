int cadenaleds[] = {3, 4, 5};
int pulsador = 2;
int tiempo = 200;
int n = 0;

void setup() {
  for (n = 0; n < 3; n++) {
    pinMode (cadenaleds[n], OUTPUT);
  }
  pinMode (pulsador, INPUT);
}

void flash() {
  for (n = 0; n < 3; n++) {
    digitalWrite (cadenaleds[n], HIGH);
    delay (tiempo);
    digitalWrite (cadenaleds[n], LOW);
    delay (tiempo);
  }
}

void loop() {
  if (digitalRead(pulsador) == HIGH) {
    flash ();
  }
}
