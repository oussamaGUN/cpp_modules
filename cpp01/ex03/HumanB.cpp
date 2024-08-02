#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
    this->type = &type;
}