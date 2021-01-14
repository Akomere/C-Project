//Dwarf.cpp: Implementation of the Dwarf class
//
/////////////////////////////////////////////////

#include <iostream>
#include "Dwarf.h"
#include "Race.h"
#include <time.h>

using namespace std;

/////////////////////////////////////////
//Dwarf()
//Default Constructor for Dwarf
//
//Sets the Dwarf attributes on instantiation
//////////////////////////////////////////
Dwarf::Dwarf()
{
    health = 50;

    attackStr = 30;

    defenceStr = 20;

    attackProb = 0.67;

    defenceProb = 0.67;

    strength = 130;


}

/////////////////////////////////////////
//succDef(int att, int curTim)
//Method to perform result of successful defence by the Dwarf
//
//
//
//param: a)attack value of opponent
//       b)the current time of the
//return: void
//////////////////////////////////////////
void Dwarf::succDef(int att, int curTim)
{
    //no damage is caused
    cout << "received no damage\n\n";

}

/////////////////////////////////////////
//~Dwarf()
//Destructor for Dwarf
//
//Destructs Dwarf Object
//////////////////////////////////////////
Dwarf::~Dwarf()
{

}

