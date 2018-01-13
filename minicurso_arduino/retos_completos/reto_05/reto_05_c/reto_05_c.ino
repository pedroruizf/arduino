int leds[] = {3, 4, 5};
int tiempo = 200;
int pulsador = 2;
int n = 0;
int valorpulsador = 0;

void setup() {
  for (n = 0; n < 3; n++) {
    pinMode(leds[n], OUTPUT);
  }
  pinMode(pulsador, INPUT);
  Serial.begin(9600);
}
void monitoriza() {
  Serial.print("El valor del pulsador es ...");
  Serial.println(valorpulsador);
  delay(1000);
}
void secuencia() {
  for (n = 0; n < 3; n++) {
    digitalWrite(leds[n], HIGH);
    delay(tiempo);
    digitalWrite(leds[n], LOW);
    delay(tiempo);
  }
}
void loop() {
  valorpulsador = digitalRead(pulsador);
  monitoriza();
  if (valorpulsador == 1) {
    secuencia();
  }
}
