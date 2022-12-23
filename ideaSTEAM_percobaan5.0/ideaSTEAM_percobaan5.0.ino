#define buzzer 32

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {  
  for (int i = 0; i < 100; i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(250);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(250);
  }
  delay(990);
}
