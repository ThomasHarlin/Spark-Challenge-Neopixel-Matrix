#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 7);

void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(50);
}

void loop() {
  // put your main code here, to run repeatedly:
strip.setPixelColor(0,255,255,255);
strip.show();
}
