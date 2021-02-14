#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 7);

int line = 0;
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
  for (int j = 0; j < 8; j++) {

    for (int i = 0; i < 8; i++) {
      if (isOn) {
        strip.setPixelColor((line + i), 255, 255, 255);
        isOn = !isOn;
      }
      else {
        strip.setPixelColor((line + i), 0, 0, 0);
        isOn = !isOn;
      }

    }
    isOn = !isOn;
    line+=8;
  }
  strip.show();
}
