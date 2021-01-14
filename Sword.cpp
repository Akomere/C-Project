// Sword.cpp: Implementation for Sword class
//
////////////////////////////////////////////////

#include <iostream>
#include "Weapons.h"
#include "Sword.h"

using namespace std;

/////////////////////////////////////////////////////////////////////
// Sword()
//
//Default constructor
// Weight: The weight of the sword weapon assigned here is 10
// attackVal: The attack value of the sword weapon assigned here is 10
// type: The type of weapon "Sword" is assigned.
//////////////////////////////////////////////////////////////////////

Sword::Sword()
{
    attackVal = 10;

    type = "Sword";

    weight = 10;


}

