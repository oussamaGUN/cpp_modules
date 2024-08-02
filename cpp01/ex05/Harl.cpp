#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
        << std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" << 
            " enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
            "years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::compare(std::string level , std::string input)
{
    for (int i = 0;i < level.length();i++)
        if (level[i] != input[i])
            return 0;
    return 1;
}
void Harl::complain(std::string level)
{
    void (Harl::*func[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (i = 0; i < 3 && !Harl::compare(level, levels[i]); i++) {}
    (this->*func[i])();
}
Harl::Harl()
{
}

Harl::~Harl()
{
}