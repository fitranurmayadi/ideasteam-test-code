#define button_A 14
#define button_B 27
#define button_X 12
#define button_Y 26

void setup() {
  pinMode(button_A, INPUT_PULLUP);
  pinMode(button_B, INPUT_PULLUP);
  pinMode(button_X, INPUT_PULLUP);
  pinMode(button_Y, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  if(digitalRead(button_A) == LOW){
    Serial.println("button A ditekan!");   
  }
  if(digitalRead(button_B) == LOW){
    Serial.println("button B ditekan!");   
  }
  if(digitalRead(button_X) == LOW){
    Serial.println("button X ditekan!");   
  }
  if(digitalRead(button_Y) == LOW){
    Serial.println("button Y ditekan!");   
  }
  delay(1000);
}
