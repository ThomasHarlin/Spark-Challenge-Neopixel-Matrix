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
  if (isOn == true) {
    strip.setPixelColor(0, 255, 255, 255);
    strip.show();
  }

  else {
    strip.clear();
    strip.show();
  }
  delay(100);
  isOn = !isOn;
}
