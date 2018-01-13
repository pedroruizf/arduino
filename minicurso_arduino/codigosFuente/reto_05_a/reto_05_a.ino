int pulsador = 2;
int tiempo = 200;
int n;

void setup() {
  for (n = 3; n < 6; n++) {

    pinMode (n, OUTPUT);
  }
  pinMode (pulsador, INPUT);

}

void flash() {

  for (n = 3; n < 6; n++) {
    digitalWrite (n, HIGH);
    delay(tiempo);
    digitalWrite (n, LOW);
    delay(tiempo);

  }

}

void loop() {

  if (digitalRead (pulsador) == HIGH) {

    flash();
  }

}



