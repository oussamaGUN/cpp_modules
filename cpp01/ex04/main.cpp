#include <iostream>
#include <fstream>
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Invalid argement" << std::endl;
        return 1; 
    }
    std::string fileName = argv[1];
    std::ifstream input(fileName);
    if (!input.is_open())
    {
        std::cerr << "Error in file (input)" << std::endl;
        return 1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string newStr;
    std::string myText;

    while (getline(input, myText))
    {
        std::size_t pos = myText.find(s1);

        while (pos != -1)
        {
            myText.erase(pos, s1.length());
            myText.insert(pos, s2);
            pos = myText.find(s1, pos + 1);
        }
        newStr += myText + '\n';
    }
    input.close();

    std::ofstream Write(fileName + ".replace");
    if (!Write.is_open())
    {
        std::cerr << "Error in file (Write)" << std::endl;
        return 1;
    }
    Write << newStr;
    Write.close();
    return 0;
}
