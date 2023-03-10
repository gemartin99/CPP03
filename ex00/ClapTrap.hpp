#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
		int health;
		int energy;
		int damage;
		ClapTrap(void);
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &other);
		ClapTrap(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif