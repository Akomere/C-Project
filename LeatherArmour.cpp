// Leather Armour.cpp: Implementation for Leather Armour class
//
////////////////////////////////////////////////

#include <iostream>
#include "LightGear.h"
#include "LeatherArmour.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// LeatherArmour()
//
// Default constructor
// Weight: The weight of the leather armor assigned here is 20
// defenceVal: The defense value of the leather armor assigned here is 5
// type: The type of weapon "Leather Armor" is assigned.
//////////////////////////////////////////////////////////////////////

LeatherArmour::LeatherArmour()
{
    defenceVal = 5;

    weight = 20;

    type = "Leather Armour";
}

