//Item.h: interface for the Item class.
//
//////////////////////////////////////////

#include <string>
#include <cstring>
#include <cstdlib>

#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED


class Item
{
public:

    std::string getType();

    int getWeight();

    virtual int getAtt();

    virtual int getDef();

    virtual int getHealth();

    virtual int getStr();


protected:
    //weight of the Item
    int weight;

    //name of the Item
    std::string type;
};
#endif // ITEM_H_INCLUDED
