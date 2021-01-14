// BoardGame.h: interface for the Board Game class.
//
////////////////////////////////////////////////////

#include "Human.h"
#include "Orc.h"
#include "Weapons.h"



#ifndef BOARD_GAME_H_INCLUDED
#define BOARD_GAME_H_INCLUDED


class Board
{
public:
    Board();

    void gamePlay(std::string playerName, Race* playerChoice);

    void displayTime();

    void changeTime();

    void playMove(char dirn);

    void assignObj();

    void setSize(int w, int l);

    void showLoc();

    void display(std::string playrName, Race* playr);//always displays all the stuff about the payer and asks for input

    void playerIntrEnmy(char act,int pos, Race* playr, Race* enemy);//takes the input and acts on it

    void playerIntrItem(char act, int pos, Race* playr, Item* item);

    void playerIntrEmpty(char act, Race* playr);

    void setBrdPos(int pos);



private:


    //counts the number of commands successfully entered by the player, in order to calculate the current time of the day
    int playSteps;

    //contains the created board
    int boardArray[200][200];

    //it sores the current position of the player
    int loc[2];

    //stores the current time of the day (day or night)
    int currentTime;

    //stores the width of the board
    int boardWidth;

    //stores the length of the board
    int boardLength;

};


#endif // BOARD_GAME_H_INCLUDED
