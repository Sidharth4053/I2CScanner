/*
	Author : Sidharth
 */

#ifndef I2CSCANNER_H
#define I2CSCANNER_H

#include <stdlib.h>
#include <inttypes.h>
#include <avr/io.h>

bool checkIfAnyDeviceAttached(void);
int getNoOfDevices(void);
uint8_t getAddressAt(int position);
  
#endif
