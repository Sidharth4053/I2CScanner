# I2CScanner

This library use to scan the number of different devices attached to I2C of Arduino
-Tested in Arduino UNO

# Library contain 3 methods

bool checkIfAnyDeviceAttached(void)
return true if any device attached to I2C of arduino otherwise false

int getNoOfDevices(void)
return number of devices attached to I2C

uint8_t getAddressAt(int position)
get address of device attach at position listed from above method [ getNoOfDevices() ]
