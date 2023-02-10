#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
	public:
		FragTrap(std::string name);
		~FragTrap();	
		FragTrap& operator=(const FragTrap &other);
		FragTrap(const FragTrap &copy);
		void highFivesGuys(void);
		void	guardGate(void);
};

#endif