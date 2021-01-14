// Heavy Gear.cpp: Implementation for Heavy Gear class
//
////////////////////////////////////////////////

#include <iostream>
#include "HeavyGear.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
//getAtt()
// This method here returns the attack value of the gear specified.
//
// param: empty
// return: integer - Here, the attack value of the gear is being returned
//////////////////////////////////////////////////////////////////////

int HeavyGear::getAtt()
{
    return attackVal;

}

//////////////////////////////////////////////////////////////////////
// getDef()
// This method here returns the defense value of the gear specified.
//
// param: empty
// return: integer - Here, the defense value of the gear is being returned
//////////////////////////////////////////////////////////////////////

int HeavyGear::getDef()
{
    return defenceVal;
}
