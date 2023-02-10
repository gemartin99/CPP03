#include "FragTrap.hpp"

#include <iostream>

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->energy = other.energy;
	this->damage = other.damage;
	this->health = other.health;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	 std::cout << "FragTrap copy constructor called" << std::endl;
	 this->name = copy.name;
	 this->energy = copy.energy;
	 this->health = copy.health;
	 this->damage = copy.damage;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " displayed a positive high fives request" << std::endl;
}