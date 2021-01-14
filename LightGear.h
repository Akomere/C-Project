
//LightGear.h: interface for the Light Gear class.
//
//////////////////////////////////////////////
#include "Item.h"

#ifndef LIGHTGEAR_H_INCLUDED
#define LIGHTGEAR_H_INCLUDED

class LightGear : public Item
{
public:

    int getDef();

protected:

    int defenceVal;


};

#endif // LIGHTGEAR_H_INCLUDED
