int led = 11;
int dato;
bool encendido = false;

void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    dato = Serial.read();

    if (dato == 'a' || dato == 'A') {
      encendido = !encendido;

      if (encendido == true) {

        digitalWrite (led, HIGH);

      }

      else {

        digitalWrite (led, LOW);
      }
    }
  }
}
