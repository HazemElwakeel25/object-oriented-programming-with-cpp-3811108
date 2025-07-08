#include "rangedattack.h"

RangedAttack::RangedAttack(const std::string &name, int range)
    // TODO: Initialize base class
    : Ability(name), rangeValue(range)
{
}
RangedAttack::~RangedAttack()
{
    std::cout << "\nRangedAttack object is being deleted." << std::endl;
}
void RangedAttack::use() const
{
    std::cout << abilityName << " Is used to attack form " << (rangeValue) << "m" << std::endl;
}
// TODO: Override describe()
void RangedAttack::describe() const
{
    std::cout << "Ranged Attack Ability: " << abilityName << std::endl;
}