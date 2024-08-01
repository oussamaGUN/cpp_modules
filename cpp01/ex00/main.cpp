#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
    Zombie *Zom1 = newZombie("foo");
    Zom1->announce();

    randomChump("pooo");

    delete Zom1;
    return 0;
}
