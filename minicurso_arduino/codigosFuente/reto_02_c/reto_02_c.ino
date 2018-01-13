int tiempo = 200;
int n;

void setup() { //comienza la configuracion
  for (n = 3; n < 6; n++) {
    pinMode (n, OUTPUT);
  }
}

void secuencia() {
  for (n = 3; n < 6; n++) {
    digitalWrite (n, HIGH);
    delay (tiempo);
    digitalWrite (n, LOW);
    delay (tiempo);
  }
}

void loop() {
  secuencia();
}
