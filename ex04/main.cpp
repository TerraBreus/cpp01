#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

std::string	openFile(std::string filename);
std::string	replaceString(std::string oldString, std::string s1, std::string s2);
int			createAndWriteOutput(std::string outputString, std::string filename);

int	sedIsForLosers(char *argv[])
{
	std::string			filename = argv[1];
	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];
	std::string			inputString;
	std::string			outputString;

	inputString = openFile(filename);
	if (inputString.empty())
		return (-1);
	outputString = replaceString(inputString, s1, s2);
	return (createAndWriteOutput(outputString, filename));
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sedIsForLosers filename s1 s2" << std::endl;
		return (-1);
	}
	return (sedIsForLosers(argv));
}
