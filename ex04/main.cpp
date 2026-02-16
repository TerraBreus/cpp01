#include <fstream>
#include <iostream>
#include <string>

int	sedIsForLosers(char *argv[])
{
	std::string			filename = argv[1];
	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];
	std::string			textFromFilename;
	
	//open filename and put text in textFromFilename
	//replace every instance of s1 to s2 in textFromFilename
	//create textForNewFile as `filename.replace` and put textFromFilename into it.
	
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (-1);
	else if (sedIsForLosers(argv) != 0)
		return (-1);
}
