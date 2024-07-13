#include "PhoneBook.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::setter(std::string FirstName, std::string LastName, std::string NickName,
            std::string PhoneNumber, std::string DarkestSecret) {
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}
std::string Contact::FirstNameGetter() {
    return this->FirstName;
}
std::string Contact::LastNameGetter() {
    return this->LastName;
}
std::string Contact::NickNameGetter() {
    return this->NickName;
}
std::string Contact::PhoneNumberGetter() {
    return this->PhoneNumber;
}
std::string Contact::DarkestSecretGetter() {
    return this->DarkestSecret;
}