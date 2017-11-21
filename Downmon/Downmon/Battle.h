// Battle.h
#include <MI0283QT9.h>
#ifndef PRIMARY
#define PRIMARY RGB(255,255,255) 
#endif
#ifndef SECONDARY
#define SECONDARY  RGB(0,0,0)
#endif
#ifndef _BATTLE_h
#define _BATTLE_h
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
class Battle{
	public:
	Battle();
	void initializeBattle();
	void drawBattleMenu();
	void drawBattleScene();
	private:
	MI0283QT9 lcd;
};
#endif

