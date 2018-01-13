int n = 0;
int tiempo = 50;

void setup() { //comienza la configuración
  for (n = 3; n < 6; n++) {
    pinMode(n, OUTPUT);
  }
}

void loop() {
  for (n = 3; n < 6; n++) {
    digitalWrite (n, HIGH);
    delay(tiempo);
    digitalWrite (n, LOW);
    delay(tiempo);
  }
  for (n = 5; n >= 3; n--) {
    digitalWrite (n, HIGH);
    delay(tiempo);
    digitalWrite (n, LOW);
    delay(tiempo);
  }
}
