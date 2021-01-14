// Weapons.cpp: Implementation for Weapons class
//
////////////////////////////////////////////////

#include <iostream>
#include "Weapons.h"


using namespace std;

//////////////////////////////////////////////////////////////////////
// getAtt()
// This method here returns the attack value for the weapon specified.
//
// param: empty
// return: integer - Here, the attack value of the weapon is being returned
//////////////////////////////////////////////////////////////////////

int Weapons::getAtt()
{
    return attackVal;
}
