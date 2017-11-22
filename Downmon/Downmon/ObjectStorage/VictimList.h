// VictimList.h

#ifndef _VICTIMLIST_h
#define _VICTIMLIST_h
#include "../GameObjects/Victim.h"
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
	class VictimList{
		public:
		VictimList();
		void initializeDownmon();
		Victim getDownmonById(uint8_t);
		private:
		Victim victimList[20] {{}};
	};

#endif

