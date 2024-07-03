#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
    PhoneBook phone;
    std::string input;
    std::string FirstName;
    std::string index;
    int i = 0;
    while (!std::cin.eof())
    {
        std::cout << "ENTER ADD:" << std::endl;
        std::cin >> input;
        if (!std::cin.eof() && phone.Compare(input, "ADD")) {
            if (i > MAX_CONTACTS - 1)
                i = MAX_CONTACTS - 1;
            std::cout << "Enter first name: ";
            std::cin >> FirstName, phone.contacts[i].setter(FirstName);
            i++;
        } else if (!std::cin.eof() && phone.Compare(input, "SEARCH")) {
            for (int j = 0; j < i; j++)
            {
                std::cout << phone.Trunc(phone.contacts[j].getter()) << std::endl;
            }
            std::cin >> index;
            if (stoi(index) > i - 1) std::cout << "out of range" << std::endl;
            else std::cout << phone.contacts[stoi(index)].getter() << std::endl;

        } else if (!std::cin.eof() && phone.Compare(input, "EXIT")) {
            break ;
        } else
            std::cout << "invalid input" << std::endl;


    }
    return 0;
}

