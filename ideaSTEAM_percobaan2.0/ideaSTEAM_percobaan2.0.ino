#include <Adafruit_NeoPixel.h>

#define PIN 23
#define jumlah_LED 3
Adafruit_NeoPixel pixels(jumlah_LED, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pixels.clear();
}

void loop() {
  
  pixels.setPixelColor(0, pixels.Color(100, 0, 0)); //Red
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 100, 0)); //Green
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 0, 100)); //Blue
  pixels.show();
  delay(1000);

}
