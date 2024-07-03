#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#define MAX_CONTACTS 2

class PhoneBook
{
public:
    Contact* contacts[MAX_CONTACTS];
    PhoneBook();
    ~PhoneBook();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

#endif