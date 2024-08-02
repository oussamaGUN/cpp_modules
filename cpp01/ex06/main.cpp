#include "Harl.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Invalid argement" << std::endl;
        return 1;
    }
    int level = 0;
    std::string lvl = argv[1];
    if (lvl == "DEBUG")
        level = 1;
    else if (lvl == "INFO")
        level = 2;
    else if (lvl == "WARNING")
        level = 3;
    else if (lvl == "ERROR")
        level = 4;
    switch (level)
    {
    case 1:
    {
        std::cout << "[ DEBUG ]" << std::endl;
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
                << std::endl;
        std::cout << std::endl;
    }
    case 2:
    {
        std::cout << "[ INFO ]" << std::endl;
        std::cout << "I cannot believe adding extra bacon costs more money. "
            << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
            << std::endl;
        std::cout << std::endl;
    }
    case 3:
    {
        std::cout << "[ WARNING ]" << std::endl;
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
            << "years whereas you started working here since last month." << std::endl;
        std::cout << std::endl;
    }
    case 4:
    {
        std::cout << "[ ERROR ]" << std::endl;
        std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
        break;
    }
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        std::cout << std::endl;
        break;
    }
    return 0;
}
