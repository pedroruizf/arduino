#include <Servo.h> //incluye la librería Servo

Servo miservo;//creamos un objeto tipo Servo llamado miservo
int valorPoten;
int valorServo;
int poten = 0;

void setup() {
  // put your setup code here, to run once:
  miservo.attach (7); //indicamos el pin digital dónde se conecta el servo
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorPoten = analogRead (poten);
  valorServo = map(valorPoten, 0, 1023, 0, 179); // reescala el valor leido en el potenciómetro
  Serial.print ("el angulo en º es ...");
  Serial.println(valorServo);
  miservo.write (valorServo);

}
