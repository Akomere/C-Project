// BoardGame.cpp: Implementation for Board Game Class
//
//////////////////////////////////////////////////////


/***  Including Standrd Libraries  ***/
#include <iostream>
#include <string>
#include <ctime>

/***  Including Game Header Files  ***/
#include "BoardGame.h"
#include "Sword.h"
#include "Human.h"
#include "Elf.h"
#include "Orc.h"
#include "Dwarf.h"
#include "Hobbit.h"
#include "Sword.h"
#include "Dagger.h"
#include "PlateArmour.h"
#include "LeatherArmour.h"
#include "SmallShield.h"
#include "LargeShield.h"
#include "RingOfLife.h"
#include "RingOfStren.h"

using namespace std;

/***
 * Board Constructor
 * params: none
 ***/
Board::Board()
{
    loc[0] = 0;

    loc[1] = 0;

    playSteps = 0;

    currentTime = 0;

    boardWidth = 200;

    boardLength = 200;
}

/***
 * Method to set Board Size
 *
 * params:
 * int w - width to be passed as board width
 * int l - length to be passed as board height
 *
 * return - void
 ***/
void Board::setSize(int w, int l)
{
    boardWidth = w;
    boardLength = l;
}

/***
 * Method to assign to board positions an enemy, an item or empty
 *
 * params: none
 *
 * return - void
 ***/
void Board::assignObj()
{
    int x;
    int y;
    int selectn; //variable to store integer determining individual square condition

	// assigning all board squares different possible conditions using for loop
    for (x=0; x < boardWidth; x++){
            for (y=0; y < boardLength; y++){

            selectn = rand()%18; //random integer between 0 and 18 representing conditions

            boardArray[x][y] = selectn;

        }

    }


}

/***
 * Method to move player when player selects a move command
 *
 * params:
 * char dirn - character representing movement direction
 *
 * return - void
 ***/
void Board::playMove(char dirn)
{

    switch(dirn) // switch statement to decide movement direction
    {
        case 'n':
        case 'N': loc[1]++;
            break;
        case 's':
        case 'S': loc[1]--;
            break;
        case 'e':
        case 'E': loc[0]++;
            break;
        case 'w':
        case 'W':loc[0]--;
            break;

        default : cout << "please enter the correct value\n";

    }

}


/***
 * Method that controls running game
 *
 * params:
 * std::string playerName - player name given from player
 * Race* playerChoice - character object selected by player
 *
 * return - void
 ***/
