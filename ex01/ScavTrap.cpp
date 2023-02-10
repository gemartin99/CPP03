#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name): name(name), health(100), energy(50), damage(20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->health > 0)
	{
		this->energy--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->damage << " points of damage!" << std::endl;
	}
	else if (this->health > 0)
		std::cout << "ScavTrap " << this->name << " does not have enough energy" << std::endl;
	else if (this->energy > 0)
		std::cout << "ScavTrap " << this->name << " cannot attack because he has no life" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " cannot attack because he has no life and does not have enough energy" << std::endl;
}