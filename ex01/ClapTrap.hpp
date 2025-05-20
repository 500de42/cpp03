#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap :
{
    private :
        std::string Name;
        unsigned int Hit; // Health
        unsigned int Energy;
        unsigned int Attack;
    public :
        // constructeur
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copyAssignement);
        ~ClapTrap();
        //////////////////////////////////////
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif