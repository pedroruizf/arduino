#include <Servo.h>//llama a la librería con las instrucciones para los servos

int luz;
Servo miservo;

void setup() {
  pinMode(13, OUTPUT);
  pinMode (12,OUTPUT);
  miservo.attach (9);//controlamos el servo con el pin 9 debe ser pin PWM
  Serial.begin (9600);//establece comunicación con el PC
  miservo.write (0);
  digitalWrite (13,LOW);
  digitalWrite (12,LOW);
}

void loop() {
  luz=analogRead (0);
  Serial.println (luz);//muestra en el PC el valor de luz
  delay (100);  
  
  if (luz<512) {
   digitalWrite (13,LOW);
   digitalWrite (12,HIGH); 
   miservo.write (90); 
    
  }
  else {
   digitalWrite (13,HIGH);
   digitalWrite (12,LOW); 
   miservo.write (0); 
  }
}
