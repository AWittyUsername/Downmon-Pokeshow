#include "Battle.h"
	void Battle::initializeBattle(){
		drawBattleScene();
		drawBattleMenu();
	}
	void Battle::drawBattleMenu(){
		lcd.drawLine(0,180,340,180,SECONDARY);
	}
	void Battle::drawBattleScene(){
		lcd.fillScreen(PRIMARY);
	}


