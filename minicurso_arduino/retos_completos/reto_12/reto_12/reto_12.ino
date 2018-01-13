#include <Servo.h> //incluimos la libreria Servo

Servo miservo; //declaramos un objeto de tipo Servo llamado miservo

int val = 0;
int i = 0;

void setup() {
  miservo.attach(7);//conectamos el objeto miservo al pin digital 7
}

void loop() {
  for (i = 0; i < 180; i++) {
    miservo.write(i);
    delay(10);
  }
  for (i = 180; i > 0; i--) {
    miservo.write(i);
    delay(10);
  }


}

