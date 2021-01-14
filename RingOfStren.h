//RingOfStren.h: interface for the RingOfStren class.
//
////////////////////////////////////////////////////

#include "Item.h"

#ifndef RINGOFSTREN_H_INCLUDED
#define RINGOFSTREN_H_INCLUDED

class RingOfStren : public Item
{
public:

    RingOfStren();

    int getStr();

    int getHealth();

private:

    //strength value of the ring
    int strength;

    //health value of the ring
    int health;

};

#endif // RINGOFSTREN_H_INCLUDED
