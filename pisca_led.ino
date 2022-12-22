/*
Criando um código simples pra fazer piscar o LED
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
    
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
}
