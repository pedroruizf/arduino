int led = 3;
int val = 0;


void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    val = Serial.read();
  }
  Serial.println(val, DEC);

  switch (val) {
    case 48:
      {
        digitalWrite(led, LOW);
        break;
      }
    case 49:
      {
        digitalWrite(led, HIGH);
        break;
      }
  }
}

