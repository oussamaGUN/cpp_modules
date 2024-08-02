#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include "Weapon.hpp"


class HumanB
{
private:
    std::string name;
    Weapon* type;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& type);    
};




#endif