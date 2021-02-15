#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 8);

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}


int x = 0;
int line = 0;

void setup() {
  strip.begin();
  strip.clear();
  strip.setBrightness(25);

}

void loop() {
  for (int j = 0; j < 255; j++) {
    for (int i = 0; i < strip.numPixels(); i++) {
      x = (i+j)%255;
      strip.setPixelColor(i, Wheel(x));
    }
    strip.show();
    delay(5);
  }
}
