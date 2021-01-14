// Orc.cpp: Implementation for Orc class
//
/////////////////////////////////////////

#include <iostream>
#include "Orc.h"
#include "Human.h"
#include <time.h>
#include "BoardGame.h"

using namespace std;

/////////////////////////////////////////
//Orc()
//Default Constructor for Orc
//
//Sets the Orc attributes on instantiation
//////////////////////////////////////////
Orc::Orc()
{
    health = 50;

    attackStr = 25;

    defenceStr = 10;

    attackProb = 0.25;

    defenceProb = 0.25;

    strength = 130;


}


/////////////////////////////////////////
//succDef(int att, int curTim)
//Method to perform result of successful defence by the Orc
//
//
//
//param: a)attack value of opponent
//       b)the current time of the day
//return: void
//////////////////////////////////////////
void Orc::succDef(int att, int curTim)
{

    //conditional statement that alters result of successful defence based on the time of the day
    if(curTim == 0){

        //calculates 1/4 of the damage during the day
        int dam = (att - defenceStr)/4;
        health -= dam;

        cout << "received " << dam << " damage" << endl;

    } else {

        //health increases during the night
        health++;

        cout << "health was increased by 1" << endl;

    }


}


/////////////////////////////////////////
//pwrBsdOnTime(int curTim)
//Method to alter Orc abilities based on the time of the day(day or night)
//
//
//
//param: a)Current time of day (day or night)
//
//return: void
//////////////////////////////////////////
void Orc::pwrBsdOnTime(int curTim)
{
    //conditional statement that alters Orc attributes based on the time of the day
    if(curTim == 0){

        //reduces the Orc attacking strength during the day
        attackStr = attackStr - 20;

        //changes the Orc attacking chance during the day
        attackProb = 0.25;

        //reduces the Orc defence strength during the day
        defenceStr = defenceStr - 15;

        //changes the defence chance during the day
        defenceProb = 0.25;

        cout <<"\n";
        cout << "Hmm... The Orc seems less threatening all of a sudden" << endl;
        cout <<"\n";


    } else {

        //increases the Orc attacking strength during the night
        attackStr = attackStr + 20;

        //changes the Orc attacking chance during the night
        attackProb = 1.0;

        //increases the Orc defence strength during the night
        defenceStr = defenceStr + 15;

        //changes the Orc defence chance during the night
        defenceProb = 0.5;

        cout <<"\n";
        cout << "Oh Nooo!!! The Orc just got stronger" << endl;
        cout <<"\n";

    }


}


