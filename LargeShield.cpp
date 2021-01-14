// Large Shield.cpp: Implementation for Large Shield class
//
////////////////////////////////////////////////

#include <iostream>
#include "LargeShield.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// LargeShield()
//
// Default constructor
// Weight: The weight of the large shield assigned here is 30
// attackVal: The attack value of the large shield assigned here is 5
// defenceVal: The defense value of the large shield assigned here is 10
// type: The type of weapon "Large Shield" is assigned.
//////////////////////////////////////////////////////////////////////

LargeShield::LargeShield()
{
    defenceVal = 10;

    attackVal = 5;

    weight = 30;

    type = "Large Shield";
}
