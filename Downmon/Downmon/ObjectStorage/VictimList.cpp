#include "VictimList.h"
VictimList::VictimList(){
	initializeDownmon();
}
void VictimList::initializeDownmon(){
	
		//Gyaradown
		victimList[0].name = "Gyaradown";
		victimList[0].downmonId = 0;
		victimList[0].spriteId = 0;
		victimList[0].HP = 20;
		victimList[0].att = 5;
		victimList[0].def = 5;
		victimList[0].spAtt = 5;
		victimList[0].spDef = 5;
		victimList[0].spd = 5;
		
		//Megakarp
		victimList[1].name = "Megakarp";
		victimList[1].downmonId = 1;
		victimList[1].spriteId = 1;
		victimList[1].HP = 20;
		victimList[1].att = 5;
		victimList[1].def = 5;
		victimList[1].spAtt = 5;
		victimList[1].spDef = 5;
		victimList[1].spd = 5;
}
Victim VictimList::getDownmonById(uint8_t id){
	return victimList[id];
}
