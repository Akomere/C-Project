// Race.h: interface for the Race class.
//
////////////////////////////////////
#include <string>
#include <cstring>
#include <cstdlib>

#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED

class Race
{
public:

    Race();

    int getHealth();

    int getAtt();

    int getDef();

    int getStr();

    bool checkArm();

    bool checkWpn();

    bool checkShld();

    void setArmour(std::string pckdArm);

    void setWeapon(std::string pckdWpn);

    void setShield(std::string pckdShld);

    std::string getArm();

    std::string getWpn();

    std::string getShld();

    int checkRngOfLife();

    int checkRngOfStr();

    void setRngOfLife();

    void setRngOfStr();

    void pickWeapon(int weaponAtt, int weaponWeight);

    void pickLightGear(int gearDef, int gearWeight);

    void pickHeavGear(int gearAtt, int gearDef, int gearWeight);

    void pickRngOfLife(int ringHealth);

    void pickRngOfStr(int ringHealth, int ringStr);

    void dropWeapon();

    void dropLightGear();

    void dropHeavGear();

    void dropRngOfLife();

    void dropRngOfStr();

    bool attacking();

    bool defending();

    void takeDam(int att);

    virtual void succDef(int att, int curTim) = 0;

    virtual void pwrBsdOnTime(int curTim);

    void gainGld(int prize);

    int getGld();


protected:


    //stores the current health of the Races
    int health;

    //stores the attacking strength (attack value) of the Race
    int attackStr;

    //stores the defending strength (defence value) of the Race
    int defenceStr;

    //stores the attack chance of the Race
    double attackProb;

    //stores the defence chance of the Race
    double defenceProb;

    //stores the strength value of the Race
    int strength;

    //stores the accumulated gold gotten by the Race
    int gold;

    //stores if the Race currently has armour or not
    bool armour;

    //stores if the Race currently has a weapon or not
    bool weapon;

    //stores if the Race currently has a shield or not
    bool shield;

    //stores the type of armour currently held by the Race as a string
    std::string currentArm;

    //stores the type of weapon currently held by the Race as a string
    std::string currentWpn;

    //stores the type of shield currently held by the Race as a string
    std::string currentShld;

    //stores the current number of rings of life held by the Race
    int rngOfLife;

    //stores the current number of rings of strength held by the Race
    int rngOfStr;


};

#endif // RACE_H_INCLUDED
