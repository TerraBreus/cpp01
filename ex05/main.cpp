#include <iostream>
#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	std::string	level;
	Harl		harl;

	if (argc != 2)
	{
		std::cerr << "Usage: ./Harl [LEVEL]" << std::endl;
		return (-1);
	}
	level = argv[1];
	harl.complain(level);
	return (0);
}
