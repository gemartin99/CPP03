#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	instanceC("Clap");
	ScavTrap	instanceS("Scav");

	instanceS.attack("Enemy");
	instanceC.attack("CA");
	instanceS.guardGate();
	instanceC.beRepaired(4);
	instanceS.beRepaired(4);
	instanceS.takeDamage(5);
	instanceS.beRepaired(4);

	std::cout << std::endl;
	return (0);

}