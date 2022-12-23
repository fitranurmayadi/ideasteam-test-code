#include <Adafruit_NeoPixel.h>

#define PIN 23
#define jumlah_LED 3
Adafruit_NeoPixel pixels(jumlah_LED, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pixels.clear();

  pixels.setPixelColor(0, pixels.Color(100, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 100, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 100));

  pixels.show();
  delay(2000);
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(100, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(100, 10, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 100, 0));
  pixels.show();
  delay(1000);

}
