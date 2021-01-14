//Weapons.h: interface for the Weapons class.
//
////////////////////////////////////////

#include "Item.h"

#ifndef WEAPONS_H_INCLUDED
#define WEAPONS_H_INCLUDED

class Weapons : public Item
{
public:

    //get the attack value for the item
    int getAtt();



protected:

    //stores the attack value for the item
    int attackVal;

};

#endif // WEAPONS_H_INCLUDED
