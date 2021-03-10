/*
 * soil_moist.c
 *
 *  Created on: 10 mar 2021
 *      Author: Pawel
 */
#include "soil_moist.h"

float map_soil(float in, float soinMin, float soinMax, float sooutMin, float sooutMax){

  if (soinMin<soinMax) {
    if (in <= soinMin)
      return sooutMin;
    if (in >= soinMax)
      return sooutMax;
  } else {
    if (in >= soinMin)
      return sooutMin;
    if (in <= soinMax)
      return sooutMax;
  }
  float scale = (in-soinMin)/(soinMax-soinMin);
  return sooutMin + scale*(sooutMax-sooutMin);
}
