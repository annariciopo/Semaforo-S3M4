// Definindo os pinos dos LEDs
const int ledVermelho = 14;
const int ledAmarelo = 13;
const int ledVerde = 12;
// Definindo o pino do buzzer
const int buzzer = 27;

void setup() {
  // Inicializando os pinos como saídas
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  // Fase vermelha - Ligando o LED vermelho por 6 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(6000);
  digitalWrite(ledVermelho, LOW);
  
  // Fase amarela - Ligando o LED amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000);
  digitalWrite(ledAmarelo, LOW);

  // Fase verde - Ligando o LED verde por 4 (2+2) segundos
  digitalWrite(ledVerde, HIGH);
  delay(2000);
  // simulando um tempo adicional para pedestres terminarem a travessia
  delay(2000);
  digitalWrite(ledVerde, LOW);
    
  // Fase amarela - Ligando o LED amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(buzzer, HIGH); // Ativa o buzzer junto com o LED amarelo
  delay(500);
  digitalWrite(buzzer, LOW); // Desativa o buzzer
  delay(1500);
  digitalWrite(ledAmarelo, LOW);
}
