#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Jonny");
	ClapTrap	b("Murphy");

	a.attack("Murphy");
	b.takeDamage(5);
	a.beRepaired(10);
	a.printAttr();
	b.printAttr();
}
