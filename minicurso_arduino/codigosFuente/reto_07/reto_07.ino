int led = 3;
int ldr = 1;
int medida = 0;
int nivel = 970; //variable que guarda el límite de luz al que se activa el led

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void monitoriza() { //procedimiento que envía al puerto serie, para ser leído en el monitor,
  Serial.print("La medida es ...");
  Serial.println(medida);
  delay(1000); //para evitar saturar el puerto serie
}
void loop() {
  medida = analogRead(ldr);
  monitoriza();
  if (medida > nivel) { //si la señal del sensor supera el nivel marcado:
    digitalWrite(led, HIGH); //se enciende un aviso luminoso
  }
  else { // si la señal está por debajo del nivel marcado
    digitalWrite(led, LOW);
  }
}
