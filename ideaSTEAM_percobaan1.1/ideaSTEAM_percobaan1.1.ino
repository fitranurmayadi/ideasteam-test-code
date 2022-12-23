#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // lebar layar, dalam pixels
#define SCREEN_HEIGHT 64 // tinggi layar, in pixels

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 30);
  display.print("Hello World!");
  display.display();
  delay(2000);

}

void loop() {
  display.clearDisplay();
  display.setCursor(0, 10);
  display.print("Hallo !!!");
  display.display();
  delay(1000);
  
  display.setCursor(0, 20);
  display.print("Nama saya adalah IdeaSTEAM");
  display.display();
  delay(1000);

  display.setCursor(0, 40);
  display.print("Saya senang belajar koding dan STEAM");
  display.display();
  delay(5000);
}
