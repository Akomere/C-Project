//Dwarf.h: interface for the Dwarf class.
//
//////////////////////////////////////////
#include "Race.h"

#ifndef DWARF_H
#define DWARF_H


class Dwarf : public Race
{
    public:
        Dwarf();

        virtual void succDef(int att, int curTim);

        virtual ~Dwarf();

    private:
};

#endif // DWARF_H
