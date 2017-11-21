#include "Menu.h"
	//Initializes the menu display
	void Menu::initializeMenu(){
		menuState = Main;
		drawMenu();
		drawOptions();
		setSelectedOption(0);
	}
	
	//Draws the background and title
	void Menu::drawMenu(){
		lcd.fillScreen(PRIMARY);
		lcd.drawText(30,40,"Downmon Pokeshow",SECONDARY,PRIMARY,2);
	}
	
	//Draws the available options in the menu
	void Menu::drawOptions(){
		lcd.drawText(130,100,"Battle",SECONDARY,PRIMARY,1);	
		lcd.drawText(130,140,"Highscores",SECONDARY,PRIMARY,1);	
		lcd.drawText(130,180,"Credits",SECONDARY,PRIMARY,1);	
	}
	
	//Clears the screen and calls function to display credits
	void Menu::initializeCredits(){
		lcd.fillScreen(PRIMARY);
		lcd.drawText(30,40,"Downmon Credits",SECONDARY,PRIMARY,2);
		drawCredits();
		menuState = Credits;
	}
	
	//Draws a bunch of strings on the credits screen, woo!
	void Menu::drawCredits(){
		lcd.drawText(60,100,"Brian - Dingen",SECONDARY,PRIMARY,1);
		lcd.drawText(60,130,"Jacob - Andere dingen",SECONDARY,PRIMARY,1);
		lcd.drawText(60,160,"Neecob - Meer andere dingen",SECONDARY,PRIMARY,1);
		lcd.drawText(60,190,"Wesley - De rest",SECONDARY,PRIMARY,1);
	}
	
	//Whenever the nunchuck's Y-axis is moved in the main class this function gets called to check if a new menu option should be selected
	void Menu::setSelectedOption(char updown){
		lcd.drawText(100,(100 + (40*selectedOption)),"-->",PRIMARY,PRIMARY,1);
		if(updown == 'u' && selectedOption != 0){
		selectedOption--;
		}
		else if(updown == 'd' && selectedOption != 2){
			selectedOption++;
		}
		lcd.drawText(100,(100 + (40*selectedOption)),"-->",SECONDARY,PRIMARY,1);
	}
	
	//Initializes display of the option that's currently defined in selectedOption
	void Menu::selectOption(){
		switch(selectedOption){
			case 0:
				break;
			case 1:
				break;
			case 2:
				initializeCredits();
		}
	}
	void Menu::previousScreen(){
		if(menuState == Credits || menuState == Highscores){
			initializeMenu();
		}
	}


