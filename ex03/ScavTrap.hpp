#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator=(const ScavTrap &copyAssignement);
        ~ScavTrap();
        virtual void attack(const std::string& target);
        void guardGate();
        static unsigned int get_attack();
        static unsigned int get_energy();
        static unsigned int get_hit();
};

#endif
