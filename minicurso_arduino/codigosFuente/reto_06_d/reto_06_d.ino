int n = 0;
int tiempo = 200;
int zumbador = 8;//puede ser led azul
int pulsador = 2;

void setup () {
  for (n = 3; n < 8; n++) {
    pinMode(n, OUTPUT);
  }
  pinMode(zumbador, OUTPUT);
  pinMode(pulsador, INPUT);
}
void compruebaacierto() {
  if (digitalRead(pulsador) == HIGH && n == 5) {
    digitalWrite(zumbador, HIGH);
    delay (1000);
    digitalWrite(zumbador, LOW);
    tiempo = tiempo - 20;
    if (tiempo < 10) {
      tiempo = 200;
    }
  }
  if (digitalRead(pulsador) == HIGH && n != 5) {
    for (n = 3; n < 8; n++) {
      digitalWrite(n, HIGH);
    }
    delay(100);
    for (n = 3; n < 8; n++) {
      digitalWrite(n, LOW);
    }
    delay (100);
    tiempo = 200;

  }
  void loop () {
    for (n = 3; n < 8; n++) {
      digitalWrite(n, HIGH);
      delay(tiempo);
      compruebaacierto();
      digitalWrite(n, LOW);
      delay(tiempo);
    }
  }
