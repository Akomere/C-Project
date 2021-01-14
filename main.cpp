// main.cpp: main function initiates the game
//
//authors:
//
// 1) Akpoveso Peter Akomere - 20152086 
// 2) Emmanuel Emenikeounu - 13111515
// 3) Emmanuel Oyiwona - 20158351
// 4) Okechukwu Okonwanji - 20093209
// 5) Ogunje Tanimola - 20078595
//
// date: 27 Dec. 2020
//
////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>


#include "Human.h"
#include "Orc.h"
#include "Dwarf.h"
#include "Hobbit.h"
#include "Elf.h"
#include "Sword.h"
#include "Dagger.h"
#include "PlateArmour.h"
#include "LeatherArmour.h"
#include "LargeShield.h"
#include "SmallShield.h"
#include "RingOfLife.h"
#include "RingOfStren.h"

#include "BoardGame.h"

using namespace std;



int main()
{
    //stores the player Race choice ( Human, Orc, Hobbit, Elf, Dwarf)
    int choice;

    //stores the player choice for the maximum  horizontal distance of the Game Board
    int width;

    //stores the player choice for the maximum vertical distance of the Game Board
    int length;

    //stores the players name in a string
    std::string name;

    //seed used for all random number generations occurring during the game
    srand(time(nullptr));

    //Game Board object instantiated
    Board gameBoard;

    //Human object instantiated as player choice option
    Human Aragon;

    //Orc object instantiated as player choice option
    Orc Gargoil;

    //Hobbit object instantiated as player choice option
    Hobbit Bilbo;

    //Elf object instantiated as player choice option
    Elf Legolas;

    //Dwarf object instantiated as player choice option
    Dwarf Philip;

    cout << "How big would you like the board? [max: 200x200]\n";

    cout << "Choose width:" << endl;

    cin >> width;

    cout << "Choose length:" << endl;

    cin >> length;

    cout << "Choose your Player \nSelect 1 for Human, 2 for Orc, 3 for Hobbit, 4 for Elf, 5 for Dwarf\n";

    cin >> choice;

    //method called on Game Board to set Board size to player choice
    gameBoard.setSize(width, length);

    //method called to randomly assign different items and race characters to various locations on the board
    gameBoard.assignObj();

    //if else statement to check player input choice for character choices
    if (choice >= 1 && choice <= 5) {

            cout << "\nChoose your Name\n";
            cin >> name;


            //switch case passes player character choice into the game play function with the player name
            switch(choice){

                case 1: gameBoard.gamePlay(name, &Aragon);
                    break;

                case 2: gameBoard.gamePlay(name, &Gargoil);
                    break;

                case 3: gameBoard.gamePlay(name, &Bilbo);
                    break;

                case 4: gameBoard.gamePlay(name, &Legolas);
                    break;

                case 5: gameBoard.gamePlay(name, &Philip);
                    break;

                default: cout << "Invalid Choice\n";
            }

    } else {//returns for wrong player choice
        cout << "Invalid Choice\n";

    }

    //new function for real game play, stores loc into integer and uses cases to play the game

    return 0;
}