void Board::gamePlay(std::string playerName, Race* playerChoice)
{

    char cmd; //varaible for player input command
    int pos; //variable to store player current square condition
    int a;
    int b;
    bool gameOn = true; //bool to store current game state

    while(gameOn == true && playerChoice->getHealth() > 0) //game loop that runs as long as player health is above zero and game state is set to true
    {

        a = loc[0];
        b = loc[1];

        pos = boardArray[a][b]; //assigning current square condition to pos variable

        cout << "\n\n";

				//Conditional statement block to print out message about current square
                    if (pos == 0){

                                cout << "there is an orc here\n";

                    }else if (pos == 1){

                                cout << "there is a human here\n";

                    }else if(pos == 2){

                                cout << "there is an elf here\n";

                    }else if(pos == 3){

                                cout << "there is a hobbit here\n";

                    }else if(pos == 4){

                                cout << "there is a dwarf here\n";

                    }else if(pos == 5){

                                cout << "there is a sword here\n";

                    }else if(pos == 6){

                                cout << "there is a dagger here\n";

                    }else if(pos == 7){

                                cout << "there is a small shield here\n";

                    }else if(pos == 8){

                                cout << "there is a large shield here\n";

                    }else if(pos == 9){

                                cout << "there is a plate armour here\n";

                    }else if(pos == 10){

                                cout << "there is a leather armour here\n";

                    }else if(pos == 11){

                                cout << "there is a ring of life here\n";

                    }else if(pos == 12){

                                cout << "there is a ring of strength here\n";

                    }else if(pos == 13){

                                cout << "there is an orc here, it is with a small shield\n";

                    }else if(pos == 14){

                                cout << "there is a human here, it is with a sword\n";

                    }else if(pos == 15){

                                cout << "there is a powerful elf here, it is with a sword\n";

                    }else if(pos == 16){

                                cout << "there is a hobbit here, it is with the ring of life\n";

                    }else if(pos == 17){

                                cout << "there is a dwarf here, it is with a ring of strength\n";

                    }else if(pos == 18){
                                //display();
                    };

        display(playerName, playerChoice); // display current time, player details and available commands

        cin >> cmd;
        cout << "\n";

		//Conditional statement block to control action based on player commands
        if(cmd == 'n' || cmd == 's' || cmd == 'e' || cmd == 'w' || cmd == 'N' || cmd == 'S' || cmd == 'E' || cmd == 'W'){ //for movement

                playMove(cmd);
                playSteps++;

                //Conditional check to ensure the location is within set board
                if (loc[0] < 0 || loc[1] < 0) {

                    cout << "Out of Bounds, please choose another direction\n";
                    if(loc[0] < 0){

                        loc[0]++;
                    }else if(loc[1] < 0){

                        loc[1]++;
                    }

                } else if (loc[0] > boardWidth or loc[1] > boardLength){

                    cout << "Out of Bounds, please choose another direction\n";

                    if(loc[0] > boardWidth){

                        loc[0]--;
                    }else if(loc[1] > boardLength){

                        loc[1]--;
                    }
                }


        } else if (cmd == 'a' || cmd == 'p' || cmd == 'd' || cmd == 'l' || cmd == 'i' || cmd == 'A' || cmd == 'P' || cmd == 'D' || cmd == 'L' || cmd == 'I') { //for actions

                playSteps++;

                //Sets up board conditions for player to interact with
				if (pos == 0){

                            Orc gargoil; //creates enemy of Orc class
                            playerIntrEnmy(cmd, pos, playerChoice, &gargoil); //call to enemy interation method

                }else if (pos == 1){

                            Human josh; //creates enemy of Human class
                            playerIntrEnmy(cmd, pos, playerChoice, &josh);

                }else if(pos == 2){

                            Elf flin; //creates enemy of Elf class
                            playerIntrEnmy(cmd, pos,  playerChoice, &flin);

                }else if(pos == 3){

                            Hobbit bil; //creates enemy of Hobbit class
                            playerIntrEnmy(cmd, pos, playerChoice, &bil);

                }else if(pos == 4){

                            Dwarf greg; //creates enemy of Dwarf class
                            playerIntrEnmy(cmd, pos, playerChoice, &greg);

                }else if(pos == 5){

                            Sword lypsaber; //creates Sword item
                            playerIntrItem(cmd, pos, playerChoice, &lypsaber); //call to enemy interation method

                }else if(pos == 6){

                            Dagger knife; //creates Dagger item
                            playerIntrItem(cmd, pos, playerChoice, &knife);

                }else if(pos == 7){

                            SmallShield shil; //creates Small Shield item
                            playerIntrItem(cmd, pos, playerChoice, &shil);

                }else if(pos == 8){

                            LargeShield lashil; //creates Large Shield item
                            playerIntrItem(cmd, pos, playerChoice, &lashil);

                }else if(pos == 9){

                            PlateArmour arm; //creates Plate Armour item
                            playerIntrItem(cmd, pos, playerChoice, &arm);

                }else if(pos == 10){

                            LeatherArmour letarm; //creates Leather Armour item
                            playerIntrItem(cmd, pos, playerChoice, &letarm);

                }else if(pos == 11){

                            RingOfLife rof; //creates Ring of Life item
                            playerIntrItem(cmd, pos, playerChoice, &rof);

                }else if(pos == 12){

                            RingOfStren ros; //creates Ring of Strenght item
                            playerIntrItem(cmd, pos, playerChoice, &ros);

                }else if(pos == 13){

                            Orc grish;
                            SmallShield shil;

                            //creates Orc enemy and assigns it a Small Shield
							grish.pickLightGear(shil.getDef(), shil.getWeight());

                            playerIntrEnmy(cmd, pos, playerChoice, &grish);

                }else if(pos == 14){

                            Human frank;
                            Sword lypsaber;

							//creates Human enemy and assigns it a sword
                            frank.pickWeapon(lypsaber.getAtt(), lypsaber.getWeight());

                            playerIntrEnmy(cmd, pos, playerChoice, &frank);

                }else if(pos == 15){

                            Elf fiz;
                            Sword lypsaber;

							//creates Elf enemy and assigns it a sword
                            fiz.pickWeapon(lypsaber.getAtt(), lypsaber.getWeight());

                            playerIntrEnmy(cmd, pos, playerChoice, &fiz);

                }else if(pos == 16){

                            Hobbit bob;
                            RingOfLife rof;

							//creates Hobbit enemy and assigns it a ring of life
                            bob.pickRngOfLife(rof.getHealth());

                            playerIntrEnmy(cmd, pos, playerChoice, &bob);

                }else if(pos == 17){

                            Dwarf daf;
                            RingOfStren ros;

							//creates Dwarf enemy and assigns it a ring of strength
                            daf.pickRngOfStr(ros.getHealth(), ros.getStr());

                            playerIntrEnmy(cmd, pos, playerChoice, &daf);

                }else if(pos == 18){

                    playerIntrEmpty(cmd, playerChoice); //call to empty square interation method

                }

        } else if(cmd == 'x') {
                gameOn = false; // ends game

        } else {
			cout << "Incorrect command, please input a correct one" << endl;
		}

    }

    cout << "Player was defeated... GAME OVER" << endl;

}


