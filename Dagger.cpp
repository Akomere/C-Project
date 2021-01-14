// Dagger.cpp: Implementation for Dagger class
//
////////////////////////////////////////////////

#include <iostream>
#include "Weapons.h"
#include "Dagger.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// Dagger()
//
//Default constructor
// Weight: The weight of the dagger weapon assigned here is 5
// attackVal: The attack value of the dagger weapon assigned here is 5
// type: The type of weapon "Dagger" is assigned.
//////////////////////////////////////////////////////////////////////

Dagger::Dagger()
{
    weight = 5;

    attackVal = 5;

    type = "Dagger";
}
