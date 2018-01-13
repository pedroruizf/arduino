#include <Servo.h> //incluye la libreria Servo

Servo miservo;//declara objeto miservo de tipo Servo

void setup() {
  miservo.attach(7);//indica el pin de conexión de miservo
}

void loop() {

  miservo.write(0);//gira en un sentido a velocidad máxima
  delay(3000);
  miservo.write(90);//para
  delay(2000);
  miservo.write(180);//gira en el otro sentido a velocidad máxima
  delay(3000);


}
