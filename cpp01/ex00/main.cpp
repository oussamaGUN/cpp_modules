#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
    Zombie *zombie = newZombie("foo");
    if (!zombie)
        return 1;
    zombie->announce();
    delete zombie;
    randomChump("poo");    
    return 0;
}
