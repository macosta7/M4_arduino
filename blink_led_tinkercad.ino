void setup()
{
  pinMode(0, OUTPUT); //configura o LED como saída
}

void loop()
{
  digitalWrite(0, HIGH); //acende o LED
  delay(1000); //espera por 1 segundo
  digitalWrite(0, LOW); //apaga o LED
  delay(1000); //espera por 1 segundo
}