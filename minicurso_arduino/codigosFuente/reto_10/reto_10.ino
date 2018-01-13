int led = 3; // elegimos el pin del led
int pulsador = 2; // elegimos el pin del pulsador
int x = 0; // configuramos la variable para incrementar el valor de luminosidad

void setup() {
  pinMode(led, OUTPUT); // declaramos led como salida
  pinMode(pulsador, INPUT); // declaramos pulsador como entrada
}
void loop() {
  while (digitalRead(pulsador) == HIGH && x <= 255) { // chequea si el pulsador está pulsado y x es menor de 255
    analogWrite(led, x); // aumenta la luminosidad del led en función del tiempo de activación de pulsador
    delay(20);
    x = x + 3;
  }
  if (x > 255) {
    x = 0; // asigna el valor 0 a x
    analogWrite(led, 0); // apaga el led
  }
}
