#include "warrior.h"

Warrior::Warrior(const std::string &name, int health, int strength)
    : Character(name, health), strength(strength)
{
}

void Warrior::attack() const
{
  // TODO: Implement attack including strength bonus
  std::cout << name << " attacks for " << (BASE_DAMAGE + strength) << " damage! " << "(" << BASE_DAMAGE
            << " base + " << strength << " strength)" << std::endl;
}

void Warrior::displayStats() const
{
  // TODO: Implement stats display including strength and equipment
  Character::displayStats();
  std::cout << "Strength: " << strength << std::endl;
  Warrior_Equipment.displayInventory();
}

void Warrior::addItem(const std::string &item)
{
  // TODO: Use Equipment member to add item
  Warrior_Equipment.addItem(item);
}