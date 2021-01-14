//Hobbit.cpp: Implementation of the Hobbit class
//
/////////////////////////////////////////////////
#include <iostream>
#include "Hobbit.h"
#include "Race.h"
#include <time.h>

using namespace std;

/////////////////////////////////////////
//Hobbit()
//Default Constructor for Hobbit
//
//Sets the Hobbit attributes on instantiation
//////////////////////////////////////////
Hobbit::Hobbit()
{
    health = 70;

    attackStr = 25;

    defenceStr = 20;

    attackProb = 0.33;

    defenceProb = 0.67;

    strength = 85;
}

/////////////////////////////////////////
//succDef(int att, int curTim)
//Method to perform result of successful defence by the Hobbit
//
//
//
//param: a)attack value of opponent
//       b)the current time of the
//return: void
//////////////////////////////////////////
void Hobbit::succDef(int att, int curTim)
{
    //varies Hobbit damage using random number generator
    int dam = 1 + (rand()%5);

    health -= dam;

    cout << "received " << dam << " damage" << endl;
}

/////////////////////////////////////////
//~Hobbit()
//Destructor for Hobbit
//
//Destructs Hobbit Object
//////////////////////////////////////////
Hobbit::~Hobbit()
{

}