/***
 * Method to display current time, player details and available commands
 *
 * params:
 * std::string playerName - player name given from player
 * Race* playerChoice - character object selected by player
 *
 * return - void
 ***/
void Board::display(std::string playrName, Race* playr)
{
    changeTime(); //changes time based on step number

    displayTime(); //shows if its night or day

    cout << "[x] [y]\n";

    for(int i = 0; i < 2; i++){
            cout << "[" << loc[i] << "] ";
    }

    cout << "\n\n";

	//display current player stats
    cout << playrName<< ":" << endl;
    cout << "Health --" << playr->getHealth() << endl;
    cout << "Attack --" << playr->getAtt() << endl;
    cout << "Defence --" << playr->getDef() << endl;
    cout << "Gold --" << playr->getGld() << endl;
    cout << "Strength --" << playr->getStr() << endl;


    cout << "\n";

	//displays available commands
    cout << "Please enter n=North e=East s=South or w=West to move" << endl;
    cout << "Please select a=Attack  p=PickUp d=DropItem l=LookAround i=Inventory x=Exit " << endl;

}


/***
 * Method to handle player interations with enemies
 *
 * params:
 * char act - action by player
 * int pos - current square condition
 * Race* playr - player character object
 * Race* enemy - enemy character object
 *
 * return - void
 ***/
