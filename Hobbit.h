// Hobbit.h: interface for the Hobbit class.
//
//////////////////////////////////////////

#include "Race.h"

#ifndef HOBBIT_H
#define HOBBIT_H


class Hobbit : public Race
{
    public:
        Hobbit();

        virtual void succDef(int att, int curTim);

        virtual ~Hobbit();

    private:
};

#endif // HOBBIT_H
