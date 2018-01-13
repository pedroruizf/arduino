int luminosidad = 0; // variable para asignar la luminosidad al led
int led = 3; // pin del led
void setup() {
  // en el setup no hay que configurar nada
}
void loop() {
  for (luminosidad = 0 ; luminosidad <= 255; luminosidad = luminosidad + 3) { // fade in (from min to max)
    analogWrite(led, luminosidad); // ilumina el led con el valor asignado a luminosidad (entre 0 y 255)
    delay(30); // espera 30 ms para que se vea el efecto
  }
  for (luminosidad = 255; luminosidad >= 0; luminosidad = luminosidad - 3) { // fade out (from max to min)
    analogWrite(led, luminosidad);
    delay(30);
  }
}
