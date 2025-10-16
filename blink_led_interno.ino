void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //configura o LED interno como saída
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); //acende o LED
  delay(1000); //espera por 1 segundo
  digitalWrite(LED_BUILTIN, LOW); //apaga o LED
  delay(1000); //espera por 1 segundo
}
