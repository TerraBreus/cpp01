#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

std::string	replaceString(std::string oldString, std::string s1, std::string s2)
{
	std::string	newString;
	size_t		i = 0;
	size_t		j = 0;

	if (s1.empty())
		return (oldString);
	while (true)
	{
		j = oldString.find(s1, i);
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

int		createAndWriteOutput(std::string outputString, std::string filename)
{
	std::string		outputFilename = filename + ".replace";
	std::ofstream	outputFile(outputFilename.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Output file could not be created." << std::endl;
		return (-1);
	}
	std::cout << outputString;
	outputFile << outputString;
	return (0);
}

std::string	openFile(std::string filename)
{
	std::ifstream		inputFile(filename.c_str());
	std::stringstream	buffer;
	std::string			result;

	if (!inputFile.is_open())
	{
		std::cerr << filename << " did not open. Please check permissions." << std::endl;
		return ("");
	}
	buffer << inputFile.rdbuf();
	result = buffer.str();
	if (result.empty())
	{
		std::cerr << filename << " is empty. Please use a non-empty file to copy." << std::endl;
		return ("");
	}
	return (result);
}
