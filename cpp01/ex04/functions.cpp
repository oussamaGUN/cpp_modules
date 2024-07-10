#include "main.hpp"

ThisIsClass::ThisIsClass(/* args */)
 {
 }
 
 ThisIsClass::~ThisIsClass()
 {
 }

std::string ThisIsClass::_replace(char *line, std::string s1, std::string s2)
{
	int len1 = s1.length();
	int pos = -1;
	std::string res = line;
	while ((pos = res.find(s1, pos + 1)) != -1)
	{
		res.erase(pos, len1);
		res.insert(pos, s2);
	}
	return res;
}