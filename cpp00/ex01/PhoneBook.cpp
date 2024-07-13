#include "PhoneBook.hpp"

bool PhoneBook::Compare(std::string str1, std::string str2) {
    for (int i = 0; str2[i]; i++)
        if (str1[i] != str2[i]) return false;
    return true;        
}
std::string PhoneBook::Trunc(std::string str) {
    if (str.length() < 10) return str;
    else return str.substr(0, 9).append(".");
}
bool PhoneBook::ValidInput(std::string str) {
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' || str[i] > '9') return true;
    return false;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}