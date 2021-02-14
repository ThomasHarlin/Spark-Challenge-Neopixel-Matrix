#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 7);

int light = 0;
int isOn;

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear();
  strip.setBrightness(50);

  isOn = false;

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < strip.numPixels(); i++) {
    if (isOn) {
      strip.setPixelColor(i, 255, 255, 255);
    }
    else {
      strip.setPixelColor(i, 0, 0, 0);
    }
    isOn=!isOn;
  }
  strip.show();
}
