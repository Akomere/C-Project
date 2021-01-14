// Race.cpp: Implementation for Race class
//
////////////////////////////////////////////////

#include <iostream>
#include <ctime>
#include <random>
#include <string>
#include <cstring>
#include <cstdlib>

/***  Including Race Header Files  ***/
#include "Race.h"


using namespace std;

/***
 * Race Constructor
 * params: none
 ***/
Race::Race()
{
    health = 0;
    attackStr = 0;
    defenceStr = 0;
    attackProb = 0;
    strength = 0;
    gold = 0;
    rngOfLife = 0;
    rngOfStr = 0;
    currentArm = "none";
    currentWpn = "none";
    currentShld = "none";
    armour = false;
    weapon = false;
    shield = false;
}

/***
 * Method to calculate attack success
 *
 * params: none
 *
 * return - bool
 ***/
bool Race::attacking()
{
    double attChn = attackProb * 10.0;
    int value = (rand()%10) + 1;

    bool result = (value <= attChn) ? true : false;

    return result;

}

/***
 * Method to calculate defence success
 *
 * params: none
 *
 * return - bool
 ***/
bool Race::defending()
{
    double defChn = defenceProb * 10.0;
    int value = (rand()%10) + 1;

    bool result = (value <= defChn) ? true : false;

    return result;
}

/***
 * Method to get health variable
 *
 * params: none
 *
 * return - int
 ***/
int Race::getHealth()
{
    return health;
}

/***
 * Method to get attack variable
 *
 * params: none
 *
 * return - int
 ***/
int Race::getAtt()
{
    return attackStr;
}

/***
 * Method to get defence variable
 *
 * params: none
 *
 * return - int
 ***/
int Race::getDef()
{
    return defenceStr;
}

/***
 * Method to get strength variable
 *
 * params: none
 *
 * return - int
 ***/
int Race::getStr()
{
    return strength;
}

/***
 * Method to add gold won
 *
 * params:
 * int prize - gold won
 *
 * return - void
 ***/
void Race::gainGld(int prize)
{
    gold = gold + prize;
}

/***
 * Method to get current gold
 *
 * params: none
 *
 * return - int
 ***/
int Race::getGld()
{
    return gold;
}

/***
 * Method to check if character has an armour
 *
 * params: none
 *
 * return - bool
 ***/
bool Race::checkArm() // declaration of method to check if player currently has armour
{
    return armour;
}

/***
 * Method to check if character has a weapon
 *
 * params: none
 *
 * return - bool
 ***/
bool Race::checkWpn()
{
    return weapon;
}

/***
 * Method to check if character has a shield
 *
 * params: none
 *
 * return - bool
 ***/
bool Race::checkShld()
{
    return shield;
}

/***
 * Method to set the armour of character
 *
 * params:
 * std::string pckdArm - type of picked armour as a string
 *
 * return - void
 ***/
void Race::setArmour(std::string pckdArm)
{
    armour = !armour;
    currentArm = pckdArm;
}

/***
 * Method to set the weapon of character
 *
 * params:
 * std::string pckdWpn - type of picked weapon as a string
 *
 * return - void
 ***/
void Race::setWeapon(std::string pckdWpn)
{
    weapon = !weapon;
    currentWpn = pckdWpn;
}

/***
 * Method to set the shield of character
 *
 * params:
 * std::string pckdShld - type of picked shield as a string
 *
 * return - void
 ***/
void Race::setShield(std::string pckdShld)
{
    shield = !shield;
    currentShld = pckdShld;
}

/***
 * Method to get the type of armour of character
 *
 * params: none
 *
 * return - std::string
 ***/
std::string Race::getArm()
{
    return currentArm;
}

/***
 * Method to get the type of weapon of character
 *
 * params: none
 *
 * return - std::string
 ***/
std::string Race::getWpn()
{
    return currentWpn;
}

/***
 * Method to get the type of shield of character
 *
 * params: none
 *
 * return - std::string
 ***/
std::string Race::getShld()
{
    return currentShld;
}

/***
 * Method to get number of rings of life
 *
 * params: none
 *
 * return - int
 ***/
int Race::checkRngOfLife()
{
    return rngOfLife;
}

/***
 * Method to get number of rings of strength
 *
 * params: none
 *
 * return - int
 ***/
int Race::checkRngOfStr()
{
    return rngOfStr;
}

/***
 * Method to set number of rings of life
 *
 * params: none
 *
 * return - void
 ***/
