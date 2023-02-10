
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	instance1("Number one");
	ClapTrap	instance2("Number two");

	instance1.attack("Number two");
	instance2.takeDamage(9);
	instance2.beRepaired(20);
}