void Board::playerIntrEnmy(char act, int pos, Race* playr, Race* enemy)//Also pass in the enemy
{

        char cont;
        bool fighting = true; // bool to store if fighting is currently going on
        int prevTime = 0; // parameter to store current time, initialized to day

		//switch statement to handle differnt commands
        switch(act){

                    case 'a':
                    case 'A':

                        while(fighting==true && playr->getHealth() > 0){ //check if player still has health

                                changeTime();

                             if (enemy->getHealth() > 0) { //check if enemy is still alive

                                    displayTime();

                                    if(prevTime != currentTime) { // checks if current time has changed
										playr->pwrBsdOnTime(currentTime); //calls method to alter enemy stats based on time of day
                                        enemy->pwrBsdOnTime(currentTime); //calls method to alter enemy stats based on time of day
                                        prevTime = currentTime; // sets previous time to current time

                                    }

                                     //checks if player and enemy attacks were successful
                                     bool resolve_att_plyr = playr->attacking();
                                     bool resolve_att_en = enemy->attacking();

                                     //checks if player and enemy defences were successful
									 bool resolve_def_plyr = playr->defending();
                                     bool resolve_def_en = enemy->defending();

                                     //player attacks
                                     if (resolve_att_plyr) {
                                             if (resolve_def_en) { //if enemy defends successfully

                                                 cout << "Enemy defended successfully" << endl;
                                                 cout << "Enemy ";
                                                 enemy->succDef(playr->getAtt(), currentTime);
                                                 cout << "Enemy has " << enemy->getHealth() << " health remaining" <<endl;
                                                 cout << "\n";

                                             } else { //if enemy defends unsuccessfully
                                                 if ( playr->getAtt() > enemy->getDef()) { //checks if player can harm enemy
                                                        cout << "Your Attack was successful" << endl;
                                                        enemy->takeDam(playr->getAtt());

                                                             if(enemy->getHealth() > 0){ //checks if enemy is still alive

                                                                 cout << "Enemy took " << playr->getAtt() - enemy->getDef() << " damage" << endl;
                                                                 cout << "Enemy has " << enemy->getHealth() << " health remaining" <<endl;
                                                                 cout << "\n";

                                                             };
                                                 } else {
                                                     cout << "Your Attack was successful but was too weak to do damage\n";
                                                     cout << "Enemy has " << enemy->getHealth() << " health remaining" <<endl;
                                                 };
                                             };


                                     } else { //if player attack missed
                                             cout << "Your Attack missed" << endl;
                                             cout << "Enemy ";
                                             enemy->succDef(playr->getAtt(), currentTime);
                                             cout << "Enemy has " << enemy->getHealth() << " health remaining" <<endl;
                                             cout << "\n";

                                     };

                                     //checks if enemy is defeated
                                     if (enemy->getHealth() <= 0) {
                                             cout << "Enemy health has fallen below zero"<<endl;
                                             cout << "\n";

                                             cout << "The Enemy has been defeated\n";

                                             playr->gainGld(enemy->getDef()); //calls method to gain gold

                                             cout << "You gained " << enemy->getDef() << " gold\n";
                                             cout << "Total gold is now " << playr->getGld() << " pieces\n";

                                             setBrdPos(18); //sets current square to empty
                                             fighting = false; //ends fighting
                                            break;
                                     };

                                     //enemy retaliates
                                     if (resolve_att_en) {
                                             if (resolve_def_plyr) { //if player defends successfully

                                                 cout << "You defended successfully" << endl;
                                                 cout << "Player ";
                                                 playr->succDef(enemy->getAtt(), currentTime);
                                                 cout << "You have " << playr->getHealth() << " health remaining" <<endl;
                                                 cout << "\n";

                                             } else { //if player defends unsuccessfully
                                                 if ( enemy->getAtt() > playr->getDef()) { //checks if enemy can harm player
                                                        cout << "Enemy Attack was successful" << endl;
                                                        playr->takeDam(enemy->getAtt());

                                                             if(playr->getHealth() > 0){ //checks if player is still alive

                                                                 cout << "You took " << enemy->getAtt() - playr->getDef() << " damage" << endl;
                                                                 cout << "You have " << playr->getHealth() << " health remaining" <<endl;
                                                                 cout << "\n";
                                                            };

                                                 } else {
                                                     cout << "Enemy Attack was successful but was too weak to do damage\n";
                                                     cout << "You have " << playr->getHealth() << " health remaining" <<endl;
                                                 };
                                            };

                                     } else { //if enemy attack missed

                                         cout << "Enemy Attack missed" << endl;
                                         cout << "You ";
                                         playr->succDef(enemy->getAtt(), currentTime);
                                         cout << "You have " << playr->getHealth() << " health remaining" <<endl;
                                         cout << "\n";

                                     };

                                    //check if player is defeated
                                    if(playr->getHealth() <= 0){
                                            cout << "Your health has fallen below zero"<<endl;
                                            cout << "\n";
                                            fighting = false;
                                            break;

                                    }

                                     //Check if player wants to continue fighting
                                     cout << "Do you wish to continue fighting? y/n?\n";
                                     cin >> cont;

									 //if player wants to stop
                                     if(cont == 'n') {
                                            cout << "The Enemy recovered after you left\n";
                                            fighting = false;
                                            break;
                                     };

                             } else {

                                     cout << "The Enemy has been defeated\n";

                                     playr->gainGld(enemy->getDef());

                                     cout << "You gained " << enemy->getDef() << " gold\n";
                                     cout << "Total gold is now " << playr->getGld() << " pieces\n";

                                     setBrdPos(18);
                                     fighting = false;

                             };
                             playSteps++;

                        }

                        break;


                    case 'l':
                    case 'L':

                            //Prints out Enemy stats
                            cout << "There is an Enemy Here\n";
                            cout << "Health --" << enemy->getHealth() << endl;
                            cout << "Attack --" << enemy->getAtt() << endl;
                            cout << "Defence --" << enemy->getDef() << endl;
							cout << "Strength --" << playr->getStr() << endl;

                        break;

                    case 'i':
                    case 'I':

                        //Prints out current player items
						cout << "The player currently has\n";
                        if (playr->checkArm()) {
                            cout << "A " << playr->getArm() << endl;
                        }
                        if (playr->checkWpn()) {
                            cout << "A " << playr->getWpn() << endl;
                        }
                        if (playr->checkShld()) {
                            cout << "A " << playr->getShld() << endl;
                        }
                        if (playr->checkRngOfLife() > 0) {
                            cout << playr->checkRngOfLife() << " Ring of Life" << endl;
                        }
                        if (playr->checkRngOfStr() > 0) {
                            cout << playr->checkRngOfStr() << " Ring of Strength" << endl;
                        }
                        break;

                    default:
                        cout << "Wrong Input, Sorry action cannot be carried out." << endl;
                        break;

            }
}


