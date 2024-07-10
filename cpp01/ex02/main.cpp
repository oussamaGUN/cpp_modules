#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;
    // The memory address
    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    // the value
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}
