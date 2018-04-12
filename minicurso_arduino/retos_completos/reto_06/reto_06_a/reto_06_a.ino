int n = 0;
int tiempo = 200;
int zumbador = 7;
int pulsador = 2;

void setup () {
  for (n = 3; n < 6; n++) {
    pinMode(n, OUTPUT);
  }
  pinMode(zumbador, OUTPUT);
  pinMode(pulsador, INPUT);
}
void compruebaacierto() {
  if (digitalRead(pulsador) == HIGH && n == 1) {
    digitalWrite(zumbador, HIGH);
    delay (1000);
    digitalWrite(zumbador, LOW);
    tiempo = tiempo - 20;
    if (tiempo < 10) {
      tiempo = 200;
    }
  }
}
void loop () {
  for (n = 3; n < 6; n++) {
    digitalWrite(n, HIGH);
    delay(tiempo);
    compruebaacierto();
    digitalWrite(n, LOW);
    delay(tiempo);
  }
}
