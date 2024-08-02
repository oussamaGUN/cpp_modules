#ifndef __ZOMBIE_CPP_
#define __ZOMBIE_CPP_


#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void setVal(std::string name);
    std::string getVal();
    Zombie(void);
    void announce(void);
    ~Zombie();
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );


#endif