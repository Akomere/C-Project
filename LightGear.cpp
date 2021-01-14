// LightGear.cpp: Implementation for Light Gear class
//
////////////////////////////////////////////////

#include <iostream>
#include "Item.h"
#include "LightGear.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// getDef()
// This method here returns the defense value of the light gear specified.
//
// param: empty
// return: integer - Here, the defense value of the light gear is being returned
//////////////////////////////////////////////////////////////////////

int LightGear::getDef()
{
    return defenceVal;
}
