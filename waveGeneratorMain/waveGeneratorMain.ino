#include "Screens.h"
#include "StateMachine.h"

StateMachine smObject;

void setup() 
{
  Serial.begin(9600);
  displayConfig();
  waveGeneratorStartup();
}

void loop() 
{
  String event = Serial.readString();
  event.trim();

  Serial.println("Type \"Start\" to Start the state machine");

  if (!event.isEmpty())
  {
    smObject.stateTransition(event);
  }
  /*Serial.println("Seting Sine wave with 60Hz");
  sineWaveScreen();
  Serial.println("Seting Square wave with 60Hz");
  squareWaveScreen();
  Serial.println("Seting Triangle wave with 60Hz");
  triangleWaveScreen();*/
}
