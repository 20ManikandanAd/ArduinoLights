#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(30, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  strip.setPixelColor(0,0,0,255);
  strip.show();
  delay(100);
  strip.setPixelColor(1,0,255,0);
  strip.show();
  delay(100);
  strip.setPixelColor(2,0,255,0);
  strip.setPixelColor(3,0,245,0);
  strip.show();
  delay(100);
  strip.setPixelColor(0,247,236,8);
  strip.setPixelColor(1,124,209,22);
  strip.setPixelColor(2,22,209,197);
  strip.setPixelColor(3,247,236,8);
  strip.setPixelColor(4,247,236,8);
  strip.setPixelColor(5,247,236,8);
  strip.setPixelColor(6,247,236,8);
  strip.setPixelColor(7,247,236,8);
  strip.setPixelColor(8,247,236,8);
  strip.setPixelColor(9,247,236,8);
  strip.setPixelColor(10,247,236,8);
  strip.setPixelColor(11,247,236,8);
  strip.setPixelColor(12,247,236,8);
  strip.setPixelColor(13,247,236,8);
  strip.setPixelColor(14,247,236,8);
  strip.setPixelColor(15,247,236,8);
  strip.show();
}

