#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int	sedIsForLosers(char *argv[])
{
	std::string			filename = argv[1];
	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];
	std::string			textFromFilename;
	
	//open filename and put text in textFromFilename
	std::ifstream inputFile(filename.c_str());
	std::stringstream	buffer;
	buffer << inputFile.rdbuf();
	std::string			inputString;
	inputString = buffer.str();
	std::cout << inputString;
	//replace every instance of s1 to s2 in textFromFilename
	size_t	pos = 0;
	while ((pos = inputString.find(s1, pos)) != std::string::npos)
	{
		inputString.erase(pos, s1.length());
		inputString.insert(pos, s2);
		pos += s2.length();
	}
	std::cout << inputString;
	//create textForNewFile as `filename.replace` and put textFromFilename into it.
	std::string		outputFilename = filename + ".replace";
	std::ofstream	outputFile(outputFilename.c_str());
	outputFile << inputString;
	
	return (0);
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
