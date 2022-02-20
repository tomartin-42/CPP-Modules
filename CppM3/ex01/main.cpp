#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("Jonny ST");
	ScavTrap	b("Murphy CT");
	ScavTrap	c(b);

	a.attack("Murphy");
	b.guardGate();
	a.printAttr();
	b.printAttr();
}

