int tcorto = 100;
int tlargo = 300;
int pausa = 300;
int espera = 1000;
int n = 0;

void setup() { //comienza la configuracion
  pinMode(3, OUTPUT);
}
void s() { //comienza el bucle para la letra S
  for (n = 0; n < 3; n++) {
    digitalWrite (3, HIGH);
    delay (tcorto);
    digitalWrite (3, LOW);
    delay (tcorto);
  }
}
void o() { //comienza el bucle para la letra O
  for (n = 0; n < 3; n++) {
    digitalWrite (3, HIGH);
    delay (tlargo);
    digitalWrite (3, LOW);
    delay (tlargo);
  }
}
void loop() { //se ejecuta el bucle principal en el orden siguiente
  s();
  delay(pausa);
  o();
  delay(pausa);
  s();
  delay(espera);
}
