#include "WaveGenerator.h"

MD_AD9833	waveGenerator(DATA, CLK, FSYNC);

void waveGeneratorStartup(void)
{
  waveGenerator.begin();
}

void setSineWave(int t_frequency)
{
  waveGenerator.setFrequency(MD_AD9833::CHAN_0, 6000);
  waveGenerator.setMode(MD_AD9833::MODE_SINE);
}

void setSquareWave(int t_frequency)
{ 
  waveGenerator.setFrequency(MD_AD9833::CHAN_0, 6000);
  waveGenerator.setMode(MD_AD9833::MODE_SQUARE1);
}

void setTriangleWave(int t_frequency)
{
  waveGenerator.setFrequency(MD_AD9833::CHAN_0, 6000);
  waveGenerator.setMode(MD_AD9833::MODE_TRIANGLE);
}
