#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class DiamondTrap
{
	protected:
		std::string name;
		int health;
		int energy;
		int damage;
		DiamondTrap(void);
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &other);
		DiamondTrap(const DiamondTrap &copy);
};

#endif