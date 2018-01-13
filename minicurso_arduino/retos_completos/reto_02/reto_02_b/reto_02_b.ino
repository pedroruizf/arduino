int tiempo = 200;

void setup() {
  for (n = 3; n < 6; n++) {

    pinMode (n, OUTPUT);
  }


}

void loop() {

  for (n = 3; n < 6; n++) {
    digitalWrite (n, HIGH);
    delay (tiempo);
    digitalWrite (n, LOW);
    delay (tiempo);

  }

}

