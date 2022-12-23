#include "pitch.h"
#include "oled_bitmap.h"

#include <Wire.h>
#include <Adafruit_GFX.h>
  #include <Adafruit_SSD1306.h>   

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#include <Adafruit_NeoPixel.h>
#define PIN        23 // On Trinket or Gemma, suggest changing this to 1
#define NUMPIXELS 3 // Popular NeoPixel ring size
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

void setup() {
  Serial.begin(115200);
  buzzer_setup();
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  display.clearDisplay();
  display.drawBitmap(0, 0, image_data_IdeaSTEAM, 128, 64, 1);
  display.display();
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  delay(2000);
}

void loop() {
  displayText("IDEASTEAM", 40,32);
  traffic_light();
  buzzer_play();
}

void traffic_light() {
  pixels.clear(); // Set all pixel colors to 'off'
  pixels.setPixelColor(0, pixels.Color(150, 0 , 0));
  pixels.setPixelColor(1, pixels.Color(100, 50, 0));
  pixels.setPixelColor(2, pixels.Color(0, 150, 0));
  pixels.show();   // Send the updated pixel colors to the hardware.
}

void buzzer_play() {
  int size = sizeof(melody) / sizeof(int);
  for (int mel = 0; mel <= size; mel++) {
    int jeda = (1000 / tempo[mel]) * 2;
    ledcWriteTone(channel, melody[mel]);
    delay(jeda);
  }
}

void displayText(String text, int x, int y) {
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(x, y);
  display.print(text);
  display.display();
}
