int leds[] = {3, 4, 5};
int n = 0;
int tiempo = 30;

void setup() { //comienza la configuración
  for (n = 0; n < 3; n++) {
    pinMode(leds[n], OUTPUT);
  }
}

void loop() {
  for (n = 0; n < 3; n++) {
    digitalWrite (leds[n], HIGH);
    delay(tiempo);
    digitalWrite(leds[n + 1], HIGH);
    delay(tiempo);
    digitalWrite (leds[n], LOW);
    delay(tiempo * 2);
  }
  for (n = 2; n >= 0; n--) {
    digitalWrite (leds[n], HIGH);
    delay(tiempo);
    digitalWrite(leds[n - 1], HIGH);
    delay(tiempo);
    digitalWrite (leds[n], LOW);
    delay(tiempo * 2);
  }
}
