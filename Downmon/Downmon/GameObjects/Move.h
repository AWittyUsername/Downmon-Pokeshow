// Move.h

#ifndef _MOVE_h
#define _MOVE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
class Move{
		const uint8_t moveId;
		const String name;
		const uint8_t power;
		const uint8_t animationId;
	};

#endif

