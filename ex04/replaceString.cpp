#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

std::string	replaceString(std::string oldString, std::string s1, std::string s2)
{
	std::string	newString;
	size_t		i = 0;
	size_t		j = 0;

	while (true)
	{
		j = oldString.find(s1, j);
		if (j == std::string::npos)
			break;
		newString += oldString.substr(i, j - i);
		newString += s2;
		j += s1.length();
		i = j;
	}
	newString += oldString.substr(i, oldString.length() - i);
	return (newString);
}
