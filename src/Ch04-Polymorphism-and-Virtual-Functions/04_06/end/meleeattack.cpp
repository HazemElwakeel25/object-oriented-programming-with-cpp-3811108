// meleeattack.cpp
#include "meleeattack.h"

MeleeAttack::MeleeAttack(const std::string &name, int force)
    // TODO: Initialize base class
    : Ability(name), impactForce(force)
{
}

MeleeAttack::~MeleeAttack()
{
    std::cout << "\nMeleeAttack object is being deleted." << std::endl;
}

void MeleeAttack::use() const
{
    std::cout << abilityName << " Is used and attack for " << (impactForce) << std::endl;
}
// TODO: Override describe()
void MeleeAttack::describe() const
{
    std::cout << "Melee Attack Ability: " << abilityName << std::endl;
}