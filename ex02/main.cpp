#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// int main (void)
// {
//     ClapTrap a("Kalvin");
//     ScavTrap b("JOSE");
//     FragTrap c("Neuille");

//     c.highFivesGuys();
//     c.attack("kalvin");
//     a.takeDamage(30);
//     a.attack("JOSE");
//     b.guardGate();
//     b.takeDamage(0);
//     b.attack("kalvin");
//     a.takeDamage(20);
//     a.beRepaired(5);
//     b.beRepaired(5);
// }

int main (void)
{
    FragTrap c("Neuille");

    c.highFivesGuys();
    c.attack("kalvin");
    c.beRepaired(0);
    c.takeDamage(0);
}
