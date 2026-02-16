#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);
};
#endif
