// Battle.h
#ifndef PRIMARY
#define PRIMARY RGB(255,255,255) 
#endif
#ifndef SECONDARY
#define SECONDARY  RGB(0,0,0)
#endif
#ifndef _BATTLE_h
#define _BATTLE_h
#include <MI0283QT9.h>
#include <ArduinoNunchuk.h>
#include "GameObjects/Victim.h"
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
class Battle{
	public:
	void initializeBattle();
	void drawBattleMenu();
	void drawBattleScene();
	void gameLoop(ArduinoNunchuk);
	void setSelectedOption(char);
	void selectOption();
	void previousScreen();
	void initializeDownmon();
	void allyAttack();
	void enemyFaint();
	private:
	enum BattleOptions{
		Menu,
		Attack,
		Switch,
		Quit
	};
	BattleOptions battleOption;
	MI0283QT9 lcd;
	uint8_t selectedOption;
	uint8_t currentVictim = 0;
	float enemyHP = 250.0;
	Victim victimList[10] {{}};
};
#endif

