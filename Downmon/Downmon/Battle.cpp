#include "Battle.h"
	//This may very well be the most important piece of code in all of the project!
	//All the action happens here, if exited the main() function in downmon.ino will continue.
	void Battle::gameLoop(){
		initializeBattle();
		while(1){
			nunchuck.update();
			if(nunchuck.analogY >= 150){
				setSelectedOption('u');
			}
			else if(nunchuck.analogY <= 75){
				setSelectedOption('d');
			}
			if(nunchuck.cButton){
				selectOption();
			}
			if(!gameRunning){
				break;
			}
			_delay_ms(50);
		}
	}
	//Initializes the battle display
	void Battle::initializeBattle(){
		initializeDownmon();
		gameRunning = true;
		drawBattleScene();
		drawBattleMenu();
		battleOption = Menu;
		selectedOption = 0;
		setSelectedOption(0);
	}
	//Draws the battle menu, attack options etc.
	void Battle::drawBattleMenu(){
		lcd.drawLine(0,165,340,165,SECONDARY);
		lcd.drawLine(0,166,340,166,SECONDARY);
		lcd.drawText(5,200,"What will " + currentVictim.name + " do?",SECONDARY,PRIMARY,1);
		lcd.drawText(230,180,"Poke",SECONDARY,PRIMARY,1);
		lcd.drawText(230,200,"Switch",SECONDARY,PRIMARY,1);
		lcd.drawText(230,220,"Ragequit",SECONDARY,PRIMARY,1);
	}
	//Draws the background and will eventually draw the basic elements such as names
	void Battle::drawBattleScene(){
		lcd.fillScreen(PRIMARY);
		
		//Ally downmon - mockup!
		lcd.fillRect(20,85,80,80,RGB(20,20,255));						//Sprite
		lcd.drawRect(200,110,110,40,SECONDARY);							//HP box
		lcd.fillRoundRect(205,130,100,10,3,RGB(0,255,0));				//Name in hp box
		lcd.drawText(205,115, currentVictim.name ,SECONDARY,PRIMARY,1);	//HP bar
		
		//Enemy downmon - mockup!
		lcd.fillRect(220,0,80,80,RGB(255,0,0));							//Sprite
		lcd.drawRect(20,10,110,40,SECONDARY);							//HP box
		lcd.fillRoundRect(25,30,100,10,3,RGB(0,255,0));					//Name in hp box
		lcd.drawText(25,15,currentEnemy.name,SECONDARY,PRIMARY,1);			//HP bar
	}
	//Whenever the nunchuck's Y-axis is moved in the game loop this function gets called to check if a new menu option should be selected
	void Battle::setSelectedOption(char updown){
		if(battleOption != Menu){
			return;
		}
		lcd.drawText(200,(180 + (20*selectedOption)),"-->",PRIMARY,PRIMARY,1);
		if(updown == 'u' && selectedOption != 0){
			selectedOption--;
		}
		else if(updown == 'd' && selectedOption != 2){
			selectedOption++;
		}
		lcd.drawText(200,(180 + (20*selectedOption)),"-->",SECONDARY,PRIMARY,1);
	}
	
	//Initializes display of the option that's currently defined in selectedOption
	void Battle::selectOption(){
		if(battleOption != Menu){
			return;
		}
		switch(selectedOption){
			case 0:
			allyAttack();
			break;
			case 1:
			break;
			case 2:	
			quitGame();
			break;
		}
	}
	
	void Battle::initializeDownmon(){
		currentVictim = victimList.getDownmonById(currentVictimId);
		currentEnemy = victimList.getDownmonById(currentEnemyId);
	}
	//If available will return user to battle menu
	void Battle::previousScreen(){
		if(battleOption != Menu){
		}
	}
	
	void Battle::allyAttack(){
		lcd.fillRoundRect(25,30,100,10,3,RGB(255,255,255));	//Clear HP-bar
		if(enemyHP > 50){
		enemyHP = enemyHP - 50;
		lcd.fillRoundRect(25,30,((enemyHP/250)*100),10,3,RGB(0,255,0));
		}
		else{
			enemyHP = 0;
			enemyDies();
			
		}
	}
	void Battle::enemyDies(){
		lcd.fillRect(220,0,80,80,PRIMARY);								//Remove sprite
		lcd.fillRect(0,167,340,167,PRIMARY);							//Remove battle chat
		lcd.drawText(5,200,"Hoera jij wint!",SECONDARY,PRIMARY,1);		//Print win message
		while(1){
			nunchuck.update();
			if(nunchuck.cButton){
				break;
			}
		}
		gameRunning = false;
	}
	void Battle::quitGame(){
		gameRunning = false;
	}


