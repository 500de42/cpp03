#include "ScavTrap.hpp"

// int main (void)
// {
//     ClapTrap a("Kalvin");
//     ScavTrap b("JOSE");

//     a.takeDamage(30);
//     a.attack("JOSE");
//     b.guardGate();
//     b.takeDamage(0);
//     b.attack("kalvin");
//     a.takeDamage(20);
//     a.beRepaired(5);
//     b.beRepaired(5);
// }

int main()
{
    ScavTrap a("kalvin");

    a.guardGate();
    a.attack("jose");
    a.beRepaired(50);
    a.takeDamage(60);
}
