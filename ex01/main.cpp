#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	instanceC("Clap");
	ScavTrap	instanceS("Scav");

	instanceS.attack("Enemy");
	instanceS.guardGate();

	std::cout << std::endl;
	return (0);

}