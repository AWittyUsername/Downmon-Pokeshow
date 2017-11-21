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
			}
			else if(nunchuck.zButton){
				mainMenu.previousScreen();
			}
			_delay_ms(50);
		}
	return 0;
}
void initializeScreen(){			//Basic function to initialize both the display and nunchuck
	init();
	nunchuck.init();
	lcd.begin();	
}