// Definición del pin del LED (LED_BUILTIN usa el LED integrado en la placa, normalmente el pin 13)
const int pinLED = LED_BUILTIN;

void setup() {
  // Configura el pin digital como salida
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH); // Enciende el LED
  delay(1000);                // Espera 1 segundo (1000 milisegundos)
  digitalWrite(pinLED, LOW);  // Apaga el LED
  delay(1000);                // Espera 1 segundo
}
