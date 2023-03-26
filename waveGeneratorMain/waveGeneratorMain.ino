#include "Screens.h"

void setup() 
{
  Serial.begin(9600);
  displayConfig();
  waveGeneratorStartup();
  //selectWaveScreen();
  //frequencyAdjust();
}

void loop() 
{
    
Serial.println("olámundo");
  Serial.println("Seting Sine wave with 60Hz");
  sineWaveScreen();
  Serial.println("Seting Square wave with 60Hz");
  squareWaveScreen();
  Serial.println("Seting Triangle wave with 60Hz");
  triangleWaveScreen();
}
