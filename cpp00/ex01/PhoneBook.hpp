#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <fstream>
#include "Contact.hpp"
#define MAX_CONTACTS 3

class PhoneBook
{
public:
    Contact contacts[MAX_CONTACTS];
    bool Compare(std::string str1, std::string str2) {
        for (int i = 0; str1[i]; i++)
            if (str1[i] != str2[i]) return false;
        return true;        
    }
    std::string Trunc(std::string str) {
        if (str.length() < 10) return str;
        else return str.substr(0, 9).append(".");
    }
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