void Race::setRngOfLife()
{
    rngOfLife++;
}

/***
 * Method to set number of rings of strength
 *
 * params: none
 *
 * return - void
 ***/
void Race::setRngOfStr()
{
    rngOfStr++;
}

/***
 * Method to pick weapon
 *
 * params:
 * int weaponAtt - attack of picked up weapon
 * int weaponWeight - weigth of picked up weapon
 *
 * return - void
 ***/
void Race::pickWeapon(int weaponAtt, int weaponWeight)
{
    attackStr = attackStr + weaponAtt;
    strength = strength - weaponWeight;
}

/***
 * Method to pick light gear
 *
 * params:
 * int gearDef - defence of picked up light gear
 * int gearWeight - weigth of picked up light gear
 *
 * return - void
 ***/
void Race::pickLightGear(int gearDef, int gearWeight)
{
    defenceStr = defenceStr + gearDef;
    strength = strength - gearWeight;
}

/***
 * Method to pick heavy gear
 *
 * params:
 * int gearAtt - attack of picked up heavy gear
 * int gearDef - defence of picked up heavy gear
 * int gearWeight - weigth of picked up heavy gear
 *
 * return - void
 ***/
void Race::pickHeavGear(int gearAtt, int gearDef, int gearWeight)
{
    attackStr = attackStr - gearAtt;
    defenceStr = defenceStr + gearDef;
    strength = strength - gearWeight;
}

/***
 * Method to pick ring of health
 *
 * params:
 * int ringHealth - health of picked up ring of health
 *
 * return - void
 ***/
void Race::pickRngOfLife(int ringHealth)
{
    health = health + ringHealth;
    strength--;
}

/***
 * Method to pick ring of strength
 *
 * params:
 * int ringHealth - health of picked up ring of strength
 * int ringStr - strength of picked up ring of strength
 *
 * return - void
 ***/
void Race::pickRngOfStr(int ringHealth, int ringStr)
{
    health = health - ringHealth;
    strength--;
    strength = strength + ringStr;
}

/***
 * Method to drop weapon
 *
 * params: none
 *
 * return - void
 ***/
void Race::dropWeapon()
{
    if (currentWpn == "Sword") { //check weapon
        attackStr = attackStr - 10;
        strength = strength + 10;
		currentWpn = "none";
    } else {
        attackStr = attackStr - 5;
        strength = strength + 5;
		currentWpn = "none";
    }

}

/***
 * Method to drop light gear
 *
 * params: none
 *
 * return - void
 ***/
void Race::dropLightGear()
{
    if (currentArm == "Leather Armour") { //check light gear
        defenceStr = defenceStr - 5;
        strength = strength + 20;

    } else if (currentShld == "Small Shield") {
        defenceStr = defenceStr - 5;
        strength = strength - 10;

    }
}

/***
 * Method to drop heavy gear
 *
 * params: none
 *
 * return - void
 ***/
void Race::dropHeavGear()
{
    if (currentArm == "Plate Armour") { //check heavy gear
        attackStr = attackStr + 5;
        defenceStr = defenceStr - 10;
        strength = strength + 40;

    } else if (currentShld == "Large Shield") {
        attackStr = attackStr + 5;
        defenceStr = defenceStr - 10;
        strength = strength + 40;
    }

}

/***
 * Method to drop ring of life
 *
 * params: none
 *
 * return - void
 ***/
void Race::dropRngOfLife()
{
    health = health - 10;
    strength++;
    rngOfLife--;
}

/***
 * Method to drop ring of strength
 *
 * params: none
 *
 * return - void
 ***/
void Race::dropRngOfStr()
{
    health = health + 10;
    strength++;
    rngOfStr--;
    strength = strength - 50;
}

/***
 * Method for when damage is taken
 *
 * params:
 * int att - attack of assailant
 *
 * return - void
 ***/
void Race::takeDam(int att)
{
    int dam = att - defenceStr;
    health -= dam;

}

/***
 * Virtual method for when defence is successful
 *
 * params:
 * int att - attack of assailant
 * int curTim - current time of game( day or night )
 *
 * return - void
 ***/
void Race::succDef(int att, int curTim)
{

}

/***
 * Virtual method for stats based on time
 *
 * params:
 * int curTim - current time of game( day or night )
 *
 * return - void
 ***/
void Race::pwrBsdOnTime(int curTim)
{

}





