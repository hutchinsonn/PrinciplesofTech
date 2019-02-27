#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  //make blue up to LED#22 with the leading one being White.
int n = 22;
  for(int i=0; i < NUM_LEDS; n+=n){
    led[i] = CRGB::White;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Blue;
  }
  //make the mirror image up the left side
  //redo the same loop incrementing up by amount of n
  //make the waves behind the whiteone different colors of blue
}
