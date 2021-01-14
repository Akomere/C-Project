//Human.cpp: Implementation of the Human class
//
/////////////////////////////////////////////////
#include <iostream>
#include "Human.h"
#include "Race.h"
#include <time.h>

using namespace std;

/////////////////////////////////////////
//Human()
//Default Constructor for Human
//
//Sets the Human attributes on instantiation
//////////////////////////////////////////
Human::Human()
{
    health = 60;

    attackStr = 30;

    defenceStr = 20;

    attackProb = 0.67;

    defenceProb = 0.5;

    strength = 100;


}


/////////////////////////////////////////
//succDef(int att, int curTim)
//Method to perform result of successful defence by the Human
//
//
//
//param: a)attack value of opponent
//       b)the current time of the
//return: void
//////////////////////////////////////////
void Human::succDef(int att, int curTim)
{
    //no damage is caused
    cout << "received no damage\n\n";

}



