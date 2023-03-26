#ifndef _WAVEGENERATOR_H
#define _WAVEGENERATOR_H

#include <MD_AD9833.h>
#include <SPI.h>

#define DATA  D5	///< SPI Data pin number
#define CLK   D6	///< SPI Clock pin number
#define FSYNC D7	///< SPI Load pin number (FSYNC in AD9833 usage)

extern MD_AD9833	waveGenerator;  // Hardware SPI

void waveGeneratorStartup(void);

void setSineWave(int t_frequency);
void setSquareWave(int t_frequency);
void setTriangleWave(int t_frequency);

#endif