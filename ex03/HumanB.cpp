#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon(NULL), name(name) 
{
}


void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::string	weaponToPrint;
	if (weapon != NULL)
		weaponToPrint = weapon->getType();
	else
		weaponToPrint = "bare hands";
	std::cout << this->name << " attacks with their " << weaponToPrint << std::endl;
}
