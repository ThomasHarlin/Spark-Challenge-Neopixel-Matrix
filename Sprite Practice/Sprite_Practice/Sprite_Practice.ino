#include <Adafruit_NeoPixel.h>
#include"frames.h"

Adafruit_NeoPixel strip(64, 8);

int whichFrame = 0;

int colors [7][3] {
  {255, 0, 0},
  {255, 100, 0},
  {255, 255, 0},
  {0, 255, 0},
  {0, 0, 255},
  {60, 0, 255},
  {255, 0, 255},
};


void setup() {
  strip.begin();
  strip.clear();
  strip.setBrightness(25);
}

void loop() {
  for (int i = 0; i < strip.numPixels(); i++) {

    int pixAddress = pixelMap[i];
    int whichColor = animation[whichFrame][i];

    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];

    if (pixAddress != 1) {
      strip.setPixelColor(pixAddress, red, green, blue);
    }

  }
  whichFrame = (whichFrame + 1)%8;
  strip.show();
  delay(100);

}
