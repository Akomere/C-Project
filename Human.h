// Human.h: interface for the Human class.
//
////////////////////////////////////

#include "Race.h"

#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED

class Human : public Race
{
    public:

        Human();

        virtual void succDef(int att, int curTim);


};

#endif // HUMAN_H_INCLUDED
