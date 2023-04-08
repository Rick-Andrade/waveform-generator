#ifndef _STATEMACHINE_H
#define _STATEMACHINE_H

#include <Arduino.h>
#include "Screens.h"

class StateMachine
{
private:
  enum class state
  {
    INITIAL,
    WAVEFORMCHOICE,
    FREQUENCYADJUST,
    AMPLITUDEADJUST,
    OFFSETADJUST,
    SETOUTPUT
  };

  state m_currentState;
  state m_nextState;

public:
  StateMachine() : m_currentState(state::INITIAL){};
  void stateTransition (String t_eventSent);
  String stateLog(state t_currentState);
};

#endif