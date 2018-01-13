int tiempo = 200; //declara una variable como entero y de valor 200

void setup() { //comienza la configuracion
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() { //comienza el bucle principal del programa
  digitalWrite(3, HIGH);
  delay(tiempo);
  digitalWrite(3, LOW);
  delay(tiempo);
  digitalWrite(4, HIGH);
  delay(tiempo);
  digitalWrite(4, LOW);
  delay(tiempo);
  digitalWrite(5, HIGH);
  delay(tiempo);
  digitalWrite(5, LOW);
}
