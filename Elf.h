// Elf.h: interface for the Elf class.
//
//////////////////////////////////////////

#include "Race.h"

#ifndef ELF_H
#define ELF_H


class Elf : public Race
{
    public:

        Elf();

        virtual void succDef(int att, int curTim);

        virtual ~Elf();

    private:
};

#endif // ELF_H
