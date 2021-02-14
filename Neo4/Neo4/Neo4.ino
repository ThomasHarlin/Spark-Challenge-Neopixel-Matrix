#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 7);

bool isOn;

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear();
  strip.setBrightness(50);

  isOn = true;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (isOn) {
    for (int i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, 255, 255, 255);
    }
    strip.show();
  }
  else {
    for (int i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, 0, 0, 0);
    }
    strip.show();
  }
isOn = !isOn;
delay(200);
}
