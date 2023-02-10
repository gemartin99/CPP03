#include "ClapTrap.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap( void ): name(""), health(10),
	energy(10), damage(0)
{
		std::cout << "Default constructor for ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->energy = other.energy;
	this->damage = other.damage;
	this->health = other.health;
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), health(copy.health), energy(copy.energy), damage(copy.damage)
{
	 std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->health > 0)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->damage << " points of damage!" << std::endl;
		
	}
	else if (this->health > 0)
		std::cout << "ClapTrap " << this->name << " does not have enough energy" << std::endl;
	else if (this->energy > 0)
		std::cout << "ClapTrap " << this->name << " cannot attack because he has no life" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot attack because he has no life and does not have enough energy" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	while (this->energy > 0 && amount > 0 && this->health < 10 && this->health > 0 && this->damage == 0) //claptrap
	{
		this->energy--;
		amount--;
		this->health++;
		std::cout << "ClapTrap " << this->name << " has repaired itself and gained a life" << std::endl;
	}
	if (this->health == 10 && this->damage == 0)
		std::cout << "ClapTrap " << this->name << " cannot be repaired because it has the maximum number of lives." << std::endl;
	while (this->energy > 0 && amount > 0 && this->health < 100 && this->health > 0 && this->damage == 20) //claptrap
	{
		this->energy--;
		amount--;
		this->health++;
		std::cout << "ClapTrap " << this->name << " has repaired itself and gained a life" << std::endl;
	}
	if (this->health == 100 && this->damage == 20)
		std::cout << "ClapTrap " << this->name << " cannot be repaired because it has the maximum number of lives." << std::endl;
	while (this->energy > 0 && amount > 0 && this->health < 100 && this->health > 0 && this->damage == 30) //claptrap
	{
		this->energy--;
		amount--;
		this->health++;
		std::cout << "ClapTrap " << this->name << " has repaired itself and gained a life" << std::endl;
	}
	if (this->health == 100 && this->damage == 30)
		std::cout << "ClapTrap " << this->name << " cannot be repaired because it has the maximum number of lives." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	while (this->health > 0 && amount > 0)
	{
		std::cout << "ClapTrap " << this->name << " has received one damage" << std::endl;
		this->health--;
		amount--;
	}
	if (this->health == 0)
		std::cout << "ClapTrap " << this->name << " can't take any more damage" << std::endl;
}