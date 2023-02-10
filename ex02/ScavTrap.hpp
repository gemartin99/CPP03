#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	public:
		ScavTrap(std::string name);
		~ScavTrap();	
		ScavTrap& operator=(const ScavTrap &other);
		ScavTrap(const ScavTrap &copy);
		void	guardGate();
		void	attack(const std::string& target);
};

#endif