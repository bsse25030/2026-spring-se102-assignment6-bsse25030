#include "Knight.h"

Knight::Knight(string name, int health, int power, int armor, int charge)
    : Warrior(name, health, power, armor)
{
    chargeBonus = charge;
}

int Knight::calculateBurstDamage() const
{
    return getPower() + chargeBonus;
}