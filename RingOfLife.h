//RingOfLife.h: interface for the Ring Of Life class.
//
////////////////////////////////////////////////////
#include "Item.h"

#ifndef RINGOFLIFE_H_INCLUDED
#define RINGOFLIFE_H_INCLUDED

class RingOfLife : public Item
{
public:

    RingOfLife();

    int getHealth();

private:

    int health;
};

#endif // RINGOFLIFE_H_INCLUDED
