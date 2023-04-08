#include "StateMachine.h"

  void StateMachine::stateTransition (String t_eventSent)
  {
    switch (m_currentState)
    {
      case state::INITIAL:
      {
        bool start = true;

        while(start)
        {
          if (t_eventSent = "Start")
          {
            m_nextState = state::WAVEFORMCHOICE;
            start = false;
            break;
          }
        }
      }   
      case state::WAVEFORMCHOICE:
      {
        Serial.println("Starting waveform choice state");
        Serial.println("First type SN->SINE; SQ->Square or TR->Triangle");

        bool choice = true;

        while(choice)
        {
          selectWaveScreen();

          String choiceSent = Serial.readString();
          choiceSent.trim();

          if (choiceSent == "SN")
          {
            sineWaveScreen();
            choice = false;
            m_nextState = state::FREQUENCYADJUST;
            break;
          }
          else if (choiceSent == "SQ")
          {
            squareWaveScreen();
            choice = false;
            m_nextState = state::FREQUENCYADJUST;
            break;            
          }
          else if (choiceSent = "TR")
          {
            triangleWaveScreen();
            choice = false;
            m_nextState = state::FREQUENCYADJUST;
            break;
          }
          delay(200);
        }
      }
      case state::FREQUENCYADJUST:
      {
        Serial.println("Starting frequency adjustment state");
        Serial.println("First select between Hz, kHz or MHz");
        while(true){delay(100);}

        break;
      }
    }
  }
