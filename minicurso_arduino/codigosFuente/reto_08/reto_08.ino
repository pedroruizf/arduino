//Pines
int ledRojo = 5;
int ledVerde = 3;
int analogPin = 0;

int val = 0;
int referencia = 512;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);// lee el pin entrada
  Serial.println(val); //muestra el valor

  if (val <= referencia) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledRojo, LOW);
  }
  else {
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }
}
