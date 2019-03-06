#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup()
{
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS );
}

void loop() 
{
  // turn led strip red
  fill_solid( leds, NUM_LEDS, CRGB:: Red);
    FastLED.show();
    delay(30);
}
//random colored speckles that blink in and fade smoothly  https://gist.github.com/kriegsman/062e10f7f07ba8518af6

void confetti () 
{
  uint8_t gHue = 0; // rotating "base color"
      fadeToBlackBy(leds, NUM_LEDS,10);
      int pos = random16(NUM_LEDS);
      leds[pos] += CHSV( gHue + random8(135), 200, 255);
    delay(50);
  
}




      
    
