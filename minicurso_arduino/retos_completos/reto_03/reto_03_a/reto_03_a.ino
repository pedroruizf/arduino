int corto = 100; //Declara la variable de argumento entero "corto" y la inicializa con el valor 100 (letra S)
int pausa = 300; //tiempo entre letra y letra
int largo = 300; //variable de argumento entero "largo" y la inicializa con el valor 300 (letra O)
int espera = 1000; //variable argumento entero "espera" y la inicializa con el valor 1000 (tiempo entre SOS - SOS)
int n = 0;
int zumb = 3; //PIN digital al que conectamos el zumbador

void setup() { //comienza la configuracion
  pinMode(zumb, OUTPUT);
}

void loop() {
  for (n = 0; n < 3; n++) { //Iteracion en la que la variable n comienza con el valor 0
    digitalWrite(zumb, HIGH); // y va aumentando en 1 en cada ciclo hasta que toma el valor 2,
    delay(corto); // con lo que las instrucciones comprendidas entre los corchetes
    digitalWrite(zumb, LOW); // se repiten 3 veces
    delay(corto);
  }

  delay(pausa); //Tiempo entre letras

  for (n = 0; n < 3; n++) { //Aqui esta la O
    digitalWrite(zumb, HIGH);
    delay(largo);
    digitalWrite(zumb, LOW);
    delay(largo);
  }

  delay(pausa);

  for (n = 0; n < 3; n++) {
    digitalWrite(zumb, HIGH);
    delay(corto);
    digitalWrite(zumb, LOW);
    delay(corto);
  }

  delay(espera); //Tiempo hasta repetir SOS de nuevo
}
