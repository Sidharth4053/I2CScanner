/*
	Author : Sidharth
 */

#include "I2CScanner.h"
#include <Wire.h>

#include <stdlib.h>
#include <inttypes.h>
#include <avr/io.h>

static uint8_t _address = 0;
static uint8_t _error = 0;
static int _noDevices = 0;

bool checkIfAnyDeviceAttached(void)
{
	Wire.begin();
	bool check = false;
	for(_address = 1; _address < 127; _address++){
		Wire.beginTransmission(_address);
		_error = Wire.endTransmission();
		if(_error == 0){
			check = true;
			break;
		}
	}
	return check;
}

int getNoOfDevices(void)
{
	Wire.begin();
	_noDevices = 0;
	for(_address = 1; _address < 127; _address++){
		Wire.beginTransmission(_address);
		_error = Wire.endTransmission();
		if(_error == 0)
			_noDevices++;
	}
	return _noDevices;
}

uint8_t getAddressAt(int position)
{
	Wire.begin();
	int counter = 0;
	bool flag = false;
	for(_address = 1; _address < 127; _address++){
		Wire.beginTransmission(_address);
		_error = Wire.endTransmission();
		if(_error == 0){
			counter++;
			if(counter == position){
				flag = true;
				return _address;
			}
		}
	}
	if(flag == false){
		return 0;
	}
	
}


