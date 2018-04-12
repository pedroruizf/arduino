int leds[] = {3, 4, 5};
int n = 0;
int tiempo = 200;
int zumbador = 7;
int pulsador = 2;

void setup () {
  for (n = 0; n < 3; n++) {
    pinMode(leds[n], OUTPUT);
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
  if (digitalRead(pulsador) == HIGH && n != 1) {
    for (n = 0; n < 3; n++) {
      digitalWrite(leds[n], HIGH);
    }
    delay(100);
    for (n = 0; n < 3; n++) {
      digitalWrite(leds[n], LOW);
    }
    delay (100);
    tiempo = 200;

  }
  void loop () {
    for (n = 0; n < 3; n++) {
      digitalWrite(leds[n], HIGH);
      delay(tiempo);
      compruebaacierto();
      digitalWrite(leds[n], LOW);
      delay(tiempo);
    }
  }
