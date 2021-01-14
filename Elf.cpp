//Elf.cpp: Implementation of the Elf class
//
/////////////////////////////////////////////////

#include <iostream>
#include "Elf.h"
#include "Race.h"
#include <time.h>

using namespace std;

/////////////////////////////////////////
//Elf()
//Default Constructor for Elf
//
//Sets the Elf attributes on instantiation
//////////////////////////////////////////
Elf::Elf()
{
    health = 40;

    attackStr = 40;

    defenceStr = 10;

    attackProb = 1.00;

    defenceProb = 0.25;

    strength = 70;


}

/////////////////////////////////////////
//succDef(int att, int curTim)
//Method to perform result of successful defence by the Elf
//
//
//
//param: a)attack value of opponent
//       b)the current time of the
//return: void
//////////////////////////////////////////
void Elf::succDef(int att, int curTim)
{
    //increases Elf health
    health++;

    cout << "health was increased by 1" << endl;
}

/////////////////////////////////////////
//~Elf()
//Destructor for Elf
//
//Destructs Elf Object
//////////////////////////////////////////
Elf::~Elf()
{

}


