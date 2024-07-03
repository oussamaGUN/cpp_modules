#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    void setter(std::string FirstName, std::string LastName, std::string NickName,
                std::string PhoneNumber, std::string DarkestSecret) {
        this->FirstName = FirstName;
        this->LastName = LastName;
        this->NickName = NickName;
        this->PhoneNumber = PhoneNumber;
        this->DarkestSecret = DarkestSecret;
    }
    std::string FirstNameGetter() {
        return this->FirstName;
    }
    std::string LastNameGetter() {
        return this->LastName;
    }
    std::string NickNameGetter() {
        return this->NickName;
    }
    std::string PhoneNumberGetter() {
        return this->PhoneNumber;
    }
    std::string DarkestSecretGetter() {
        return this->DarkestSecret;
    }
    Contact();
    ~Contact();
};

Contact::Contact() {
}

Contact::~Contact() {
}

#endif
