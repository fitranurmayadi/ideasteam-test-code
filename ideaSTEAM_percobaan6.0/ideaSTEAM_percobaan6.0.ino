#define ldr 34

int cahaya = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  cahaya = analogRead(ldr);
  Serial.println(cahaya);
  delay(1000);
}
