//Pines
int ledRojo = 5;
int ledVerde = 3;
int ledAmbar = 4;
int poten = 0;

int val = 0;
int referencia = 512;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode (ledAmbar, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(0);// lee el pin entrada
  Serial.println(val); //muestra el valor

  if (val <= 341) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledAmbar, LOW);
  }

if (val > 341 && val<682) { 
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledAmbar, HIGH);
  }

  
  if (val >= 682) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledAmbar, LOW);
  }


}
