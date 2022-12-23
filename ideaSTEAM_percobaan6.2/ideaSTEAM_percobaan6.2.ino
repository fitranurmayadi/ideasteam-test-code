#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_NeoPixel.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

#define PIN 23
#define jumlah_LED 3

Adafruit_NeoPixel pixels(jumlah_LED, PIN, NEO_GRB + NEO_KHZ800);

#define sensor_ldr 34

int cahaya = 0;

void setup() {
  pixels.begin();
  pixels.clear();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  cahaya = analogRead(sensor_ldr);
  display.clearDisplay();
  display.setCursor(0, 0);
  display.print("Cahaya : ");
  display.print(cahaya);
  display.setCursor(0, 32);
  if (cahaya < 1000) {
    pixels.setPixelColor(0, pixels.Color(100, 100, 100));
    display.print("Gelap : hidupkan LED");
  } else {
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));
    display.print("Terang : matikan LED");
  }
  pixels.show();
  display.display();
  delay(1000);
}
