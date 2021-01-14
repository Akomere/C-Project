// PlateArmour.cpp: Implementation for Plate Armour class
//
////////////////////////////////////////////////

#include <iostream>
#include "HeavyGear.h"
#include "PlateArmour.h"

using namespace std;

/////////////////////////////////////////////////////////////////////
// PlateArmour()
//
// Default constructor
// Weight: The weight of the plate armor assigned here is 40
// attackVal: The attack value of the plate armor assigned here is 5
// defenceVal: The defence value of the plate armor assigned here is 10
// type: The type of weapon "Plate Armour" is assigned.
//////////////////////////////////////////////////////////////////////

PlateArmour::PlateArmour()
{
    defenceVal = 10;

    attackVal = 5;

    weight = 40;

    type = "Plate Armour";
}
