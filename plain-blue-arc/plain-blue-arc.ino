#include <Adafruit_NeoPixel.h>

#define PIN 10
//int LED_START = 0
//int LED_FINISH = 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(24 + 7, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show(); // Initialize all pixels to 'off
  for (int i=0; i < 24 + 7; i++) {
    strip.setPixelColor(i, (51,195,247));
  };
  strip.show();
}
