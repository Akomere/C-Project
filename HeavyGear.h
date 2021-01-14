//HeavyGear.h: interface for the Heavy Gear class.
//
////////////////////////////////////////////////////
#include "Item.h"

#ifndef HEAVYGEAR_H_INCLUDED
#define HEAVYGEAR_H_INCLUDED

class HeavyGear : public Item
{
public:

    int getAtt();

    int getDef();

protected:

    int defenceVal;

    int attackVal;


};



#endif // HEAVYGEAR_H_INCLUDED
