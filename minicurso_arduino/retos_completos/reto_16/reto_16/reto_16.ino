int luz;
int luzled;
int led = 11;
int ldr = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  luz = analogRead (ldr);
  Serial.print("la luz es ...");
  Serial.println(luz);
  luzled = map (luz, 150, 913, 255, 0);
  analogWrite (led, luzled);
}
