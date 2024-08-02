#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& type;
public:
    HumanA(std::string name, Weapon& type);
    ~HumanA();
    void attack();
};




#endif