#include "GameObjects/Move.h"
#include "GameObjects/Victim.h"
#include "Menu.h"
#include "Battle.h"
#include <stdio.h>
#include <Wire.h>
#include <GraphicsLib.h>
#include <MI0283QT9.h>
#include <ArduinoNunchuk.h>

//Global variable declarations
MI0283QT9 lcd;
ArduinoNunchuk nunchuck = ArduinoNunchuk();
Menu mainMenu;

void initializeScreen();
int main(){
		initializeScreen();
		mainMenu.initializeMenu();
		while(1){
			nunchuck.update();
			if(nunchuck.analogY >= 150){
				mainMenu.setSelectedOption('u');
			}
			else if(nunchuck.analogY <= 75){
				mainMenu.setSelectedOption('d');
			}
			if(nunchuck.cButton){
				mainMenu.selectOption();
				if(mainMenu.menuState == Menu::inBattle){
					Battle pvpBattle;
					pvpBattle.gameLoop(nunchuck); //This starts the game loop! main() will not continue until it is exited.
				}
			}
			else if(nunchuck.zButton){
				mainMenu.previousScreen();
			}
			_delay_ms(50);
		}
	return 0;
}

//Basic function to initialize both the display and nunchuck
void initializeScreen(){			
	init();
	nunchuck.init();
	lcd.begin();	
}