#include "DiamondTrap.hpp"

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	this->name = other.name;
	this->energy = other.energy;
	this->damage = other.damage;
	this->health = other.health;
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	 std::cout << "DiamondTrap copy constructor called" << std::endl;
	 this->name = copy.name;
	 this->energy = copy.energy;
	 this->health = copy.health;
	 this->damage = copy.damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}