#define joystick_x 36
#define joystick_y 39

int x = 0;
int y = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {

  x = analogRead(joystick_x);
  y = analogRead(joystick_y);

  x = abs(map(x,3600,610, 0, 100));
  y = abs(map(y, 510,3400, 0, 100));
  
  Serial.print("Nilai X : ");
  Serial.println(x);

  Serial.print("Nilai Y : ");
  Serial.println(y);
  delay(1000);
}
