#include "ScavTrap.hpp"

// int main(void)
// {
//     ScavTrap a;
//     ScavTrap b(a);

//     a.guardGate();
//     a.attack("JOSE");
//     b.guardGate();
//     b.attack("JOSE");
// }

// int main (void)
// {
//     ClapTrap a;
//     ScavTrap b;

//     a.attack("JOSE");
//     b.guardGate();
//     b.attack("JOSE");
// }

int	main(void)
{
	ClapTrap a("Kalvin");
	ScavTrap b("JOSE");
	a.attack("JOSE");
	b.guardGate();
	b.takeDamage(0);
	b.attack("kalvin");
	a.takeDamage(20);
	a.beRepaired(5);
	b.beRepaired(5);
}
