// Victim.h
#ifndef _VICTIM_h
#define _VICTIM_h
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
class Victim{
	public:
		uint8_t downmonId;
		String name;
		uint8_t spriteId;
		uint16_t HP;
		uint16_t att;
		uint16_t def;
		uint16_t spAtt;
		uint16_t spDef;
		uint16_t spd;
};
		

#endif

