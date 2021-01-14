//RingOfStren.cpp: Implementation for Ring Of Strength class
//
////////////////////////////////////////////////////

#include <iostream>
#include "RingOfStren.h"

using namespace std;

/////////////////////////////////////////////////////////////////////
// RingOfStren()
//
// Default constructor
// Weight: The weight of the ring of strength assigned here is 1
// Strength: The strength of the ring of strength assigned here is 50
// health: The health value of the ring of strength assigned here is 10
// type: The type of weapon "Ring of Strength" is assigned.
//////////////////////////////////////////////////////////////////////

RingOfStren::RingOfStren()
{
    weight = 1;

    strength = 50;

    health = 10;

    type = "Ring of Strength";
}

//////////////////////////////////////////////////////////////////////
// getHealth()
// This method here returns the health value for the item specified.
//
// param: empty
// return: integer - Here, the health value of the item is being returned
//////////////////////////////////////////////////////////////////////

int RingOfStren::getHealth()
{
    return health;

}

//////////////////////////////////////////////////////////////////////
// getStr()
// This method here returns the strength value for the item specified.
//
// param: empty
// return: integer - Here, the strength value of the item is being returned
//////////////////////////////////////////////////////////////////////

int RingOfStren::getStr()
{
    return strength;
}

