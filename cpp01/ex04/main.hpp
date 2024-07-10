#ifndef MAIN_HPP
#define MAIN_HPP


#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
class ThisIsClass
{

 public:
    ThisIsClass();
    ~ThisIsClass();
    std::string _replace(char *line, std::string s1, std::string s2);
 };
 

#endif // MAIN_HPP