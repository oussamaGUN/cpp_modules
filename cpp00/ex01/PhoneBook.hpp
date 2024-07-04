#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <limits.h>
#include "Contact.hpp"
#define MAX_CONTACTS 5

class PhoneBook
{
public:
    Contact contacts[MAX_CONTACTS];
    bool Compare(std::string str1, std::string str2) {
        for (int i = 0; str2[i]; i++)
            if (str1[i] != str2[i]) return false;
        return true;        
    }
    std::string Trunc(std::string str) {
        if (str.length() < 10) return str;
        else return str.substr(0, 9).append(".");
    }
    bool ValidInput(std::string str) {
        for (int i = 0; str[i]; i++)
            if (str[i] < '0' || str[i] > '9') return true;
        return false;
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