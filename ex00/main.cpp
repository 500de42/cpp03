#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("kalvin");
	ClapTrap b("Jose");
	ClapTrap c(b);
	a.attack("Jose");
	c.attack("kalvin");
	a.takeDamage(5);
	c.takeDamage(5);
	a.beRepaired(5);
	c.beRepaired(9);
}
