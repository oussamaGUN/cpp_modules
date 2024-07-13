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
                std::string PhoneNumber, std::string DarkestSecret);
    std::string FirstNameGetter();
    std::string LastNameGetter();
    std::string NickNameGetter();
    std::string PhoneNumberGetter();
    std::string DarkestSecretGetter();
    Contact();
    ~Contact();
};



#endif
