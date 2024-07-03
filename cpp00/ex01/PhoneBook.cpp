#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
    PhoneBook phone;
    std::cout << phone.contacts[2]->FirstName << std::endl;
    return 0;
}