/***
 * Method to handle player interations with items
 *
 * params:
 * char act - action by player
 * int pos - current square condition
 * Race* playr - player character object
 * Item* item - item object
 *
 * return - void
 ***/
void Board::playerIntrItem(char act,int pos, Race* playr, Item* item)
{

        //switch statement to handle differnt commands
		switch(act){

                    case 'p':
                    case 'P':

                        if (playr->getStr() >= item->getWeight()) //check if player has enough strength to pick item
                            {

                            //Conditional block to check type of item and select appropriate method
								if (item->getType() == "Sword" || item->getType() == "Dagger"){ // checks if item is a weapon
                                        if (playr->checkWpn() == false){//check if player already has a weapon
                                            cout << "Player picked up a " << item->getType() << endl;
                                            playr->pickWeapon(item->getAtt(), item->getWeight()); //calls method to pick weapon
                                            playr->setWeapon(item->getType());
                                            setBrdPos(18); //sets square to empty

                                        } else {
                                            cout << "Player is already holding a " << playr->getWpn()
                                            << ". \nYou can only carry one Weapon at a time. Drop " << playr->getWpn()
                                            << " to pick a new one" << endl;
                                        }


                                } else if (item->getType() == "Plate Armour" || item->getType() == "Large Shield"){ // checks if item is Heavy gear
                                        if (item->getType() == "Plate Armour"){ //checks if Heavy gear is armour
                                            if (playr->checkArm() == false){ //checks if player already has armour
                                                cout << "Player picked up a " << item->getType() << endl;
                                                playr->pickHeavGear(item->getAtt(), item->getDef(), item->getWeight()); // calls method to pick Heavy gear
                                                playr->setArmour(item->getType());
                                                setBrdPos(18); //sets square to empty

                                            } else {
                                                cout << "Player is already holding a " << playr->getArm()
                                                << ". \nYou can only carry one set of Armour at a time. Drop " << playr->getArm()
                                                << " to pick a new one" << endl;
                                            }
                                        } else {
                                            if (playr->checkShld() == false){  //checks if player already has shield
                                                cout << "Player picked up a " << item->getType() << endl;
                                                playr->pickHeavGear(item->getAtt(), item->getDef(), item->getWeight());
                                                playr->setShield(item->getType());
                                                setBrdPos(18); //sets square to empty

                                            } else {
                                                cout << "Player is already holding a " << playr->getShld()
                                                << ". \nYou can only carry one shield at a time. Drop " << playr->getShld()
                                                << " to pick a new one" << endl;
                                            }
                                        }


                                } else if (item->getType() == "Leather Armour" || item->getType() == "Small Shield"){ // checks if item is Light gear
                                        if (item->getType() == "Leather Armour"){ //checks if Light gear is armour
                                            if (playr->checkArm() == false){ //checks if player already has armour
                                                cout << "Player picked up a " << item->getType() << endl;
                                                playr->pickLightGear(item->getDef(), item->getWeight()); // calls method to pick Light gear
                                                playr->setArmour(item->getType());
                                                setBrdPos(18); //sets square to empty

                                            } else {
                                                cout << "Player is already holding a " << playr->getArm()
                                                << ". \nYou can only carry one set of Armour at a time. Drop " << playr->getArm()
                                                << " to pick a new one" << endl;
                                            }
                                        } else {
                                            if (playr->checkShld() == false){ //checks if player already has shield
                                                cout << "Player picked up a " << item->getType() << endl;
                                                playr->pickLightGear(item->getDef(), item->getWeight());
                                                playr->setShield(item->getType());
                                                setBrdPos(18); //sets square to empty

                                            } else {
                                                cout << "Player is already holding a " << playr->getShld()
                                                << ". \nYou can only carry one shield at a time. Drop " << playr->getShld()
                                                << " to pick a new one" << endl;
                                            }
                                        }


                                } else if (item->getType() == "Ring of Life"){ // checks if item is ring of life
                                    cout << "Player picked up a " << item->getType() << endl;
                                    playr->pickRngOfLife(item->getHealth()); // calls method to pick ring of life
                                    setBrdPos(18); //sets square to empty


                                } else if (item->getType() == "Ring of Strength"){ // checks if item is ring of strength
                                    cout << "Player picked up a " << item->getType() << endl;
                                    playr->pickRngOfStr(item->getHealth(), item->getStr()); // calls method to pick ring of strength
                                    setBrdPos(18); //sets square to empty

                                };

                            } else {
                                cout << "You dont have enough space in your Inventory left. "
                                << "\nYou'll have to drop some items to be able to pick more" << endl;

                            };
                            break;

                    case 'd':
                    case 'D':


                        if (pos == 18) { //check to see if square is empty

                            int choice;

							//A block to check and print out the items player currently has
                                if (playr->checkArm()) {
                                    cout << "You are currently wearing " << playr->getArm()
                                    << "\nEnter 1 to  drop" << endl;
                                }
                                if (playr->checkWpn()) {
                                    cout << "You are currently wearing " << playr->getWpn()
                                    << "\nEnter 2 to  drop" << endl;
                                }
                                if (playr->checkShld()) {
                                    cout << "You are currently wearing " << playr->getShld()
                                    << "\nEnter 3 to  drop" << endl;
                                }
                                if (playr->checkRngOfLife() > 0) {
                                    cout << "You are currently wearing " << playr->checkRngOfLife()
                                    << " Ring of Life" << "\nEnter 4 to  drop" << endl;
                                }
                                if (playr->checkRngOfStr() > 0) {
                                    cout << "You are currently wearing " << playr->checkRngOfStr()
                                    << " Ring of Strength" << "\nEnter 5 to  drop" << endl;
                                }

                                cout << "What Item would you like to drop?" << endl;
                                cin >> choice; //input to select what should be dropped

								//A block to drop current player item
                                if (choice == 1) {
                                    (playr->getArm() == "Plate Armour") ? playr->dropHeavGear(): playr->dropLightGear(); //calls correct method to drop current armour
                                    cout << playr->getArm() << " has been dropped\n";
									(playr->getArm() == "Plate Armour") ? setBrdPos(9) : setBrdPos(10); //sets square to current armour

                                } else if (choice == 2) {
                                    playr->dropWeapon(); //calls method to drop weapon
                                    cout << playr->getWpn() << " has been dropped\n";
									(playr->getWpn() == "Sword") ? setBrdPos(5) : setBrdPos(6); //sets square to current weapon

                                } else if (choice == 3) {
                                    (playr->getShld() == "Large Shield") ? playr->dropHeavGear(): playr->dropLightGear(); //calls correct method to drop current shield
                                    cout << playr->getShld() << " has been dropped\n";
									(playr->getShld() == "Large Shield") ? setBrdPos(7) : setBrdPos(8); //sets square to current shield

                                } else if (choice == 4) {
                                    playr->dropRngOfLife(); //calls method to drop ring of life
                                    cout << "One Ring of Life has been dropped\n";
									setBrdPos(11); //sets square to ring of life

                                } else if (choice == 5) {
                                    playr->dropRngOfStr(); //calls method to drop ring of strength
                                    cout << "One Ring of Strength has been dropped\n";
									setBrdPos(12); //sets square to ring of strength

                                } else {
                                    cout << "Invalid Choice" << endl;

                                }

                        } else {
                            cout << "You cannot drop item here, square is occupied" << endl;

                        }

                        break;

                    case 'l':
                    case 'L':

                        if (pos == 18) {
                            cout << "Current location is empty\n";

                        } else {
                            //prints out item available on square
                            cout << "There is a " << item->getType() << "Here\n";
                        }

                        break;

                    case 'i':
                    case 'I':

                        //Prints out current player items
						cout << "The player currently has\n";
                        if (playr->checkArm()) {
                            cout << "A " << playr->getArm() << endl;
                        }
                        if (playr->checkWpn()) {
                            cout << "A " << playr->getWpn() << endl;
                        }
                        if (playr->checkShld()) {
                            cout << "A " << playr->getShld() << endl;
                        }
                        if (playr->checkRngOfLife() > 0) {
                            cout << playr->checkRngOfLife() << " Ring of Life" << endl;
                        }
                        if (playr->checkRngOfStr() > 0) {
                            cout << playr->checkRngOfStr() << " Ring of Strenght" << endl;
                        }
                        break;

                    default:
                        cout << "Wrong Input, Sorry action cannot be carried out." << endl;
                        break;

		}
}

