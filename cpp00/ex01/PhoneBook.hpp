#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <limits.h>
#include "Contact.hpp"
#define MAX_CONTACTS 2

class PhoneBook
{
public:
    Contact contacts[MAX_CONTACTS];
    bool Compare(std::string str1, std::string str2);
    std::string Trunc(std::string str);
    bool ValidInput(std::string str);
    PhoneBook();
    ~PhoneBook();
};


#endif