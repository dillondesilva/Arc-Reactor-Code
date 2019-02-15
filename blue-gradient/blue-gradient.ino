#include <Adafruit_NeoPixel.h>

#define PIN 10

int GRAD = 255;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(24 + 7 + 16, PIN);
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear(); // Initialize all pixels to 'off
  for (int i=0; i < 24 + 7 + 16; i++) {
    strip.setPixelColor(i, 0, GRAD,255);
    GRAD = GRAD - 15;
  };
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}
