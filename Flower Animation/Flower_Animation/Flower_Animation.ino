#include <Adafruit_NeoPixel.h>
#include"frames.h"

Adafruit_NeoPixel strip(64, 8);

int whichFrame = 0;

int colors [7][3] {
  //sky blue
  {38, 212, 203},
  //green grass
  {14, 97, 26},
  //green stem
  {21, 235, 32},
  //pink petals
  {247, 87, 239},

};


void setup() {
  strip.begin();
  strip.clear();
  strip.setBrightness(100);
}

void loop() {
  for (int i = 0; i < strip.numPixels(); i++) {

    int pixAddress = pixelMap[i];
    int whichColor = animation[whichFrame][i];

    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];

    if (pixAddress != -1) {
      strip.setPixelColor(pixAddress, red, green, blue);
    }

  }
  whichFrame = (whichFrame + 1)%8;
  strip.show();
  delay(350);

}
