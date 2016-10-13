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
  strip.setPixlColor(2,0,255,0);
  strip.setPixelColor(3,0,245,0);
  strip.show();
  delay(100);
  strip.setPixlColor(0,247,236,8);
  strip.setPixlColor(1,124,209,22);
  strip.setPixlColor(2,22,209,197);
  strip.setPixlColor(3,247,236,8);
  strip.setPixlColor(4,247,236,8);
  strip.setPixlColor(5,247,236,8);
  strip.setPixlColor(6,247,236,8);
  strip.setPixlColor(7,247,236,8);
  strip.setPixlColor(8,247,236,8);
  strip.setPixlColor(9,247,236,8);
  strip.setPixlColor(10,247,236,8);
  strip.setPixlColor(11,247,236,8);
  strip.setPixlColor(12,247,236,8);
  strip.setPixlColor(13,247,236,8);
  strip.setPixlColor(14,247,236,8);
  strip.setPixlColor(15,247,236,8);
  strip.show();
}

