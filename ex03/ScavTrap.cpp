#include "ScavTrap.hpp"

#include <iostream>

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->energy = other.energy;
	this->damage = other.damage;
	this->health = other.health;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	 std::cout << "ScavTrap copy constructor called" << std::endl;
	 this->name = copy.name;
	 this->energy = copy.energy;
	 this->health = copy.health;
	 this->damage = copy.damage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
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