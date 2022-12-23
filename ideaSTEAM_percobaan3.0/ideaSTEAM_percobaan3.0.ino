#define button_A 14

void setup() {
  pinMode(button_A, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  if (digitalRead(button_A) == LOW) {
    Serial.println("button A ditekan!")
  }
  delay(1000);
}
