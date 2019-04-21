int pin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (pin)) {

    Serial.write ('1');
  }

  else {
    Serial.write ('0');
  }

}
