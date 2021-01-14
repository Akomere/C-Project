// SmallShield.cpp: Implementation for Small Shield class
//
////////////////////////////////////////////////

#include <iostream>
#include "SmallShield.h"
#include "LightGear.h"

using namespace std;

/////////////////////////////////////////////////////////////////////
// SmallShield()
//
// Default constructor
// Weight: The weight of the Small shield assigned here is 10
// defenceVal: The defence value of the small shield assigned here is 5
// type: The type of weapon "Small Shield" is assigned.
//////////////////////////////////////////////////////////////////////

SmallShield::SmallShield()
{
    defenceVal = 5;

    weight = 10;

    type = "Small Shield";
}
