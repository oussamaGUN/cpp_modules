#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
    if (MAX_CONTACTS > 8) return std::cout << "Max contact is 8", 1;
    PhoneBook phone;
    std::string input;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    std::string index;
    int i = 0;
    while (!std::cin.eof())
    {
        std::cout << "ENTER ADD OR SEARCH OR EXIT: ";
        std::cin >> input;
        if (!std::cin.eof() && phone.Compare(input, "ADD")) {
            if (i > MAX_CONTACTS - 1)
                i = MAX_CONTACTS - 1;
            std::cout << "Enter first name: ", std::cin >> FirstName;
            if (std::cin.eof()) break ;
            std::cout << "Enter last name: ", std::cin >> LastName;
            if (std::cin.eof()) break ;
            std::cout << "Enter nickname: ", std::cin >> NickName;
            if (std::cin.eof()) break ;
            std::cout << "Enter phone number: ", std::cin >> PhoneNumber;
            if (std::cin.eof()) break ;
            std::cout << "Enter darkest secret: ", std::cin >> DarkestSecret;
            if (std::cin.eof()) break ;
            phone.contacts[i].setter(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
            i++;
        } else if (!std::cin.eof() && phone.Compare(input, "SEARCH")) {
            for (int j = 0; j < i; j++)
            {
                std::cout << j << " | ";
                std::cout << phone.Trunc(phone.contacts[j].FirstNameGetter());
                std::cout << " | ";
                std::cout << phone.Trunc(phone.contacts[j].LastNameGetter());
                std::cout << " | ";
                std::cout << phone.Trunc(phone.contacts[j].NickNameGetter()) << std::endl;
            }
            std::cout << "Enter the index of a contact: ", std::cin >> index;

            if (std::cin.eof()) break ;
            if (phone.ValidInput(index) || (index[0] == '-' || index.length() > 11) || index.length() > 10 || std::stoll(index) > INT_MAX ||
                std::stoll(index) < INT_MIN  || stoi(index) < 0 || stoi(index) > i - 1) std::cout << "out of range MAX range is " << i << std::endl;
            else { 
                std::cout << "First Name: " << phone.contacts[stoi(index)].FirstNameGetter() << std::endl;
                std::cout << "Last Name: " << phone.contacts[stoi(index)].LastNameGetter() << std::endl;
                std::cout << "Nick Name: " << phone.contacts[stoi(index)].NickNameGetter() << std::endl;
                std::cout << "Phone Number: " << phone.contacts[stoi(index)].PhoneNumberGetter() << std::endl;
                std::cout << "Darkest Secret: " << phone.contacts[stoi(index)].DarkestSecretGetter() << std::endl;
            }

        } else if (!std::cin.eof() && phone.Compare(input, "EXIT")) {
            break ;
        } else if (!std::cin.eof())
            std::cout << "invalid input" << std::endl;
    }
    return 0;
}

