#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("kalvin");
	ClapTrap b("Jose");
	ClapTrap c(b);
	a.attack("Jose");
	c.attack("kalvin");
	a.takeDamage(0);
	c.takeDamage(0);
	a.beRepaired(0);
	c.beRepaired(0);
}
