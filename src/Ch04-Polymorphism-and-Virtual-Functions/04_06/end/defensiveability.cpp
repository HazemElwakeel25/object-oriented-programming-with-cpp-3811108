#include "defensiveability.h"

DefensiveAbility::DefensiveAbility(const std::string &name, int protection)
    // TODO: Initialize base class
    : Ability(name), protectionAmount(protection)
{
}

DefensiveAbility::~DefensiveAbility()
{
    std::cout << "\nDefensiveAbility object is being deleted." << std::endl;
}

// TODO: Override use()

void DefensiveAbility::use() const
{
    std::cout << abilityName << " Is used and defend for " << (protectionAmount) << std::endl;
}
// TODO: Override describe()
void DefensiveAbility::describe() const
{
    std::cout << "Defensive Ability: " << abilityName << std::endl;
}