#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string FirstName;
public:
    void setter(std::string FirstName) {
        this->FirstName = FirstName;
    }
    std::string getter() {
        return this->FirstName;
    }
    Contact();
    ~Contact();
};

Contact::Contact() {
}

Contact::~Contact() {
}

#endif
