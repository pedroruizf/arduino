void setup() { 		//comienza la configuracion
  pinMode(3, OUTPUT);//configura el pin 3 o el que queramos como salida
} 					//termina la configuracion

void loop() { 				//comienza el bucle principal del programa
  digitalWrite(3, HIGH); 	//envia 5V al pin (salida) 3
  delay (500); 			//espera 500 ms pin 3 con 5V
  digitalWrite(3, LOW);	//envia 0V al pin (salida) 3
  delay (100); 			//espera 100 ms pin 3 con 0V
}
