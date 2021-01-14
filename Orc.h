// Orc.h: interface for the Orc class.
//
////////////////////////////////////

#include "Race.h"

#ifndef ORC_H_INCLUDED
#define ORC_H_INCLUDED

class Orc : public Race
{
public:
  
    Orc();

    virtual void succDef(int att, int curTim);

    virtual void pwrBsdOnTime(int curTim);

private:

};

#endif // ORC_H_INCLUDED
