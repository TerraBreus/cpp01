#include "Harl.hpp"
#include <iostream>
#include <string>

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break ;
	}
	switch (i)
	{
		case 0 :
			debug();
			//FALLTHROUGH
		case 1 :
			info();
			//FALLTHROUGH
		case 2 :
			warning();
			//FALLTHROUGH
		case 3 :
		{
			error();
			break ;
		}
		default :
			std::cout << "default" << std::endl;
	}
}
