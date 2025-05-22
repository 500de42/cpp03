#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

// int main (void)
// {
//     ClapTrap a("Kalvin");
//     ScavTrap b("JOSE");

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
    ClapTrap a("Kalvin");
    ScavTrap b("JOSE");
    FragTrap c("Neuille");

    c.highFivesGuys();
    c.attack("kalvin");
    a.takeDamage(30);
    a.attack("JOSE");
    b.guardGate();
    b.takeDamage(0);
    b.attack("kalvin");
    a.takeDamage(20);
    a.beRepaired(5);
    b.beRepaired(5);
}

// int main()
// {
//     DiamondTrap kalvin("kalvin");

//     kalvin.whoAmI();
//     kalvin.attack("jose");
//     kalvin.beRepaired(50);
//     kalvin.highFivesGuys();
//     kalvin.takeDamage(5);
// }

// int main()
// {
//     DiamondTrap kalvin("kalvin");
//     DiamondTrap ll("lll");
//     ll.whoAmI();
//     ll = kalvin;
    
//     ll.whoAmI();
//     ll.attack("jose");
//     ll.beRepaired(50);
//     ll.highFivesGuys();
//     ll.takeDamage(5);
// }

