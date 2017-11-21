// Menu.h
#include <MI0283QT9.h>
#include "Battle.h"
#ifndef PRIMARY
#define PRIMARY RGB(255,255,255)
#endif
#ifndef SECONDARY
#define SECONDARY  RGB(0,0,0)
#endif
#ifndef _MENU_h
#define _MENU_h
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
class Menu{
	public:
	void initializeMenu();
	void drawMenu();
	void drawOptions();
	void setSelectedOption(char option);
	void selectOption();
	void initializeCredits();
	void drawCredits();
	void initializeHighscore();
	void drawHighscore();
	void initializeBattle();
	void previousScreen();
	private:
		uint8_t selectedOption;
		MI0283QT9 lcd;
		enum MenuState{
			Main,
			inBattle,
			Highscore,
			Credits
			};
		MenuState menuState;
	};
#endif

