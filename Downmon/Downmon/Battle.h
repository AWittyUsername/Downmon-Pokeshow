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
#include "ObjectStorage/VictimList.h"
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
	void gameLoop();
	void setSelectedOption(char);
	void selectOption();
	void previousScreen();
	void allyAttack();
	void enemyDies();
	void initializeDownmon();
	void quitGame();
	private:
	enum BattleOptions{
		Menu,
		Attack,
		Switch,
		Quit
	};
	BattleOptions battleOption;
	ArduinoNunchuk nunchuck = ArduinoNunchuk();
	MI0283QT9 lcd;
	uint8_t selectedOption;
	uint8_t currentVictimId = 0;
	Victim currentVictim;
	uint8_t currentEnemyId = 1;
	Victim currentEnemy;
	float enemyHP = 250.0;
	bool gameRunning = 0;
	VictimList victimList;
};
#endif