/***
 * Method to handle player interations in empty square
 *
 * params:
 * char act - action by player
 * Race* playr - player character object
 *
 * return - void
 ***/
void Board::playerIntrEmpty(char act, Race* playr)
{
   switch(act)
   {
                    case 'l':
                    case 'L':

                            cout << "You look, but can see nothing around" << endl;
                            break;

                    case 'i':
                    case 'I':

						//Prints out current player items
                        cout << "The player currently has\n";
                        if (playr->checkArm()) {
                            cout << "A " << playr->getArm() << endl;
                        }
                        if (playr->checkWpn()) {
                            cout << "A " << playr->getWpn() << endl;
                        }
                        if (playr->checkShld()) {
                            cout << "A " << playr->getShld() << endl;
                        }
                        if (playr->checkRngOfLife() > 0) {
                            cout << playr->checkRngOfLife() << " Ring of Life" << endl;
                        }
                        if (playr->checkRngOfStr() > 0) {
                            cout << playr->checkRngOfStr() << " Ring of Strength" << endl;
                        }
                        break;

                    default:
                        cout << "Sorry action cannot be carried out here." << endl;
                        break;
   }
}

/***
 * Method to show if its day or night
 *
 * params: none
 *
 * return - void
 ***/
void Board::displayTime()
{

    if (currentTime == 0){

        cout << "It is day\n";
    }else if (currentTime == 1){

        cout << "It is night\n";
    }
}

/***
 * Method to change time from night to day
 *
 * params: none
 *
 * return - void
 ***/
void Board::changeTime()
{
     if (playSteps == 5) //check player steps
    {
        if (currentTime == 0)
        {
            currentTime++;
        }
        else if(currentTime == 1)
        {
            currentTime--;
        }

        playSteps = 0; //reset player steps
    }
}

/***
 * Method to set current board position
 *
 * params:
 * int pos - current square condition
 *
 * return - void
 ***/
void Board::setBrdPos(int pos)
{
    int x = loc[0];
    int y = loc[1];

    boardArray[x][y] = pos;
}




