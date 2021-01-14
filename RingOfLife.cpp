//RingOfLife.cpp: Implementation for Ring Of Life class
//
////////////////////////////////////////////////////

#include <iostream>
#include "RingOfLife.h"

using namespace std;

/////////////////////////////////////////////////////////////////////
// RingOfLife()
//
// Default constructor
// Weight: The weight of the ring of life assigned here is 1
// health: The health value of the ring of life assigned here is 10
// type: The type of weapon "Ring of Life" is assigned.
//////////////////////////////////////////////////////////////////////

RingOfLife::RingOfLife()
{
    health = 10;

    type = "Ring of Life";

    weight = 1;
}

//////////////////////////////////////////////////////////////////////
// getHealth()
// This method here returns the health value for the item specified.
//
// param: empty
// return: integer - Here, the health value of the item is being returned
//////////////////////////////////////////////////////////////////////

int RingOfLife::getHealth()
{
    return health;
}

